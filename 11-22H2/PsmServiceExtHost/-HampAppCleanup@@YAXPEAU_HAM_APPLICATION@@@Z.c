/*
 * XREFs of ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180037908
 * Callers:
 *     ?HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800378D0 (-HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800193F0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectCleanup @ 0x180037A00 (CemRcObjectCleanup.c)
 *     ?HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z @ 0x18008020C (-HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppCleanup(struct _HAM_APPLICATION *a1)
{
  struct _HAM_PACKAGE **v1; // rsi
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx

  v1 = (struct _HAM_PACKAGE **)((char *)a1 + 88);
  if ( (*((_DWORD *)a1 + 155) & 0xE0) != 0x80 )
    HampPkgPushUpdate(*v1);
  if ( (*((_DWORD *)a1 + 154) & 0x10000) != 0 )
    HampHostIdStoreInvalidateForApplication(
      (struct _HAM_HOSTID_STORE *)((*(_QWORD *)(*(_QWORD *)((*((_QWORD *)*v1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                 + 408),
      a1);
  v3 = *((_QWORD *)a1 + 70);
  if ( v3 )
    TpReleaseWork(v3);
  v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  CemRcObjectCleanup(a1);
  CemRcObjectDereference((_QWORD *)(v4 - 40));
  if ( *v1 )
    CemRcObjectDereference(*v1);
}
