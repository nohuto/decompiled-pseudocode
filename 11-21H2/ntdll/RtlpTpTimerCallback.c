/*
 * XREFs of RtlpTpTimerCallback @ 0x180020130
 * Callers:
 *     <none>
 * Callees:
 *     TppCompleteThreadData @ 0x1800212E8 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x180021410 (TppStartThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpImpersonate @ 0x1800714A0 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180124620 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801246BC (RtlpTpETWCallbackStop.c)
 */

__int64 __fastcall RtlpTpTimerCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  struct _TEB *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a2 + 88)
    || (result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 92), 1), !(_DWORD)result) )
  {
    v5 = *(_QWORD *)(a2 + 16);
    if ( v5 )
      RtlpTpImpersonate();
    v6 = NtCurrentTeb();
    v7 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v5, a2, a3, a4) )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      RtlpTpETWCallbackStart(
        0,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v6->SubProcessTag);
    TppStartThreadData(&v16, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v6->SubProcessTag);
    LOBYTE(v9) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v9);
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v15 = 0LL;
      NtSetInformationThread(-2LL, 5LL, &v15, 8LL);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v10, v12, v13) )
      v7 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v7 )
      RtlpTpETWCallbackStop(
        0,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v6->SubProcessTag);
    return TppCompleteThreadData(v16);
  }
  return result;
}
