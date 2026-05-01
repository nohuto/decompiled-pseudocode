/*
 * XREFs of ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18006CBC8
 * Callers:
 *     HamRpcSrvCloseDesktopBridgeActivity @ 0x1800984B0 (HamRpcSrvCloseDesktopBridgeActivity.c)
 * Callees:
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180003154 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800031A4 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArReleaseGlobalLockShared@@YAXXZ @ 0x1800036A8 (-ArReleaseGlobalLockShared@@YAXXZ.c)
 *     ?ArAcquireGlobalLockShared@@YAXXZ @ 0x1800036D8 (-ArAcquireGlobalLockShared@@YAXXZ.c)
 *     ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18000370C (-ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180003738 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?ArManagerFindActivityByHandle@@YAPEAU_AR_ACTIVITY@@PEAU_ACTIVITY_RESTARTER@@_K1@Z @ 0x18006CA24 (-ArManagerFindActivityByHandle@@YAPEAU_AR_ACTIVITY@@PEAU_ACTIVITY_RESTARTER@@_K1@Z.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006CE54 (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
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
      ArActDereference((volatile signed __int64 *)v7);
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
