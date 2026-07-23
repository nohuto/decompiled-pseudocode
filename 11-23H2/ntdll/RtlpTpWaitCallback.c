/*
 * XREFs of RtlpTpWaitCallback @ 0x18004E410
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpWaitCheckReset @ 0x18004E534 (RtlpTpWaitCheckReset.c)
 *     TppStartThreadData @ 0x18004EA60 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x18004EF30 (TppCompleteThreadData.c)
 *     RtlpTpImpersonate @ 0x1800897D0 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A1050 (NtSetInformationThread.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x1801274E0 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18012757C (RtlpTpETWCallbackStop.c)
 */

void __fastcall RtlpTpWaitCallback(PTP_CALLBACK_INSTANCE a1, _BYTE *a2, PTP_WAIT a3, unsigned int a4)
{
  struct _TEB *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE *ThreadInformation; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h]

  v13 = a4;
  ThreadInformation = a2;
  if ( (a2[8] & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4, a3);
  if ( *(_QWORD *)a2 )
    RtlpTpImpersonate(*(_QWORD *)a2, a2, a3);
  if ( (a2[8] & 4) != 0 )
    *((_DWORD *)a2 + 22) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStart(0, *((_QWORD *)a2 + 6), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v6->SubProcessTag);
  TppStartThreadData(v11, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), v6->SubProcessTag);
  LOBYTE(v9) = a4 == 258;
  (*((void (__fastcall **)(_QWORD, __int64))a2 + 4))(*((_QWORD *)a2 + 5), v9);
  if ( (a2[8] & 4) != 0 )
    *((_DWORD *)a2 + 22) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  if ( (a2[8] & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4, v10);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v7 )
    RtlpTpETWCallbackStop(0, *((_QWORD *)a2 + 6), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v6->SubProcessTag);
  TppCompleteThreadData(v11[0]);
}
