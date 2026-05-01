/*
 * XREFs of ?HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180043180
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180016EA0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampPkgLogRundownEvents@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F920 (-HampPkgLogRundownEvents@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

void __fastcall HampManagerTracingControlCallback(
        const struct _GUID *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        char *a7)
{
  struct _HAM_PACKAGE *i; // rax
  struct _HAM_PACKAGE *v8; // rbx
  _BYTE v9[144]; // [rsp+20h] [rbp-A8h] BYREF

  if ( a2 == 2 )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v9);
    for ( i = HamRcNodeGetFirst((struct _HAM_RC_TREE_NODE *)(a7 + 352), 3);
          ;
          i = HamRcNodeGetSuccessor(
                (struct _HAM_RC_TREE_NODE *)((*(_QWORD *)(*(_QWORD *)((*((_QWORD *)v8 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                                        + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                           - 40),
                v8) )
    {
      v8 = i;
      if ( !i )
        break;
      HampPkgLogRundownEvents(i);
    }
    CempLockTrackerClearForThread(HampLockTrackerId);
  }
}
