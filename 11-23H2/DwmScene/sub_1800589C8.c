/*
 * XREFs of sub_1800589C8 @ 0x1800589C8
 * Callers:
 *     sub_180058C98 @ 0x180058C98 (sub_180058C98.c)
 *     sub_180058F44 @ 0x180058F44 (sub_180058F44.c)
 *     sub_180058FCC @ 0x180058FCC (sub_180058FCC.c)
 *     sub_18005E6B8 @ 0x18005E6B8 (sub_18005E6B8.c)
 *     sub_18005E880 @ 0x18005E880 (sub_18005E880.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_1800589C8(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 40);
      if ( v4 )
        result = sub_180010530(v4);
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
