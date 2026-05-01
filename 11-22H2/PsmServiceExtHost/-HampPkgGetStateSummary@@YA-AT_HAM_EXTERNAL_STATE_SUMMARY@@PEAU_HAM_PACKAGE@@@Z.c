/*
 * XREFs of ?HampPkgGetStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x18004D8E4
 * Callers:
 *     ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU_HAM_HOST_STATE_SUMMARY@@PEAK@Z @ 0x18004CA5C (-HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU.c)
 * Callees:
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007EF4C (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007F1B0 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampPkgGetStateSummary(__int64 a1)
{
  int *v2; // rbx
  unsigned int v3; // ebx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  HampPkgAcquireLockShared((struct _HAM_PACKAGE *)a1);
  v2 = (int *)(a1 + 340);
  while ( (*v2 & 0x20) != 0 )
  {
    v5 = *v2;
    HampPkgReleaseLockShared((struct _HAM_PACKAGE *)a1);
    RtlWaitOnAddress(a1 + 340, &v5, 4LL);
    HampPkgAcquireLockShared((struct _HAM_PACKAGE *)a1);
  }
  v3 = *(_DWORD *)(a1 + 344);
  HampPkgReleaseLockShared((struct _HAM_PACKAGE *)a1);
  return v3;
}
