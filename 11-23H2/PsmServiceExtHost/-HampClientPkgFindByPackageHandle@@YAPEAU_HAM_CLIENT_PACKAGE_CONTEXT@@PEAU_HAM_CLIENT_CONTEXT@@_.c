/*
 * XREFs of ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180036230
 * Callers:
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x1800368C4 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 *     ?HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180036AA8 (-HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180037E84 (-HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAXPEAK@Z @ 0x18004C6A0 (-HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAXPEAK@Z.c)
 *     ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU_HAM_HOST_STATE_SUMMARY@@PEAK@Z @ 0x18004C990 (-HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU.c)
 *     ?HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180071DE8 (-HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007383C (-HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z.c)
 * Callees:
 *     CemRcTableFind @ 0x180035CE0 (CemRcTableFind.c)
 */

struct _HAM_CLIENT_PACKAGE_CONTEXT *__fastcall HampClientPkgFindByPackageHandle(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return (struct _HAM_CLIENT_PACKAGE_CONTEXT *)CemRcTableFind(
                                                 (__int64)a1 + 72,
                                                 (__int64)&v3,
                                                 (__int64 (__fastcall *)(__int64, __int64))HampClientPkgCompareByHandle);
}
