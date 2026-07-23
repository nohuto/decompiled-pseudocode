/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x1402ED6A0
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x140289480 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x14029FD60 (MiDecrementSubsectionViewCount.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402EC258 (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x1402ED680 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateLastSubsectionSize @ 0x140366034 (MiUpdateLastSubsectionSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
