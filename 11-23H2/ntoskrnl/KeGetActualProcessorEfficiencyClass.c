/*
 * XREFs of KeGetActualProcessorEfficiencyClass @ 0x140362DDC
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14082D190 (PopInitializeHeteroProcessors.c)
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
