/*
 * XREFs of _i64tow_s @ 0x1403E60B0
 * Callers:
 *     sub_1409D3004 @ 0x1409D3004 (sub_1409D3004.c)
 * Callees:
 *     sub_1403E614C @ 0x1403E614C (sub_1403E614C.c)
 */

errno_t __cdecl i64tow_s(__int64 Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return sub_1403E614C(Val, (_DWORD)DstBuf, SizeInWords, Radix, v4);
}
