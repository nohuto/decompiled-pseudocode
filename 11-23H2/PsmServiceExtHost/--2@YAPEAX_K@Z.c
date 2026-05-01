/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x18004A9B8
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000DF00 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000E3E0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z @ 0x1800148D4 (-HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18002F140 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x18003A9A8 (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z.c)
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180044BAC (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800454D4 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180045D6C (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800494E4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004AA04 (--_U@YAPEAX_K@Z.c)
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAPEAV12@@Z @ 0x180050EF0 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST.c)
 * Callees:
 *     malloc_0 @ 0x180049611 (malloc_0.c)
 *     _callnewh_0 @ 0x18004AA27 (_callnewh_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rdi
  void *v2; // rbx

  for ( i = Size; ; Size = i )
  {
    v2 = malloc_0(Size);
    if ( v2 || !callnewh_0(i) )
      break;
  }
  return v2;
}
