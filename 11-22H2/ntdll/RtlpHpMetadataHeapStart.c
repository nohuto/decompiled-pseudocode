/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x180066CC0
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180065F18 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180032A30 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapCreate, a2, 0LL);
}
