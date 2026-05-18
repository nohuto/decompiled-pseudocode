/*
 * XREFs of sub_18006A64C @ 0x18006A64C
 * Callers:
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_18004FB08 @ 0x18004FB08 (sub_18004FB08.c)
 *     sub_180085608 @ 0x180085608 (sub_180085608.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18006A64C(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  v1 = sub_180034870(a1);
  sub_18004FB08(v1, &v2);
  sub_180085608(v2);
  if ( v3 )
    sub_180010530(v3);
}
