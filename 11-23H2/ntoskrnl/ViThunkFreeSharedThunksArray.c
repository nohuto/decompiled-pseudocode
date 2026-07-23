/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x140ABCF40
 * Callers:
 *     VfThunkRemoveTargetNotify @ 0x140ABCE68 (VfThunkRemoveTargetNotify.c)
 *     VfThunkAddTargetNotify @ 0x140ABCF6C (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x140ABD000 (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ViThunkFreeSharedThunksArray(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x54496656u);
    *a1 = 0LL;
  }
}
