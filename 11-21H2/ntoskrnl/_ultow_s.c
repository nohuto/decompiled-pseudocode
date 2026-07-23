/*
 * XREFs of _ultow_s @ 0x1403E6130
 * Callers:
 *     sub_140676B80 @ 0x140676B80 (sub_140676B80.c)
 *     sub_140772E98 @ 0x140772E98 (sub_140772E98.c)
 *     sub_14080271C @ 0x14080271C (sub_14080271C.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     sub_1409D3004 @ 0x1409D3004 (sub_1409D3004.c)
 * Callees:
 *     sub_1403E6290 @ 0x1403E6290 (sub_1403E6290.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return sub_1403E6290(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
