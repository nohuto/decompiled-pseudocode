/*
 * XREFs of sub_18004A788 @ 0x18004A788
 * Callers:
 *     sub_18004A620 @ 0x18004A620 (sub_18004A620.c)
 *     sub_18004A7C0 @ 0x18004A7C0 (sub_18004A7C0.c)
 *     sub_18004A908 @ 0x18004A908 (sub_18004A908.c)
 *     sub_18004A9AC @ 0x18004A9AC (sub_18004A9AC.c)
 *     sub_18004AABC @ 0x18004AABC (sub_18004AABC.c)
 *     sub_18004CD58 @ 0x18004CD58 (sub_18004CD58.c)
 *     sub_18004CDE4 @ 0x18004CDE4 (sub_18004CDE4.c)
 *     sub_18004CE88 @ 0x18004CE88 (sub_18004CE88.c)
 * Callees:
 *     sub_18004AEC0 @ 0x18004AEC0 (sub_18004AEC0.c)
 */

__int64 __fastcall sub_18004A788(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_18004AEC0(v3);
      v3 += 88LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
