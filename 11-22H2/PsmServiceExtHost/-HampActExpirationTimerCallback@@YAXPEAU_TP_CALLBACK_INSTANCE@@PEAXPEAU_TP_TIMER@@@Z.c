/*
 * XREFs of ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007B5B0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014438 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B664 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18007B88C (-HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActVerify@@YA?AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z @ 0x18007C0C4 (-HampActVerify@@YA-AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z.c)
 */

void __fastcall HampActExpirationTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_HAM_ACTIVITY_HOST **a2,
        struct _TP_TIMER *a3)
{
  struct _HAM_DEPENDENCY_GROUP *v5; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v6; // rax
  struct _RM_HAM_ACTIVITY_HOST *v7; // [rsp+30h] [rbp-E8h] BYREF
  char v8[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+D0h] [rbp-48h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v10; // [rsp+F0h] [rbp-28h]
  int v11; // [rsp+F8h] [rbp-20h]
  int v12; // [rsp+FCh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v8);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C2119,
      0LL,
      0LL,
      2u,
      &v9);
  HampHostAcquireLockExclusiveEx(a2[10], 0);
  HampActVerify(a2);
  if ( a2[67] == a3 )
  {
    a2[67] = 0LL;
    a2[68] = 0LL;
    HampActMarkExpired((struct _HAM_ACTIVITY *)a2);
    HampHostUpdateActivityState(a2[10]);
  }
  else
  {
    a3 = 0LL;
  }
  HampActVerify(a2);
  if ( a3 )
    v5 = HampHostCheckEnterDependencyWorker(a2[10]);
  else
    v5 = 0LL;
  HampHostReleaseLockExclusiveEx(a2[10]);
  CemRcObjectDereference(a2);
  if ( v5 )
    HampDepGroupRunStateChangeWorker(v5);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( a3 )
    TpReleaseTimer(a3);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
  {
    v6 = a2[5];
    v12 = 0;
    v7 = v6;
    v11 = 8;
    v10 = &v7;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C20DD,
      0LL,
      0LL,
      3u,
      &v9);
  }
}
