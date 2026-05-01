/*
 * XREFs of PsmHamGetPackageDebugMode @ 0x180028240
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180028520 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z @ 0x180028920 (-HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x1800289D0 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall PsmHamGetPackageDebugMode(unsigned __int8 *a1, unsigned int a2, unsigned __int16 *a3)
{
  struct _RM_SERVICE_GLOBALS *v5; // r14
  int v7; // edi
  struct _HAM_PACKAGE *v8; // rax
  struct _HAM_PACKAGE *v9; // r14
  unsigned __int8 v10; // r15
  int v11; // eax
  __int64 v12; // rax
  unsigned __int8 v15; // [rsp+30h] [rbp-218h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-214h] BYREF
  _BYTE v17[208]; // [rsp+40h] [rbp-208h] BYREF
  char v18[144]; // [rsp+110h] [rbp-138h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+1A0h] [rbp-A8h] BYREF
  unsigned __int16 *v20; // [rsp+1C0h] [rbp-88h]
  int v21; // [rsp+1C8h] [rbp-80h]
  int v22; // [rsp+1CCh] [rbp-7Ch]
  unsigned int *v23; // [rsp+1D0h] [rbp-78h]
  __int64 v24; // [rsp+1D8h] [rbp-70h]
  unsigned __int8 *v25; // [rsp+1E0h] [rbp-68h]
  int v26; // [rsp+1E8h] [rbp-60h]
  int v27; // [rsp+1ECh] [rbp-5Ch]
  unsigned __int8 *v28; // [rsp+1F0h] [rbp-58h]
  __int64 v29; // [rsp+1F8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+200h] [rbp-48h] BYREF

  v5 = RmSvcGlobals;
  v7 = 2;
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C07BA, 0, 0, 2u, &v30);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  HampPkgInfoInitialize(a3, a1, a2, (struct _HAM_PACKAGE_INFO *)v17);
  v8 = HampPkgFindInManager((struct _RM_SERVICE_GLOBALS *)((char *)v5 + 2248), (struct _HAM_PACKAGE_INFO *)v17);
  v9 = v8;
  if ( v8 )
  {
    v10 = HampPkgSnapshotDebugState(v8);
    CemRcObjectDereference(v9);
  }
  else
  {
    v10 = 0;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v15 = v10;
    v28 = &v15;
    v16 = a2;
    v29 = 1LL;
    v11 = a1[1];
    v25 = a1;
    v27 = 0;
    v24 = 4LL;
    v26 = 4 * v11 + 8;
    v23 = &v16;
    if ( a3 )
    {
      v12 = -1LL;
      while ( a3[++v12] != 0 )
        ;
      v7 = 2 * v12 + 2;
    }
    else
    {
      a3 = (unsigned __int16 *)&word_1800B66C4;
    }
    v22 = 0;
    v20 = a3;
    v21 = v7;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C02BB, 0, 0, 6u, &v19);
  }
  return v10;
}
