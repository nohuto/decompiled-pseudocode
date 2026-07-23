/*
 * XREFs of MiSetPfnNodeBlinkLow @ 0x14034A438
 * Callers:
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x1403318F8 (MiUpdatePfnOnSlabStandbyList.c)
 *     MiUnlinkNumaStandbyPage @ 0x14033193C (MiUnlinkNumaStandbyPage.c)
 *     MiExclusiveInsertPfnChainInList @ 0x14033C408 (MiExclusiveInsertPfnChainInList.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B8540 (MiConvertSmallPageRangeToLarge.c)
 *     MiReplaceNumaStandbyPage @ 0x1403C49B8 (MiReplaceNumaStandbyPage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406294CC (MiUpdateLargePageSectionPfns.c)
 *     MiInsertNumaStandbyPage @ 0x140650D00 (MiInsertNumaStandbyPage.c)
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x140656C58 (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
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
