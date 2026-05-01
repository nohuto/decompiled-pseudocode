/*
 * XREFs of ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAPEAPEAXPEAK@Z @ 0x18004ED80
 * Callers:
 *     ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAXPEAK@Z @ 0x18004C76C (-HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAXPEAK@Z.c)
 * Callees:
 *     ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x1800141F4 (-HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800376F4 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180037730 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z @ 0x18004C2A8 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18004D9E0 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 */

__int64 __fastcall HampClientPkgEnableServicing(
        struct _HAM_CLIENT_PACKAGE_CONTEXT *a1,
        struct _HAM_CLIENT_CONTEXT *a2,
        void ***a3,
        unsigned int *a4)
{
  __int64 v4; // rbp
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // ebx
  int v12; // r14d
  int v13; // r12d
  int *v14; // rdi
  int v15; // eax
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]

  v4 = *((_QWORD *)a1 + 7);
  v17 = 0LL;
  v18 = 0LL;
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
  v10 = *((_DWORD *)a1 + 16);
  if ( (v10 & 4) != 0 )
  {
    v11 = -1073741431;
LABEL_13:
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4, v9);
    goto LABEL_17;
  }
  v12 = (v10 >> 3) & 1;
  v13 = *((_DWORD *)a1 + 16) & 1;
  if ( (v10 & 1) != 0 )
  {
    if ( v12 && !a4 )
    {
      v14 = (int *)(v4 + 340);
      *((_DWORD *)a1 + 16) = v10 & 0xFFFFFFF7;
      goto LABEL_11;
    }
LABEL_8:
    v11 = -1073700861;
    goto LABEL_13;
  }
  v14 = (int *)(v4 + 340);
  v15 = *(_DWORD *)(v4 + 340);
  if ( (v15 & 1) != 0 )
    goto LABEL_8;
  *v14 = v15 | 1;
  *((_DWORD *)a1 + 16) |= 1u;
  if ( a4 )
  {
    *v14 |= 2u;
    *((_DWORD *)a1 + 16) |= 8u;
  }
LABEL_11:
  HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4, v9);
  v11 = HampPkgTerminate(
          (struct _HAM_PACKAGE *)v4,
          1u,
          0x400u,
          a2,
          -(a4 == 0LL),
          (struct _HAM_PROCESS_SNAPSHOT *)((unsigned __int64)&v17 & -(__int64)(a4 != 0LL)));
  if ( v11 < 0 )
  {
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
    v9 = *((_DWORD *)a1 + 16) & 0xFFFFFFF7 | (8 * v12);
    *((_DWORD *)a1 + 16) = v9;
    *v14 &= ~2u;
    *v14 |= 2 * v12;
    *((_DWORD *)a1 + 16) &= ~1u;
    *((_DWORD *)a1 + 16) |= v13;
    *v14 &= ~1u;
    *v14 |= v13;
    goto LABEL_13;
  }
  HampHostIdStoreInvalidateForPackage(
    (struct _HAM_HOSTID_STORE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                               + 408),
    (struct _HAM_PACKAGE *)v4);
  if ( a4 )
  {
    *a4 = v18;
    HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v17, a3);
    v17 = 0LL;
    v18 = 0LL;
  }
  v11 = 0;
LABEL_17:
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v17, 0LL);
  return (unsigned int)v11;
}
