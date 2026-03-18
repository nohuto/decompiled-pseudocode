/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x140324654
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x140324528 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x140757D90 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(union _RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
