/*
 * XREFs of xxxWaitForDITMouseInjectionFlush @ 0x1C010756C
 * Callers:
 *     xxxSendInput @ 0x1C007EDD4 (xxxSendInput.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0214098 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 *     xxxRemoveQueueCompletion @ 0x1C00A4D48 (xxxRemoveQueueCompletion.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxWaitForDITMouseInjectionFlush()
{
  BOOL v0; // ebx
  __int64 v1; // rax
  __int32 v2; // esi
  __int64 i; // rcx
  NTSTATUS v4; // ebx
  __int64 result; // rax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  while ( gbMouseInjectionBlockedOnDIT == 1 )
  {
    ++gcDITMouseInjectionWaiters;
    LeaveCrit();
    KeWaitForSingleObject(gpsemDITMouseInjectionWaiters, UserRequest, 0, 0, 0LL);
    EnterCrit(1LL, 0LL);
  }
  gbMouseInjectionBlockedOnDIT = 1;
  LeaveCrit();
  v0 = (unsigned __int8)InitiateWaitForInjectionCompletion(WakeInjectedFlushWaiter) != 0;
  EnterCrit(1LL, 0LL);
  if ( v0 )
  {
    v1 = *(_QWORD *)(gptiCurrent + 448LL);
    *(_DWORD *)(gptiCurrent + 1256LL) |= 0x400000u;
    v2 = *(_DWORD *)(v1 + 16);
    Object[0] = gpkeDITMouseInjectionResponseEvent;
    Object[1] = *(PVOID *)(gptiCurrent + 1416LL);
    i = *(_QWORD *)(gptiCurrent + 448LL);
    while ( 1 )
    {
      _InterlockedExchange((volatile __int32 *)(i + 16), 64);
      UserSessionSwitchLeaveCrit(i);
      v4 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 1, 0, 0LL, 0LL);
      EnterCrit(1LL, 0LL);
      if ( v4 != 1 )
        break;
      xxxRemoveQueueCompletion();
      for ( i = *(_QWORD *)(gptiCurrent + 448LL); (*(_DWORD *)(i + 8) & 0x40) != 0; i = *(_QWORD *)(gptiCurrent + 448LL) )
        xxxReceiveMessage(gptiCurrent);
    }
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), v2);
    *(_DWORD *)(gptiCurrent + 1256LL) &= ~0x400000u;
  }
  gbMouseInjectionBlockedOnDIT = 0;
  result = gcDITMouseInjectionWaiters;
  if ( gcDITMouseInjectionWaiters )
  {
    KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
    result = gcDITMouseInjectionWaiters;
    gcDITMouseInjectionWaiters = 0;
  }
  return result;
}
