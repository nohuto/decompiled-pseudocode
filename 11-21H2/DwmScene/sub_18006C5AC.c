/*
 * XREFs of sub_18006C5AC @ 0x18006C5AC
 * Callers:
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180031EE8 @ 0x180031EE8 (sub_180031EE8.c)
 *     sub_18006C518 @ 0x18006C518 (sub_18006C518.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18006C5AC(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD v9[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-10h] BYREF

  v10[0] = *a5;
  v10[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  v11[0] = *a4;
  v11[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v9[0] = *a3;
  v9[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_180031EE8(a1, a2, v9, v11, v10);
  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  *(_WORD *)(a1 + 1457) = 0;
  *(_QWORD *)(a1 + 1460) = 1065353216LL;
  *(_BYTE *)(a1 + 1468) = 0;
  *(_OWORD *)(a1 + 1472) = xmmword_180128A30;
  sub_18006C518(a1 + 1488);
  Mtx_init_in_situ((_Mtx_t)(a1 + 1552), 2);
  sub_180010910((__int64)a3);
  sub_180010910((__int64)a4);
  sub_180010910((__int64)a5);
  return a1;
}
