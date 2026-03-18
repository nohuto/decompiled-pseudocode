/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x140ABCF50
 * Callers:
 *     VfThunkRemoveTargetNotify @ 0x140ABCE78 (VfThunkRemoveTargetNotify.c)
 *     VfThunkAddTargetNotify @ 0x140ABCF7C (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x140ABD010 (ViThunkCreateSharedExportInformation.c)
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
