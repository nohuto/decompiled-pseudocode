/*
 * XREFs of RmpCreateResourceManagerServer @ 0x1800494DC
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180048C40 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004953C (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180049BB4 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180049F00 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004B758 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

__int64 __fastcall RmpCreateResourceManagerServer(struct ModernResourceEnforcer *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  __int64 result; // rax
  _BYTE v5[184]; // [rsp+20h] [rbp-B8h] BYREF

  RmpGetResourceManagerRuntimeConfiguration((struct _RM_RUNTIME_CONFIGURATION *)v5);
  RmpInitializeAllModules((struct _RM_RUNTIME_CONFIGURATION *)v5, a2);
  result = RmpAllocateAllModuleState(a1, a2);
  if ( (int)result >= 0 )
  {
    result = RmpStartAllModules(a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
