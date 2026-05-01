/*
 * XREFs of ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180078804
 * Callers:
 *     ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18006FA38 (-HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003ACDC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003AD18 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x1800770AC (-HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180078D94 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 */

__int64 __fastcall HampClientPkgEnableServicing(struct _HAM_PACKAGE **a1, struct _HAM_CLIENT_CONTEXT *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  struct _HAM_PACKAGE *v6; // rcx
  int v7; // eax
  struct _HAM_PACKAGE *v8; // rcx

  HampPkgAcquireLockExclusive(a1[7]);
  if ( ((_BYTE)a1[8] & 4) != 0 )
  {
    v5 = -1073741431;
  }
  else
  {
    if ( ((_BYTE)a1[8] & 1) == 0 )
    {
      v6 = a1[7];
      v7 = *((_DWORD *)v6 + 85);
      if ( (v7 & 1) == 0 )
      {
        *((_DWORD *)v6 + 85) = v7 | 1;
        v8 = a1[7];
        *((_DWORD *)a1 + 16) |= 1u;
        HampPkgReleaseLockExclusive(v8, v4);
        v5 = HampPkgTerminate(a1[7], 1LL, 1024LL, a2, -1);
        HampHostIdStoreInvalidateForPackage(
          (struct _HAM_HOSTID_STORE *)((*(_QWORD *)(*(_QWORD *)((*((_QWORD *)a1[7] + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                     + 408),
          a1[7]);
        return v5;
      }
    }
    v5 = -1073700861;
  }
  HampPkgReleaseLockExclusive(a1[7], v4);
  return v5;
}
