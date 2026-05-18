/*
 * XREFs of sub_18005EF18 @ 0x18005EF18
 * Callers:
 *     sub_180061560 @ 0x180061560 (sub_180061560.c)
 *     sub_180098640 @ 0x180098640 (sub_180098640.c)
 *     sub_180098A30 @ 0x180098A30 (sub_180098A30.c)
 * Callees:
 *     sub_180045270 @ 0x180045270 (sub_180045270.c)
 */

__int64 __fastcall sub_18005EF18(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180045270(v3);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
