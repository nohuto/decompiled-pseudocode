/*
 * XREFs of _ultow_s @ 0x1403DE7F0
 * Callers:
 *     LocalConvertAclToString @ 0x14069D4D0 (LocalConvertAclToString.c)
 *     BiDeleteElement @ 0x14080367C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140804118 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140804CBC (BcdGetElementDataWithFlags.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14087FF70 (_CmCreateOrdinalInstanceKey.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D5C1C (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1403DE95C (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
