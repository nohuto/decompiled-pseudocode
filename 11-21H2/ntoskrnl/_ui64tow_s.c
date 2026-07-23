/*
 * XREFs of _ui64tow_s @ 0x1403E6110
 * Callers:
 *     sub_1409D3004 @ 0x1409D3004 (sub_1409D3004.c)
 * Callees:
 *     sub_1403E614C @ 0x1403E614C (sub_1403E614C.c)
 */

errno_t __cdecl ui64tow_s(unsigned __int64 Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return sub_1403E614C(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
