/*
 * XREFs of ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180034AB8
 * Callers:
 *     ?HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180034A80 (-HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000FB70 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectCleanup @ 0x180034B40 (CemRcObjectCleanup.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z @ 0x180077034 (-HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppCleanup(struct _HAM_PACKAGE **a1)
{
  struct _HAM_PACKAGE *v2; // rcx
  unsigned __int64 v3; // rbx
  struct _HAM_PACKAGE *v4; // rcx

  if ( (*((_DWORD *)a1 + 155) & 0xE0) != 0x80 )
    HampPkgPushUpdate(a1[11]);
  if ( ((_DWORD)a1[77] & 0x10000) != 0 )
    HampHostIdStoreInvalidateForApplication(
      (struct _HAM_HOSTID_STORE *)((*(_QWORD *)(*(_QWORD *)((*((_QWORD *)a1[11] + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                 + 408),
      (struct _HAM_APPLICATION *)a1);
  v2 = a1[70];
  if ( v2 )
    TpReleaseWork(v2);
  v3 = (unsigned __int64)a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  CemRcObjectCleanup(a1);
  CemRcObjectDereference(v3 - 40);
  v4 = a1[11];
  if ( v4 )
    CemRcObjectDereference(v4);
}
