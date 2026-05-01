/*
 * XREFs of ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18006D550
 * Callers:
 *     HamRpcSrvCloseDesktopBridgeActivity @ 0x18009DAB0 (HamRpcSrvCloseDesktopBridgeActivity.c)
 * Callees:
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x1800018B0 (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArAcquireGlobalLockShared@@YAXXZ @ 0x180001DC8 (-ArAcquireGlobalLockShared@@YAXXZ.c)
 *     ?ArReleaseGlobalLockShared@@YAXXZ @ 0x180001DFC (-ArReleaseGlobalLockShared@@YAXXZ.c)
 *     ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180004E98 (-ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005200 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005250 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180005DA8 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?ArManagerFindActivityByHandle@@YAPEAU_AR_ACTIVITY@@PEAU_ACTIVITY_RESTARTER@@_K1@Z @ 0x18006D3C4 (-ArManagerFindActivityByHandle@@YAPEAU_AR_ACTIVITY@@PEAU_ACTIVITY_RESTARTER@@_K1@Z.c)
 */

__int64 __fastcall ArSrvCloseActivity(__int64 a1, __int64 a2)
{
  struct _ACTIVITY_RESTARTER *v4; // rdi
  unsigned int v5; // ebx
  struct _AR_ACTIVITY *ActivityByHandle; // rax
  struct _AR_ACTIVITY *v7; // rdi
  int v8; // esi
  _BYTE v10[144]; // [rsp+20h] [rbp-B8h] BYREF

  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v10);
  ArAcquireGlobalLockShared();
  v4 = (struct _ACTIVITY_RESTARTER *)ArGlobals;
  ArReleaseGlobalLockShared();
  v5 = 0;
  if ( v4 )
  {
    ActivityByHandle = ArManagerFindActivityByHandle(v4, a1, a2);
    v7 = ActivityByHandle;
    if ( ActivityByHandle )
    {
      ArHostWaitForAndSetChangeInProgress(*((struct _AR_ACTIVITY_HOST **)ActivityByHandle + 2));
      if ( *((_BYTE *)v7 + 32) == 3 )
        v8 = -2147483638;
      else
        v8 = ArActClose(v7);
      ArHostClearChangeInProgress(*((struct _AR_ACTIVITY_HOST **)v7 + 2));
      ArActDereference(v7);
      if ( v8 < 0 )
        v5 = v8;
    }
    else
    {
      v5 = -1073741275;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  CempLockTrackerClearForThread(ArLockTrackerId);
  return v5;
}
