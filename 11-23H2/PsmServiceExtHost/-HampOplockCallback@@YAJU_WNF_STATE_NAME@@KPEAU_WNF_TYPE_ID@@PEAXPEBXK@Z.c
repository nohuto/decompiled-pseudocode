/*
 * XREFs of ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800479B0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041E80 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18005534E (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@W4_HOST_GROUP@@PEAE@Z @ 0x180055382 (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18006FD70 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 */

__int64 __fastcall HampOplockCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        char *a5,
        unsigned int a6)
{
  unsigned __int8 v8; // dl
  __int64 v9; // rcx
  _QWORD *v10; // r8
  unsigned int v11; // edi
  unsigned int *v12; // rbx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  __int64 v14; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v15; // rbx
  unsigned __int64 v16; // rsi
  int v17; // ebx
  char v19[4]; // [rsp+30h] [rbp-F8h] BYREF
  int v20; // [rsp+34h] [rbp-F4h] BYREF
  char v21[144]; // [rsp+40h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+D0h] [rbp-58h] BYREF
  int *v23; // [rsp+F0h] [rbp-38h]
  int v24; // [rsp+F8h] [rbp-30h]
  int v25; // [rsp+FCh] [rbp-2Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C1BE5,
      0LL,
      0LL,
      2u,
      &v22);
  v8 = 4;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = HamOplockWatchStateNames;
    if ( a1 == HamOplockWatchStateNames[v9] )
      break;
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 4 )
      goto LABEL_9;
  }
  v8 = v9;
LABEL_9:
  v11 = v8 | 0x1000;
  if ( !a5 || a6 < 4 || (a6 & 3) != 0 )
  {
    v17 = -1073741584;
    goto LABEL_26;
  }
  v12 = (unsigned int *)(a5 + 4);
  if ( !*(_DWORD *)a5 )
    goto LABEL_24;
  if ( *(_DWORD *)a5 == -1 )
  {
    for ( i = HampHostEnumerateHostsInNode((struct _HAM_RC_TREE_NODE *)(a4 + 352), 0, 0LL);
          ;
          i = HampManagerGetNextHost(v15) )
    {
      v15 = i;
      if ( !i )
        break;
      if ( !*((_BYTE *)i + 592) )
        HampHostTerminateIfSuspended(i, v14, v11, v19);
    }
LABEL_24:
    v17 = 0;
    goto LABEL_26;
  }
  v16 = *(unsigned int *)a5;
  if ( v16 <= ((unsigned __int64)a6 >> 2) - 1 )
  {
    if ( *(_DWORD *)a5 )
    {
      do
      {
        HampManagerTerminateHostIfSuspended(a4, *v12++, v10, v11);
        --v16;
      }
      while ( v16 );
    }
    goto LABEL_24;
  }
  v17 = -1073741583;
LABEL_26:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
  {
    v25 = 0;
    v23 = &v20;
    v20 = v17;
    v24 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C1BB7,
      0LL,
      0LL,
      3u,
      &v22);
  }
  return 0LL;
}
