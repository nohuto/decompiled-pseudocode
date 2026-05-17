/*
 * XREFs of RtlpTpTimerCallback @ 0x18004C060
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     TppStartThreadData @ 0x18004EBC0 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x18004F090 (TppCompleteThreadData.c)
 *     RtlpTpImpersonate @ 0x180088FD0 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180126060 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801260FC (RtlpTpETWCallbackStop.c)
 */

__int64 __fastcall RtlpTpTimerCallback(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a2 + 88)
    || (result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 92), 1), !(_DWORD)result) )
  {
    if ( *(_QWORD *)(a2 + 16) )
      RtlpTpImpersonate();
    v3 = NtCurrentTeb();
    v4 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v5 = 2147353478LL;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStart(
        0,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v3->SubProcessTag);
    TppStartThreadData(&v9, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v3->SubProcessTag);
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v6);
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v8 = 0LL;
      NtSetInformationThread(-2LL, 5LL, &v8);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v4 )
      RtlpTpETWCallbackStop(
        0,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v3->SubProcessTag);
    return TppCompleteThreadData(v9);
  }
  return result;
}
