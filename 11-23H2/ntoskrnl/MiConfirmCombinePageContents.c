/*
 * XREFs of MiConfirmCombinePageContents @ 0x140218630
 * Callers:
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiCombineWithStandbyExisting @ 0x14035A31C (MiCombineWithStandbyExisting.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x1402186C0 (MiIsPageOnBadList.c)
 *     MiStandbyPageContentsIntact @ 0x1402186F0 (MiStandbyPageContentsIntact.c)
 *     MiComparePages @ 0x140218790 (MiComparePages.c)
 */

__int64 __fastcall MiConfirmCombinePageContents(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (*(_BYTE *)(48 * a2 - 0x220000000000LL + 35) & 0x40) != 0
    || (unsigned int)MiIsPageOnBadList(48 * a2 - 0x220000000000LL)
    || v3 != *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL))
    || !(unsigned int)MiStandbyPageContentsIntact(v4) )
  {
    return 0LL;
  }
  else
  {
    return (unsigned __int8)MiComparePages(*(_QWORD *)(a1 + 96) + 4096LL);
  }
}
