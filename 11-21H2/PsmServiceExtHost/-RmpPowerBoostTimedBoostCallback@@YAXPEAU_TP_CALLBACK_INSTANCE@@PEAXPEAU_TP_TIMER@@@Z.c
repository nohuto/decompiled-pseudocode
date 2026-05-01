/*
 * XREFs of ?RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180004740
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x1800021EC (-RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004B14 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004B48 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004C2C (-RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall RmpPowerBoostTimedBoostCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // si
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  unsigned __int64 v10; // rax
  char v11; // [rsp+38h] [rbp-D0h] BYREF
  char v12; // [rsp+39h] [rbp-CFh] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  char v14[144]; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+D8h] [rbp-30h] BYREF
  char *v16; // [rsp+F8h] [rbp-10h]
  int v17; // [rsp+100h] [rbp-8h]
  int v18; // [rsp+104h] [rbp-4h]
  char *v19; // [rsp+108h] [rbp+0h]
  int v20; // [rsp+110h] [rbp+8h]
  int v21; // [rsp+114h] [rbp+Ch]
  unsigned __int64 *v22; // [rsp+118h] [rbp+10h]
  int v23; // [rsp+120h] [rbp+18h]
  int v24; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+128h] [rbp+20h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  v6 = 0;
  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, v4, v5) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DC218, (int)&dword_1800C31C8, 0, 0, 2u, &v25);
  RmpPowerBoostAcquireLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  if ( (a2[3224] & 1) == 0 && (a2[168] & 4) != 0 )
  {
    RtlQueryUnbiasedInterruptTime(&v13);
    RmpPowerBoostArmTimedBoostTimer(v13 / 0x2710, (struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
    v9 = *((_DWORD *)a2 + 42);
    if ( (v9 & 8) == 0 )
    {
      *((_DWORD *)a2 + 42) = v9 & 0xFFFFFFFB;
      v6 = 1;
      RmpSystemApplyAppLaunchPowerBoost(0);
    }
  }
  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, v7, v8) )
  {
    v10 = *((_QWORD *)a2 + 19);
    v24 = 0;
    v21 = 0;
    v18 = 0;
    v13 = v10;
    LOBYTE(v10) = (*((_DWORD *)a2 + 42) & 4) != 0;
    v12 = v6;
    v11 = v10;
    v22 = &v13;
    v19 = &v11;
    v16 = &v12;
    v23 = 8;
    v20 = 1;
    v17 = 1;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DC218, (int)&dword_1800C31F0, 0, 0, 5u, &v15);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  CempLockTrackerClearForThread(HampLockTrackerId);
}
