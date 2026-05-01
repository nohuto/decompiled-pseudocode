/*
 * XREFs of ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180080E90
 * Callers:
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180080DC8 (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003EEB0 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003F1C4 (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003F35C (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041F00 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 */

__int64 __fastcall HampUserTerminate(
        struct _HAM_RC_TREE_NODE *a1,
        __int64 a2,
        __int64 a3,
        struct _HAM_CLIENT_CONTEXT *a4,
        unsigned int a5)
{
  __int64 v5; // r8
  int v7; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rax
  struct _RM_HAM_ACTIVITY_HOST *v9; // rdi
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v5 = 0LL;
  while ( 1 )
  {
    v8 = HampHostEnumerateHostsInNode(a1, 2, v5);
    v9 = v8;
    if ( !v8 )
      break;
    v7 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)&v11, v8);
    if ( v7 < 0 )
      goto LABEL_6;
    v5 = (__int64)v9;
    a1 = *(struct _HAM_RC_TREE_NODE **)(*(_QWORD *)(*((_QWORD *)v9 + 99) + 88LL) + 88LL);
  }
  HampHostSnapshotTerminate((__int64)&v11, 1u, 0x1100u, a4, a5, 1);
  v7 = 0;
LABEL_6:
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)&v11);
  return (unsigned int)v7;
}
