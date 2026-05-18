/*
 * XREFs of sub_180060694 @ 0x180060694
 * Callers:
 *     sub_1800606D0 @ 0x1800606D0 (sub_1800606D0.c)
 *     sub_180060A6C @ 0x180060A6C (sub_180060A6C.c)
 *     sub_180060BA8 @ 0x180060BA8 (sub_180060BA8.c)
 *     sub_180060C30 @ 0x180060C30 (sub_180060C30.c)
 *     sub_180061428 @ 0x180061428 (sub_180061428.c)
 *     sub_180061488 @ 0x180061488 (sub_180061488.c)
 *     sub_180062BE0 @ 0x180062BE0 (sub_180062BE0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180060694(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180010910(v3 + 32);
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
