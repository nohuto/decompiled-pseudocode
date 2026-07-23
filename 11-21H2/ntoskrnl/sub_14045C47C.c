/*
 * XREFs of sub_14045C47C @ 0x14045C47C
 * Callers:
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 *     sub_14045C52A @ 0x14045C52A (sub_14045C52A.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14045C47C(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  result = a2 & 0xFFFFFFFFFFFFFLL | *a1 & 0xFFF0000000000000uLL | 0x10000000000000LL;
  *a1 = result;
  if ( (a3 & 0x42) != 0 )
  {
    result |= 0x20000000000000uLL;
    *a1 = result;
  }
  if ( a3 >= 0 )
  {
    result |= 0x40000000000000uLL;
    *a1 = result;
  }
  if ( (a3 & 0x18) != 0 )
  {
    result |= 0x80000000000000uLL;
    *a1 = result;
  }
  return result;
}
