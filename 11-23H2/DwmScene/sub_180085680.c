/*
 * XREFs of sub_180085680 @ 0x180085680
 * Callers:
 *     sub_18004493C @ 0x18004493C (sub_18004493C.c)
 *     sub_1800507E4 @ 0x1800507E4 (sub_1800507E4.c)
 *     sub_180072FD0 @ 0x180072FD0 (sub_180072FD0.c)
 *     sub_180084CC0 @ 0x180084CC0 (sub_180084CC0.c)
 *     sub_180095E20 @ 0x180095E20 (sub_180095E20.c)
 *     sub_18009C1D0 @ 0x18009C1D0 (sub_18009C1D0.c)
 *     sub_18009C480 @ 0x18009C480 (sub_18009C480.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180082D18 @ 0x180082D18 (sub_180082D18.c)
 *     sub_1800856EC @ 0x1800856EC (sub_1800856EC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180085680(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_180082D18(*(_QWORD *)(a1 + 16), a2);
  v8[0] = *a3;
  v8[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  result = sub_1800856EC(a1, v5, v8);
  v7 = a3[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
