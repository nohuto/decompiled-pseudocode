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

void __fastcall RtlpTpWaitCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _TEB *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h]

  v13 = a4;
  v12 = a2;
  if ( (*(_BYTE *)(a2 + 8) & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( *(_QWORD *)a2 )
    RtlpTpImpersonate(*(_QWORD *)a2);
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    *(_DWORD *)(a2 + 88) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  v7 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStart(
      0,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v6->SubProcessTag);
  TppStartThreadData(v11, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v6->SubProcessTag);
  LOBYTE(v9) = a4 == 258;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v9);
  v10 = *(_DWORD *)(a2 + 8);
  if ( (v10 & 4) != 0 )
    *(_DWORD *)(a2 + 88) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v12 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v12, 8LL);
    v10 = *(_DWORD *)(a2 + 8);
  }
  if ( (v10 & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v7 )
    RtlpTpETWCallbackStop(
      0,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v6->SubProcessTag);
  TppCompleteThreadData(v11[0]);
}
