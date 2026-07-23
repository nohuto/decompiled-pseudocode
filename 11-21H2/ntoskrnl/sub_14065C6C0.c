/*
 * XREFs of sub_14065C6C0 @ 0x14065C6C0
 * Callers:
 *     sub_14065B560 @ 0x14065B560 (sub_14065B560.c)
 *     sub_14065B6A0 @ 0x14065B6A0 (sub_14065B6A0.c)
 * Callees:
 *     sub_14065C6FC @ 0x14065C6FC (sub_14065C6FC.c)
 *     sub_14065C7A4 @ 0x14065C7A4 (sub_14065C7A4.c)
 */

__int64 __fastcall sub_14065C6C0(__int64 a1, unsigned __int16 *a2)
{
  __int64 result; // rax

  result = sub_14065C7A4(a1, *a2);
  if ( (int)result >= 0 )
  {
    sub_14065C6FC(a1, a2);
    return 0LL;
  }
  return result;
}
