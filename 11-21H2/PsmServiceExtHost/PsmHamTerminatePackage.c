/*
 * XREFs of PsmHamTerminatePackage @ 0x18006C900
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180072564 (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 */

__int64 __fastcall PsmHamTerminatePackage(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  return HamSrvTerminatePackageForBi((char *)RmSvcGlobals + 2248, a3, a1, a2, a4);
}
