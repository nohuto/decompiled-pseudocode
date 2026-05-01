/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x18000BB44
 * Callers:
 *     CreateResourceManagerProxy @ 0x1800029E0 (CreateResourceManagerProxy.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180004620 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180005EF0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x18000A630 (-CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000B064 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18001EF64 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 *     ?CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x18001F8B0 (-CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z.c)
 *     ?GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001FBF0 (-GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 * Callees:
 *     malloc_0 @ 0x18000B273 (malloc_0.c)
 *     _callnewh_0 @ 0x18000BB8F (_callnewh_0.c)
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
