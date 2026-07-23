/*
 * XREFs of sub_140A74644 @ 0x140A74644
 * Callers:
 *     sub_140A7471C @ 0x140A7471C (sub_140A7471C.c)
 *     sub_140A748B4 @ 0x140A748B4 (sub_140A748B4.c)
 *     sub_140A74918 @ 0x140A74918 (sub_140A74918.c)
 *     sub_140A749D0 @ 0x140A749D0 (sub_140A749D0.c)
 *     sub_140A74AA0 @ 0x140A74AA0 (sub_140A74AA0.c)
 *     sub_140A74B64 @ 0x140A74B64 (sub_140A74B64.c)
 * Callees:
 *     sub_140A6F124 @ 0x140A6F124 (sub_140A6F124.c)
 */

__int64 __fastcall sub_140A74644(char *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax

  result = sub_140A6F124(a1, a2, a3, a3, a4, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  byte_140C40431 = 1;
  if ( (a4 & 5) == 5 )
  {
    result = sub_140A6F124(a1, a2, a3, a3, a4 | 0x40u, 0LL);
    if ( (int)result >= 0 )
      return 259LL;
  }
  return result;
}
