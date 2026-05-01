/*
 * XREFs of ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18004D4D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180046464 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800515BE (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x1800515F2 (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 */

__int64 __fastcall HampManagerSystemStateChangedCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        int *a5)
{
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  int v9; // eax
  int v10; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+D0h] [rbp-48h] BYREF
  int *v13; // [rsp+F0h] [rbp-28h]
  int v14; // [rsp+F8h] [rbp-20h]
  int v15; // [rsp+FCh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BFC9A,
      0LL,
      0LL,
      2u,
      &v12);
  for ( i = HampHostEnumerateHostsInNode((struct _HAM_RC_TREE_NODE *)(a4 + 128), 0, 0LL); ; i = HampManagerGetNextHost(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    HampHostAmbientStateChanged(i, a5, 4LL);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v9 = *a5;
    v15 = 0;
    v10 = v9;
    v14 = 4;
    v13 = &v10;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BFE10,
      0LL,
      0LL,
      3u,
      &v12);
  }
  return 0LL;
}
