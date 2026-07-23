/*
 * XREFs of _ultow_s @ 0x1403DE9D0
 * Callers:
 *     LocalConvertAclToString @ 0x14069D4D0 (LocalConvertAclToString.c)
 *     BiDeleteElement @ 0x14080394C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1408043E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140804F8C (BcdGetElementDataWithFlags.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1408801B0 (_CmCreateOrdinalInstanceKey.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D5E1C (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1403DEB3C (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
