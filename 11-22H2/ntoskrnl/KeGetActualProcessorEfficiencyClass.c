/*
 * XREFs of KeGetActualProcessorEfficiencyClass @ 0x1403625EC
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14082E9E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

char __fastcall KeGetActualProcessorEfficiencyClass(__int64 a1)
{
  if ( KeHeteroSystem )
    return *(_BYTE *)(a1 + 34056);
  else
    return *(_BYTE *)(a1 + 34059);
}
