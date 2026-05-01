/*
 * XREFs of ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180036BD8
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180015EEC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180036AA8 (-HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800376E4 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180037720 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampClientPkgClose(struct _HAM_PACKAGE **a1)
{
  int v2; // eax
  struct _HAM_PACKAGE *v3; // rcx
  unsigned int v4; // edi

  HampPkgAcquireLockExclusive(a1[7]);
  v2 = *((_DWORD *)a1 + 16);
  v3 = a1[7];
  if ( (v2 & 4) != 0 )
  {
    v4 = -1073700861;
    HampPkgReleaseLockExclusive(v3);
  }
  else
  {
    *((_DWORD *)a1 + 16) = v2 | 4;
    HampPkgReleaseLockExclusive(v3);
    CemRcObjectDereference(a1);
    return 0;
  }
  return v4;
}
