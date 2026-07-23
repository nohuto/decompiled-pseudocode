/*
 * XREFs of sub_1403992E8 @ 0x1403992E8
 * Callers:
 *     sub_140A4F19C @ 0x140A4F19C (sub_140A4F19C.c)
 * Callees:
 *     sub_14054A188 @ 0x14054A188 (sub_14054A188.c)
 *     sub_14054A25C @ 0x14054A25C (sub_14054A25C.c)
 */

__int64 sub_1403992E8()
{
  __int64 result; // rax

  result = dword_140D0688C;
  if ( (dword_140D0688C & 2) != 0 && !byte_140D06888 )
    result = sub_14054A25C();
  if ( byte_140D0688B )
    return sub_14054A188();
  return result;
}
