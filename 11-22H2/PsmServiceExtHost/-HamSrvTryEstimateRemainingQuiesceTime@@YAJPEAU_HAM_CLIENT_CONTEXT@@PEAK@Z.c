/*
 * XREFs of ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x18003E5CC
 * Callers:
 *     HamRpcSrvTryEstimateRemainingQuiesceTime @ 0x18003E5C0 (HamRpcSrvTryEstimateRemainingQuiesceTime.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003E7B4 (-HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18004BDD8 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E0C0 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamSrvTryEstimateRemainingQuiesceTime(struct _HAM_CLIENT_CONTEXT *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r15
  unsigned int v6; // esi
  int v7; // eax
  struct _RM_HAM_ACTIVITY_HOST *v8; // rbx
  unsigned int v9; // edi
  char *v10; // rax
  unsigned int Pid; // eax
  struct _RM_HAM_ACTIVITY_HOST *v14; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+E0h] [rbp-20h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v20; // [rsp+100h] [rbp+0h]
  int v21; // [rsp+108h] [rbp+8h]
  int v22; // [rsp+10Ch] [rbp+Ch]
  unsigned int *v23; // [rsp+110h] [rbp+10h]
  int v24; // [rsp+118h] [rbp+18h]
  int v25; // [rsp+11Ch] [rbp+1Ch]
  _QWORD *v26; // [rsp+120h] [rbp+20h]
  int v27; // [rsp+128h] [rbp+28h]
  int v28; // [rsp+12Ch] [rbp+2Ch]
  unsigned int *v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+13Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+140h] [rbp+40h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C1732,
      0LL,
      0LL,
      2u,
      &v32);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  v14 = 0LL;
  LOBYTE(v4) = 2;
  v5 = -1LL;
  v6 = 0;
  v7 = HampHostFindByClient(a1, v4, &v14, v17);
  v8 = v14;
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( v14 )
      v10 = (char *)v14 - 64;
    else
      v10 = 0LL;
    v5 = *((_QWORD *)v10 + 4);
    v6 = HampHostTryEstimateRemainingQuiesceTime(v14);
    *a2 = v6;
    v9 = 0;
  }
  if ( v8 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v8 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v8 - 64) & -(__int64)(v8 != 0LL)));
    RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v15 = v6;
    v17[0] = v5;
    Pid = HampClientGetPid(a1);
    v31 = 0;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v16 = Pid;
    v29 = &v15;
    v26 = v17;
    v23 = &v16;
    v20 = &v14;
    LODWORD(v14) = v9;
    v30 = 4;
    v27 = 8;
    v24 = 4;
    v21 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C141C,
      0LL,
      0LL,
      6u,
      &v19);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v9;
}
