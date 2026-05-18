/*
 * XREFs of sub_180085870 @ 0x180085870
 * Callers:
 *     sub_180044AE8 @ 0x180044AE8 (sub_180044AE8.c)
 *     sub_18005081C @ 0x18005081C (sub_18005081C.c)
 *     sub_180072FD0 @ 0x180072FD0 (sub_180072FD0.c)
 *     sub_180084CC0 @ 0x180084CC0 (sub_180084CC0.c)
 *     sub_180095E20 @ 0x180095E20 (sub_180095E20.c)
 *     sub_18009C1D0 @ 0x18009C1D0 (sub_18009C1D0.c)
 *     sub_18009C480 @ 0x18009C480 (sub_18009C480.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180082CD8 @ 0x180082CD8 (sub_180082CD8.c)
 *     sub_1800858DC @ 0x1800858DC (sub_1800858DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180085870(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_180082CD8(*(_QWORD *)(a1 + 16), a2);
  v8[0] = *a3;
  v8[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  result = sub_1800858DC(a1, v5, v8);
  v7 = a3[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
