/*
 * XREFs of ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180042170
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@W4_HOST_GROUP@@PEAE@Z @ 0x1800422CC (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180046464 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800515BE (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18007A878 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 */

__int64 __fastcall HampOplockCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // edi
  unsigned int *v11; // rsi
  unsigned __int64 v12; // rbx
  int v13; // ebx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  __int64 v16; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v17; // rbx
  char v18[4]; // [rsp+30h] [rbp-F8h] BYREF
  int v19; // [rsp+34h] [rbp-F4h] BYREF
  char v20[144]; // [rsp+40h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+D0h] [rbp-58h] BYREF
  int *v22; // [rsp+F0h] [rbp-38h]
  int v23; // [rsp+F8h] [rbp-30h]
  int v24; // [rsp+FCh] [rbp-2Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BFC75,
      0LL,
      0LL,
      2u,
      &v21);
  LOBYTE(v8) = 4;
  v9 = 0LL;
  while ( a1 != HamOplockWatchStateNames[v9] )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 4 )
      goto LABEL_9;
  }
  LOBYTE(v8) = v9;
LABEL_9:
  v10 = (unsigned __int8)v8 | 0x1000;
  if ( !a5 || a6 < 4 || (a6 & 3) != 0 )
  {
    v13 = -1073741584;
  }
  else
  {
    v11 = (unsigned int *)(a5 + 4);
    if ( *(_DWORD *)a5 )
    {
      if ( *(_DWORD *)a5 == -1 )
      {
        for ( i = (struct _RM_HAM_ACTIVITY_HOST *)HampHostEnumerateHostsInNode(a4 + 128, 0LL, 0LL);
              ;
              i = HampManagerGetNextHost(v17) )
        {
          v17 = i;
          if ( !i )
            break;
          HampHostTerminateIfSuspended(i, v16, v10, v18);
        }
      }
      else
      {
        v12 = *(unsigned int *)a5;
        if ( v12 > ((unsigned __int64)a6 >> 2) - 1 )
        {
          v13 = -1073741583;
          goto LABEL_18;
        }
        if ( *(_DWORD *)a5 )
        {
          do
          {
            HampManagerTerminateHostIfSuspended(a4, *v11++, v8, v10);
            --v12;
          }
          while ( v12 );
        }
      }
    }
    v13 = 0;
  }
LABEL_18:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
  {
    v24 = 0;
    v22 = &v19;
    v19 = v13;
    v23 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BFDC0,
      0LL,
      0LL,
      3u,
      &v21);
  }
  return 0LL;
}
