/*
 * XREFs of ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18004DA20
 * Callers:
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x1800135A4 (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     ?HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180037E84 (-HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAPEAPEAXPEAK@Z @ 0x18004EC38 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAP.c)
 * Callees:
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003F144 (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003F2DC (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampPkgPopulateHostSnapshot@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_HOST_SNAPSHOT@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18004D994 (-HampPkgPopulateHostSnapshot@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_HOST_SNAPSHOT@@PEAU_HAM_PROCESS_SNAP.c)
 */

__int64 __fastcall HampPkgTerminate(
        struct _HAM_PACKAGE *a1,
        unsigned int a2,
        unsigned int a3,
        struct _HAM_CLIENT_CONTEXT *a4,
        unsigned int a5,
        struct _HAM_PROCESS_SNAPSHOT *a6)
{
  int v9; // ebx
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v9 = HampPkgPopulateHostSnapshot(a1, (struct _HAM_HOST_SNAPSHOT *)&v11, a6);
  if ( v9 >= 0 )
  {
    HampHostSnapshotTerminate((__int64)&v11, a2, a3, a4, a5, 0);
    v9 = 0;
  }
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)&v11);
  return (unsigned int)v9;
}
