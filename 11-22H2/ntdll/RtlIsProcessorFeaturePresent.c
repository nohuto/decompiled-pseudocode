/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x18002C300
 * Callers:
 *     LdrpGenRandom @ 0x18002B7E4 (LdrpGenRandom.c)
 *     __cpu_features_init @ 0x180094FEC (__cpu_features_init.c)
 *     RtlInitializeHeapManager @ 0x1800AE4B8 (RtlInitializeHeapManager.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlIsProcessorFeaturePresent(unsigned int a1)
{
  if ( a1 >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(a1 + 0x7FFE0274LL);
}
