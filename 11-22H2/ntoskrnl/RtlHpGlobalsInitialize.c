/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1403985DC
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x1403970EC (ExInitializePoolHeapManagement.c)
 *     ExpInitSystemPhase0 @ 0x140B61954 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x1403173A8 (RtlpHeapGenerateRandomValue64.c)
 *     RtlIsProcessorFeaturePresent @ 0x140364F00 (RtlIsProcessorFeaturePresent.c)
 *     memset @ 0x140435400 (memset.c)
 */

BOOLEAN RtlHpGlobalsInitialize()
{
  BOOLEAN result; // al

  memset(&RtlpHpHeapGlobals, 0, 0x40uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_140C6B388 = RtlpHeapGenerateRandomValue64();
  qword_140C6B390 = (__int64)&RtlpHeapFailureInfo;
  result = RtlIsProcessorFeaturePresent(0x2Au);
  if ( result )
    LODWORD(qword_140C6B3B8) = qword_140C6B3B8 | 1;
  LODWORD(qword_140C6B3B8) = qword_140C6B3B8 | 2;
  return result;
}
