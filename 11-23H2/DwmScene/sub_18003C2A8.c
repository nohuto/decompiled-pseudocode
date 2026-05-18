/*
 * XREFs of sub_18003C2A8 @ 0x18003C2A8
 * Callers:
 *     sub_180041190 @ 0x180041190 (sub_180041190.c)
 *     sub_180096C00 @ 0x180096C00 (sub_180096C00.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18003C2A8(__int64 a1, __int64 *a2)
{
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_18003E330(a1);
  sub_180011D4C(a1 + 8, a2);
  while ( 1 )
  {
    sub_180012624(*a2, &v5);
    if ( !v5 )
      break;
    sub_1800124F8(a2, &v5);
    if ( v6 )
      sub_180010530(v6);
  }
  if ( v6 )
    sub_180010530(v6);
  return a2;
}
