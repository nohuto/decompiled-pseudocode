/*
 * XREFs of sub_1C0067B7C @ 0x1C0067B7C
 * Callers:
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 *     sub_1C0067DA0 @ 0x1C0067DA0 (sub_1C0067DA0.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 */

__int64 __fastcall sub_1C0067B7C(__int64 a1)
{
  char v2; // bl
  __int64 result; // rax

  v2 = byte_1C0093BD8;
  if ( !a1 )
    return 3221225485LL;
  if ( !(unsigned int)sub_1C0007798(a1, 20) )
    return 3221225659LL;
  if ( ((*(_BYTE *)(a1 + 110) & 0x20) != 0) == v2 )
    return 0LL;
  result = sub_1C001A364(a1 + 336);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 110) ^= (*(_BYTE *)(a1 + 110) ^ (32 * v2)) & 0x20;
  return result;
}
