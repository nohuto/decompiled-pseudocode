/*
 * XREFs of ?HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z @ 0x1800429DC
 * Callers:
 *     ?HampUserCreate@@YAJPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAPEAU_HAM_USER@@@Z @ 0x180042950 (-HampUserCreate@@YAJPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAPEAU_HAM_USER@@@Z.c)
 * Callees:
 *     ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x18001150C (-HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

void __fastcall HampUserInitialize(struct _HAM_SESSION *a1, union _RM_SID *a2, struct _HAM_USER *a3)
{
  int v6; // eax

  memset_0(a3, 0, 0xC8uLL);
  HamRcNodeInitialize((void (*)(struct _CEM_RC_OBJECT *))HampPkgDestroy, a1, a3);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a3 + 20) = a1;
  *(_OWORD *)((char *)a3 + 88) = *(_OWORD *)a2;
  *(_OWORD *)((char *)a3 + 104) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)a3 + 120) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)a3 + 136) = *((_OWORD *)a2 + 3);
  v6 = *((_DWORD *)a2 + 16);
  *((_QWORD *)a3 + 23) = 0LL;
  *((_DWORD *)a3 + 38) = v6;
}
