/*
 * XREFs of sub_1408644E0 @ 0x1408644E0
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_1405716A4 @ 0x1405716A4 (sub_1405716A4.c)
 *     sub_1409E3B04 @ 0x1409E3B04 (sub_1409E3B04.c)
 */

__int64 sub_1408644E0()
{
  __int64 result; // rax

  result = DWORD1(xmmword_140D06900[0]);
  if ( (BYTE4(xmmword_140D06900[0]) & 2) != 0 )
  {
    sub_1405716A4((ULONG_PTR)&unk_140C16300);
    return sub_1409E3B04();
  }
  return result;
}
