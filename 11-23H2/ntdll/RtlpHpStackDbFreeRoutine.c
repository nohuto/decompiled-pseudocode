/*
 * XREFs of RtlpHpStackDbFreeRoutine @ 0x180116D20
 * Callers:
 *     RtlpHpStackTraceAllocAdd @ 0x180116F64 (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x180064720 (RtlpHpMetadataFree.c)
 */

__int64 __fastcall RtlpHpStackDbFreeRoutine(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlpHpEnvHandle;
  return RtlpHpMetadataFree(a1, &v2);
}
