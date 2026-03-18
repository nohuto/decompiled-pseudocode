/*
 * XREFs of WheapInitializeInUsePageOfflineNotifications @ 0x140857B64
 * Callers:
 *     WheaInitializeServices @ 0x140B26BAC (WheaInitializeServices.c)
 * Callees:
 *     <none>
 */

PVOID *WheapInitializeInUsePageOfflineNotifications()
{
  PVOID *result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  WheapInUsePageOfflineNotifyLock = 0LL;
  result = &WheapInUsePageOfflineNotifyList;
  qword_140D00C38 = (__int64)&WheapInUsePageOfflineNotifyList;
  WheapInUsePageOfflineNotifyList = &WheapInUsePageOfflineNotifyList;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  WheapInUsePageOfflineNotifyInit = 1;
  return result;
}
