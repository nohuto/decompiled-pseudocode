/*
 * XREFs of MiReducePteUseCount @ 0x14033B2D0
 * Callers:
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x1402D26E0 (MiDeletePteList.c)
 *     MiDecommitLargePte @ 0x140635E20 (MiDecommitLargePte.c)
 * Callees:
 *     MiGetUsedPtesHandle @ 0x1402E5D00 (MiGetUsedPtesHandle.c)
 *     MiDecreaseUsedPtesCount @ 0x14033B320 (MiDecreaseUsedPtesCount.c)
 */

_BOOL8 __fastcall MiReducePteUseCount(__int64 a1, unsigned int a2)
{
  ULONG_PTR UsedPtesHandle; // rax

  UsedPtesHandle = MiGetUsedPtesHandle(a1 << 25 >> 16);
  return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, a2) == 0;
}
