/*
 * XREFs of ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x1800785A4
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005884 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18006F430 (-HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003ACDC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003AD18 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampClientPkgClose(struct _HAM_PACKAGE **a1)
{
  __int64 v2; // rdx
  int v3; // eax
  struct _HAM_PACKAGE *v4; // rcx
  unsigned int v5; // edi

  HampPkgAcquireLockExclusive(a1[7]);
  v3 = *((_DWORD *)a1 + 16);
  v4 = a1[7];
  if ( (v3 & 4) != 0 )
  {
    v5 = -1073700861;
    HampPkgReleaseLockExclusive(v4, v2);
  }
  else
  {
    *((_DWORD *)a1 + 16) = v3 | 4;
    HampPkgReleaseLockExclusive(v4, v2);
    CemRcObjectDereference(a1);
    return 0;
  }
  return v5;
}
