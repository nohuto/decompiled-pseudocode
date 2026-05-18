/*
 * XREFs of sub_18004CA0C @ 0x18004CA0C
 * Callers:
 *     sub_1800144E0 @ 0x1800144E0 (sub_1800144E0.c)
 *     sub_18004AFE0 @ 0x18004AFE0 (sub_18004AFE0.c)
 *     sub_180066720 @ 0x180066720 (sub_180066720.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 *     sub_180072FD0 @ 0x180072FD0 (sub_180072FD0.c)
 *     sub_180095E20 @ 0x180095E20 (sub_180095E20.c)
 *     sub_180097F30 @ 0x180097F30 (sub_180097F30.c)
 *     sub_18009C1D0 @ 0x18009C1D0 (sub_18009C1D0.c)
 *     sub_18009C480 @ 0x18009C480 (sub_18009C480.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18004CA50 @ 0x18004CA50 (sub_18004CA50.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004CA0C(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_18001246C(v8, a2);
  result = sub_18004CA50(v5, v4, v3);
  v7 = a2[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
