/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x180066CA4
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180065DE8 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800328D0 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapCreate, a2, 0LL);
}
