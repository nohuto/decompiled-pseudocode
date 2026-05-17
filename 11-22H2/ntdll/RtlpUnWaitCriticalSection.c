/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x1800F3CA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

signed __int64 __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  HANDLE DeferredCriticalSectionEvent; // rax
  signed __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  DeferredCriticalSectionEvent = *(HANDLE *)(a1 + 24);
  if ( !DeferredCriticalSectionEvent )
    DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
  {
    _InterlockedOr(v4, 0);
    return RtlpWakeByAddress(a1 + 8, 0);
  }
  else
  {
    result = ZwSetEvent();
    if ( (int)result < 0 )
      RtlRaiseStatus((unsigned int)result);
  }
  return result;
}
