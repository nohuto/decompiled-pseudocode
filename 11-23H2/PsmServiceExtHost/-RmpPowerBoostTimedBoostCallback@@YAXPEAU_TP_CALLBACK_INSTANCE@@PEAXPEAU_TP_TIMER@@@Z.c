/*
 * XREFs of ?RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800127E0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800129A8 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800129DC (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180012A24 (-RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x180012A80 (-RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

void __fastcall RmpPowerBoostTimedBoostCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  char v4; // si
  int v5; // eax
  unsigned __int64 v6; // rax
  char v7; // [rsp+38h] [rbp-D0h] BYREF
  char v8; // [rsp+39h] [rbp-CFh] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-C8h] BYREF
  char v10[144]; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+D8h] [rbp-30h] BYREF
  char *v12; // [rsp+F8h] [rbp-10h]
  int v13; // [rsp+100h] [rbp-8h]
  int v14; // [rsp+104h] [rbp-4h]
  char *v15; // [rsp+108h] [rbp+0h]
  int v16; // [rsp+110h] [rbp+8h]
  int v17; // [rsp+114h] [rbp+Ch]
  unsigned __int64 *v18; // [rsp+118h] [rbp+10h]
  int v19; // [rsp+120h] [rbp+18h]
  int v20; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+128h] [rbp+20h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v10);
  v4 = 0;
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C460F, 0, 0, 2u, &v21);
  RmpPowerBoostAcquireLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  if ( (a2[3528] & 1) == 0 && (a2[168] & 4) != 0 )
  {
    RtlQueryUnbiasedInterruptTime(&v9);
    RmpPowerBoostArmTimedBoostTimer(v9 / 0x2710, (struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
    v5 = *((_DWORD *)a2 + 42);
    if ( (v5 & 8) == 0 )
    {
      *((_DWORD *)a2 + 42) = v5 & 0xFFFFFFFB;
      v4 = 1;
      RmpSystemApplyAppLaunchPowerBoost(0);
    }
  }
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
  {
    v6 = *((_QWORD *)a2 + 19);
    v20 = 0;
    v17 = 0;
    v14 = 0;
    v9 = v6;
    LOBYTE(v6) = (*((_DWORD *)a2 + 42) & 4) != 0;
    v8 = v4;
    v7 = v6;
    v18 = &v9;
    v15 = &v7;
    v12 = &v8;
    v19 = 8;
    v16 = 1;
    v13 = 1;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C4637, 0, 0, 5u, &v11);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  CempLockTrackerClearForThread(HampLockTrackerId);
}
