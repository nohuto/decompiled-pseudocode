/*
 * XREFs of ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x18003F254
 * Callers:
 *     ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x1800141F4 (-HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z @ 0x18003F0F0 (-HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180074DA0 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z @ 0x18008020C (-HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostIdStoreInvalidateForUserSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_USER@@@Z @ 0x180080284 (-HampHostIdStoreInvalidateForUserSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_USER@@@Z.c)
 *     ?HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z @ 0x1800803BC (-HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180016EA0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcTableFind @ 0x180035D10 (CemRcTableFind.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampHostIdStoreEnumerateMatchingEntries(
        struct _HAM_HOSTID_STORE *a1,
        unsigned int *a2,
        union _RM_SID *a3,
        struct _RM_PSM_KEY *a4,
        unsigned int (*a5)(struct _HAM_HOSTID_ENTRY *, void *),
        void *a6)
{
  _QWORD *v6; // rbx
  struct _HAM_RC_TREE_NODE *v7; // r14
  _QWORD *v9; // rsi
  _QWORD *v10; // rbp
  struct _HAM_RC_TREE_NODE *v11; // rdi
  int v14; // edx
  struct _HAM_RC_TREE_NODE *i; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v6 = 0LL;
  v7 = (struct _HAM_HOSTID_STORE *)((char *)a1 + 16);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v14 = 4;
  if ( a2 )
  {
    v16 = CemRcTableFind(
            (__int64)a1 + 56,
            *a2,
            (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareSessionByKey);
    v9 = (_QWORD *)v16;
    if ( !v16 )
      return;
    v7 = (struct _HAM_RC_TREE_NODE *)v16;
    v14 = 3;
  }
  if ( a3 )
  {
    v17 = CemRcTableFind(
            (__int64)(v9 + 5),
            (__int64)a3,
            (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareUserByKey);
    v6 = (_QWORD *)v17;
    if ( !v17 )
      goto LABEL_10;
    v7 = (struct _HAM_RC_TREE_NODE *)v17;
    v14 = 2;
  }
  if ( !a4 )
  {
LABEL_4:
    for ( i = HamRcNodeGetFirst(v7, v14); ; i = HamRcNodeGetSuccessor(v7, v11) )
    {
      v11 = i;
      if ( !i || !((unsigned int (__fastcall *)(struct _HAM_RC_TREE_NODE *, void *))a5)(i, a6) )
        break;
    }
    if ( v10 )
      CemRcObjectDereference(v10);
    goto LABEL_10;
  }
  v18 = CemRcTableFind(
          (__int64)(v6 + 5),
          (__int64)a4,
          (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareApplicationByKey);
  v10 = (_QWORD *)v18;
  if ( v18 )
  {
    v7 = (struct _HAM_RC_TREE_NODE *)v18;
    v14 = 1;
    goto LABEL_4;
  }
LABEL_10:
  if ( v9 )
    CemRcObjectDereference(v9);
  if ( v6 )
    CemRcObjectDereference(v6);
  if ( v11 )
    CemRcObjectDereference(v11);
}
