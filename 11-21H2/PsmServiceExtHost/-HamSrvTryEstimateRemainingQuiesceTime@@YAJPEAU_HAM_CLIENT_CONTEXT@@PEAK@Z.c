/*
 * XREFs of ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x18004620C
 * Callers:
 *     HamRpcSrvTryEstimateRemainingQuiesceTime @ 0x180046200 (HamRpcSrvTryEstimateRemainingQuiesceTime.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800423C0 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800463DC (-HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTryEstimateRemainingQuiesceTime(struct _HAM_CLIENT_CONTEXT *a1, unsigned int *a2)
{
  void *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r12
  unsigned int v7; // esi
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v9; // rbx
  unsigned int v10; // edi
  int v12; // edx
  int v13; // r9d
  int v14; // eax
  struct _RM_HAM_ACTIVITY_HOST *v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+E0h] [rbp-20h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v22; // [rsp+100h] [rbp+0h]
  int v23; // [rsp+108h] [rbp+8h]
  int v24; // [rsp+10Ch] [rbp+Ch]
  int *v25; // [rsp+110h] [rbp+10h]
  int v26; // [rsp+118h] [rbp+18h]
  int v27; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v28; // [rsp+120h] [rbp+20h]
  int v29; // [rsp+128h] [rbp+28h]
  int v30; // [rsp+12Ch] [rbp+2Ch]
  unsigned int *v31; // [rsp+130h] [rbp+30h]
  int v32; // [rsp+138h] [rbp+38h]
  int v33; // [rsp+13Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+140h] [rbp+40h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF8D3,
      0LL,
      0LL,
      2u,
      &v34);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  v4 = (void *)*((_QWORD *)a1 + 21);
  v5 = *(_QWORD *)a1;
  v16 = 0LL;
  v6 = -1LL;
  v7 = 0;
  HostByProcessHandle = RmHamFindHostByProcessHandle(v5, v4, 3, &v16);
  v9 = v16;
  v10 = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    v6 = *((_QWORD *)v16 - 4);
    v7 = HampHostTryEstimateRemainingQuiesceTime(v16);
    *a2 = v7;
    v10 = 0;
  }
  if ( v9 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v9 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v9 - 64));
    RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v14 = *((_DWORD *)a1 + 35);
    v33 = 0;
    v30 = 0;
    v27 = 0;
    v24 = 0;
    v18 = v14;
    v31 = &v17;
    v28 = &v19;
    v25 = &v18;
    v22 = &v16;
    v32 = v13;
    v29 = v12;
    v26 = v13;
    v23 = v13;
    v17 = v7;
    v19 = v6;
    LODWORD(v16) = v10;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF690,
      0LL,
      0LL,
      6u,
      &v21);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v10;
}
