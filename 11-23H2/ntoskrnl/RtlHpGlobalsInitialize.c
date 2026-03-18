/*
 * XREFs of RtlHpGlobalsInitialize @ 0x140389C2C
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x14038873C (ExInitializePoolHeapManagement.c)
 *     ExpInitSystemPhase0 @ 0x140B54AE0 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x140317588 (RtlpHeapGenerateRandomValue64.c)
 *     RtlIsProcessorFeaturePresent @ 0x140365550 (RtlIsProcessorFeaturePresent.c)
 *     memset @ 0x140435A00 (memset.c)
 */

char RtlHpGlobalsInitialize()
{
  char result; // al

  memset(&RtlpHpHeapGlobals, 0, 0x40uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_140C6B2C8 = RtlpHeapGenerateRandomValue64();
  qword_140C6B2D0 = (__int64)&RtlpHeapFailureInfo;
  result = RtlIsProcessorFeaturePresent(0x2Au);
  if ( result )
    LODWORD(qword_140C6B2F8) = qword_140C6B2F8 | 1;
  LODWORD(qword_140C6B2F8) = qword_140C6B2F8 | 2;
  return result;
}
