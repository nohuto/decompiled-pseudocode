/*
 * XREFs of sub_18002E2B0 @ 0x18002E2B0
 * Callers:
 *     sub_18003856C @ 0x18003856C (sub_18003856C.c)
 *     sub_1800A00F4 @ 0x1800A00F4 (sub_1800A00F4.c)
 *     sub_1800A05BC @ 0x1800A05BC (sub_1800A05BC.c)
 *     sub_1800A0648 @ 0x1800A0648 (sub_1800A0648.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

__int64 __fastcall sub_18002E2B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180011B24(v3 + 8);
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
