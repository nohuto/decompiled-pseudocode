/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x1800F3F60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 */

signed __int64 __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  HANDLE DeferredCriticalSectionEvent; // rax
  signed __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  DeferredCriticalSectionEvent = *(HANDLE *)(a1 + 24);
  if ( !DeferredCriticalSectionEvent )
    DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
  {
    _InterlockedOr(v6, 0);
    return RtlpWakeByAddress(a1 + 8, 0);
  }
  else
  {
    result = ZwSetEvent();
    if ( (int)result < 0 )
      RtlRaiseStatus(result, v4, v5);
  }
  return result;
}
