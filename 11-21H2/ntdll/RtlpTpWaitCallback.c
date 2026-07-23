/*
 * XREFs of RtlpTpWaitCallback @ 0x18007F040
 * Callers:
 *     <none>
 * Callees:
 *     TppCompleteThreadData @ 0x1800212E8 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x180021410 (TppStartThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpImpersonate @ 0x1800714A0 (RtlpTpImpersonate.c)
 *     RtlpTpWaitCheckReset @ 0x18007F164 (RtlpTpWaitCheckReset.c)
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180124620 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801246BC (RtlpTpETWCallbackStop.c)
 */

void __fastcall RtlpTpWaitCallback(PTP_CALLBACK_INSTANCE a1, __int64 *a2, PTP_WAIT a3, unsigned int a4)
{
  struct _TEB *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 *ThreadInformation; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+20h]

  v14 = a4;
  ThreadInformation = a2;
  if ( (a2[1] & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4, a3);
  if ( *a2 )
    RtlpTpImpersonate(*a2);
  if ( (a2[1] & 4) != 0 )
    *((_DWORD *)a2 + 22) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStart(0, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  TppStartThreadData(v12, a2[4], a2[5], (__int64)v6->SubProcessTag);
  LOBYTE(v9) = a4 == 258;
  ((void (__fastcall *)(__int64, __int64))a2[4])(a2[5], v9);
  v11 = *((_DWORD *)a2 + 2);
  if ( (v11 & 4) != 0 )
    *((_DWORD *)a2 + 22) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    v11 = *((_DWORD *)a2 + 2);
  }
  if ( (v11 & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4, v10);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v7 )
    RtlpTpETWCallbackStop(0, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  TppCompleteThreadData(v12[0]);
}
