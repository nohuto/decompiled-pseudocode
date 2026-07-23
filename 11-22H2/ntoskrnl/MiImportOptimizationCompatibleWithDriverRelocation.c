/*
 * XREFs of MiImportOptimizationCompatibleWithDriverRelocation @ 0x140B4AA08
 * Callers:
 *     MiHandleBootImage @ 0x140B4A1A8 (MiHandleBootImage.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x14035F928 (RtlIsImageFullyRetpolined.c)
 *     MiDoesDriverProvideBaseImageImports @ 0x140B4AA60 (MiDoesDriverProvideBaseImageImports.c)
 */

__int64 __fastcall MiImportOptimizationCompatibleWithDriverRelocation(__int64 a1)
{
  unsigned int v2; // ebx

  if ( (KiSpeculationFeatures & 0x40000000000LL) == 0 )
    return 1LL;
  v2 = 0;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 && !(unsigned int)RtlIsImageFullyRetpolined(*(void **)(a1 + 48)) )
    return 1LL;
  LOBYTE(v2) = (unsigned int)MiDoesDriverProvideBaseImageImports(a1) == 0;
  return v2;
}
