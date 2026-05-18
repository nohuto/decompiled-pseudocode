/*
 * XREFs of sub_1800F8330 @ 0x1800F8330
 * Callers:
 *     sub_180030860 @ 0x180030860 (sub_180030860.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_1800F5AF4 @ 0x1800F5AF4 (sub_1800F5AF4.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800F8330(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+50h] [rbp+18h]
  __int64 *v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = a3;
  v12 = (__int64 *)a1;
  sub_1800F5AF4(a1, a2, a3);
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  Mtx_init_in_situ((_Mtx_t)(a1 + 64), 2);
  v14 = (__int64 *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  v14 = (__int64 *)sub_180011088(0xC0uLL);
  sub_18001DE8C(v14, (__int64 *)&v14);
  sub_18001DE8C((__int64 *)(v5 + 8), (__int64 *)&v14);
  sub_18001DE8C((__int64 *)(v6 + 16), (__int64 *)&v14);
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a1 + 144) = v7;
  Mtx_init_in_situ((_Mtx_t)(a1 + 160), 2);
  v14 = (__int64 *)(a1 + 240);
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v12 = (__int64 *)sub_180011088(0x68uLL);
  sub_18001DE8C(v12, (__int64 *)&v12);
  sub_18001DE8C((__int64 *)(v8 + 8), (__int64 *)&v12);
  sub_18001DE8C((__int64 *)(v9 + 16), (__int64 *)&v12);
  *(_WORD *)(v10 + 24) = 257;
  *(_QWORD *)(a1 + 240) = v10;
  *(_DWORD *)(a1 + 256) = 0;
  sub_180010910((__int64)a3);
  return a1;
}
