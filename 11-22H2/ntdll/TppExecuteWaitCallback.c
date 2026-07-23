/*
 * XREFs of TppExecuteWaitCallback @ 0x18004E8C4
 * Callers:
 *     TppWaitCompletion @ 0x18004E7F0 (TppWaitCompletion.c)
 *     TppExecuteWaitTimerCallback @ 0x180050870 (TppExecuteWaitTimerCallback.c)
 * Callees:
 *     LdrAddRefDll @ 0x18002D410 (LdrAddRefDll.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     TppStartThreadData @ 0x18004EBC0 (TppStartThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x18004EC88 (TppWorkCallbackPrologRelease.c)
 *     TppCompleteThreadData @ 0x18004F090 (TppCompleteThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004F67C (TppCleanupGroupMemberCallbackProlog.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180126060 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801260FC (RtlpTpETWCallbackStop.c)
 */

__int64 __fastcall TppExecuteWaitCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  if ( a3 == 258 )
  {
    result = TppWorkCallbackPrologRelease(Instance);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a2 + 136);
  if ( !v6 )
  {
LABEL_3:
    TppCleanupGroupMemberCallbackProlog(Instance);
LABEL_4:
    v7 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(a2 + 144),
        a2 + 392,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TppStartThreadData(&v10, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    *((_QWORD *)Instance + 11) = *(_QWORD *)(a2 + 80);
    *((_QWORD *)Instance + 12) = *(_QWORD *)(a2 + 88);
    (*(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _QWORD, __int64, _QWORD))(a2 + 80))(
      Instance,
      *(_QWORD *)(a2 + 88),
      a2,
      a3);
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v7 )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(a2 + 144),
        a2 + 392,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    return TppCompleteThreadData(v10);
  }
  if ( LdrAddRefDll(0, *(PVOID *)(a2 + 136)) >= 0 )
  {
    *((_DWORD *)Instance + 36) |= 0x100u;
    *((_QWORD *)Instance + 21) = v6;
    goto LABEL_3;
  }
  TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL, 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a2);
  if ( !(_DWORD)result )
    return (**(__int64 (__fastcall ***)(__int64))(a2 + 8))(a2);
  return result;
}
