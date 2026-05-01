/*
 * XREFs of ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x18001150C
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180028B20 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     ?HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z @ 0x18004295C (-HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall HamRcNodeInitialize(
        void (*a1)(struct _CEM_RC_OBJECT *),
        struct _HAM_RC_TREE_NODE *a2,
        struct _HAM_RC_TREE_NODE *a3)
{
  memset_0(a3, 0, 0x58uLL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 2) = -1LL;
  *((_QWORD *)a3 + 3) = 1LL;
  *((_QWORD *)a3 + 4) = (char *)a2 + 40;
  CemRcTableInitialize(a1, (char *)a3 + 40);
}
