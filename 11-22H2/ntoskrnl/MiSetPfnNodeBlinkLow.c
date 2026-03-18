/*
 * XREFs of MiSetPfnNodeBlinkLow @ 0x140349C98
 * Callers:
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x1403314C8 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiUnlinkNumaStandbyPage @ 0x14033150C (MiUnlinkNumaStandbyPage.c)
 *     MiExclusiveInsertPfnChainInList @ 0x14033BF78 (MiExclusiveInsertPfnChainInList.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B7D00 (MiConvertSmallPageRangeToLarge.c)
 *     MiReplaceNumaStandbyPage @ 0x1403C4178 (MiReplaceNumaStandbyPage.c)
 *     MiUpdateLargePageSectionPfns @ 0x140628FEC (MiUpdateLargePageSectionPfns.c)
 *     MiInsertNumaStandbyPage @ 0x140650820 (MiInsertNumaStandbyPage.c)
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x140656778 (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnNodeBlinkLow(__int64 a1, int a2)
{
  signed __int64 v2; // r9
  unsigned __int64 v3; // r11
  signed __int64 result; // rax
  bool i; // zf
  signed __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (unsigned __int64)(a2 & 0x7FFFF) << 40;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v2 & 0xF80000FFFFFFFFFFuLL, v2);
  for ( i = v2 == result; !i; i = v7 == result )
  {
    v7 = result;
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(a1 + 24),
               v3 | result & 0xF80000FFFFFFFFFFuLL,
               result);
  }
  return result;
}
