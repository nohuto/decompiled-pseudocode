/*
 * XREFs of MiStandbyPageContentsIntact @ 0x1402186F0
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14020ECB0 (MiCopyHeaderIfResident.c)
 *     MiConfirmCombinePageContents @ 0x140218630 (MiConfirmCombinePageContents.c)
 *     MiCopyDataPageToImagePage @ 0x14028B700 (MiCopyDataPageToImagePage.c)
 *     MiTranslatePageForCopy @ 0x1402EE0D4 (MiTranslatePageForCopy.c)
 *     MiStandbyPageStillCombineCandidate @ 0x14035A650 (MiStandbyPageStillCombineCandidate.c)
 * Callees:
 *     MiCheckWriteInProgressFault @ 0x140201DD8 (MiCheckWriteInProgressFault.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 */

__int64 __fastcall MiStandbyPageContentsIntact(__int64 a1)
{
  char v1; // dl
  unsigned int v2; // edi

  v1 = *(_BYTE *)(a1 + 34);
  v2 = 0;
  if ( (v1 & 8) != 0 && (((v1 & 7) - 3) & 0xFB) == 0 && (int)MiCheckWriteInProgressFault(a1) < 0 )
    return 0LL;
  if ( (v1 & 7) != 2 )
    return 1LL;
  if ( (v1 & 0x20) != 0 || (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
    return 0LL;
  if ( (unsigned int)MiCheckSlabPfnBitmap(a1, 1LL) && _bittest64((const signed __int64 *)(a1 + 40), 0x3Bu) )
    return 1LL;
  LOBYTE(v2) = (unsigned int)MiGetPfnPriority(a1) >= *(unsigned __int8 *)(*(_QWORD *)(qword_140C673C8
                                                                                    + 8
                                                                                    * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL))
                                                                        + 15780LL);
  return v2;
}
