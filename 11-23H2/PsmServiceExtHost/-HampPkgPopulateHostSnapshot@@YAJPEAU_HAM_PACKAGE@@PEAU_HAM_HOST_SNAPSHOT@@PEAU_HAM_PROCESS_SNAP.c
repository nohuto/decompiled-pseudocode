/*
 * XREFs of ?HampPkgPopulateHostSnapshot@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_HOST_SNAPSHOT@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18004D994
 * Callers:
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18004DA20 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 * Callees:
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DF80 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800326A0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003EE30 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041E80 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18007ED38 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 */

__int64 __fastcall HampPkgPopulateHostSnapshot(
        struct _HAM_PACKAGE *a1,
        struct _HAM_HOST_SNAPSHOT *a2,
        struct _HAM_PROCESS_SNAPSHOT *a3)
{
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  __int64 result; // rax
  struct _RM_ACTIVITY_HOST *v7; // rax
  struct _RM_HAM_ACTIVITY_HOST *v8; // rbx

  for ( i = HampHostEnumerateHostsInNode(a1, 3, 0LL); ; i = HampPkgGetNextHost(v8) )
  {
    v8 = i;
    if ( !i )
      break;
    result = HampHostSnapshotAppend(a2, i);
    if ( (int)result < 0 )
      return result;
    if ( *((_BYTE *)v8 + 592) == 1 )
    {
      if ( a3 )
      {
        v7 = RmHostFromHamHost(v8);
        result = RmHamHostGetProcessesInfo(v7, 4096, 1, a3);
        if ( (int)result < 0 )
          return result;
      }
    }
  }
  return 0LL;
}
