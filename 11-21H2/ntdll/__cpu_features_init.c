/*
 * XREFs of __cpu_features_init @ 0x180099F0C
 * Callers:
 *     LdrpInitialize @ 0x18007B1C8 (LdrpInitialize.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x180034840 (RtlIsProcessorFeaturePresent.c)
 */

__int64 _cpu_features_init()
{
  char v0; // bl

  v0 = 0;
  if ( RtlIsProcessorFeaturePresent(0x2Au) )
    v0 = 2;
  if ( RtlIsProcessorFeaturePresent(0x27u) )
    v0 |= 4u;
  _isa_info = v0 | 1;
  return 0LL;
}
