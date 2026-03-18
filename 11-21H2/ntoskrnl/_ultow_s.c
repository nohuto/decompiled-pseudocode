/*
 * XREFs of _ultow_s @ 0x1403E6130
 * Callers:
 *     LocalConvertAclToString @ 0x140676B80 (LocalConvertAclToString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140772E98 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x14080271C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140812D44 (BcdGetElementDataWithFlags.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D3004 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1403E6290 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
