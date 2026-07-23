/*
 * XREFs of sub_1403B6C24 @ 0x1403B6C24
 * Callers:
 *     sub_140299A64 @ 0x140299A64 (sub_140299A64.c)
 *     sub_140299D74 @ 0x140299D74 (sub_140299D74.c)
 * Callees:
 *     sub_140299BF0 @ 0x140299BF0 (sub_140299BF0.c)
 */

__int64 __fastcall sub_1403B6C24(__int64 a1, int a2, _BYTE *a3)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = sub_140299BF0(a1, a3);
    if ( (int)result < 0 )
      break;
    ++a3;
    if ( !--a2 )
      return 0LL;
  }
  return result;
}
