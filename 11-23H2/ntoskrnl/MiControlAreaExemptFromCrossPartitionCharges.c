/*
 * XREFs of MiControlAreaExemptFromCrossPartitionCharges @ 0x140214D6C
 * Callers:
 *     MiControlAreaRequiresCharge @ 0x140214CC4 (MiControlAreaRequiresCharge.c)
 *     MiIncrementSubsectionViewCount @ 0x140289480 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x14029FD60 (MiDecrementSubsectionViewCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiControlAreaExemptFromCrossPartitionCharges(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 62) & 0xC) != 0 )
    return 1LL;
  if ( *(_QWORD *)(a1 + 64) )
    return 0LL;
  return *(_WORD *)(a1 + 94) & 1;
}
