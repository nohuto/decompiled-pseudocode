/*
 * XREFs of sub_18002C3C8 @ 0x18002C3C8
 * Callers:
 *     sub_18002D1B0 @ 0x18002D1B0 (sub_18002D1B0.c)
 *     sub_180072C68 @ 0x180072C68 (sub_180072C68.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 *     sub_1800568C0 @ 0x1800568C0 (sub_1800568C0.c)
 */

__int64 __fastcall sub_18002C3C8(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  sub_1800566F0(a1, &v4, a2);
  if ( v4 )
  {
    v2 = sub_1800568C0();
    if ( v5 )
      sub_180010530(v5);
    return v2;
  }
  else
  {
    if ( v5 )
      sub_180010530(v5);
    return 0LL;
  }
}
