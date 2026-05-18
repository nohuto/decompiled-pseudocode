/*
 * XREFs of sub_1800DDFC0 @ 0x1800DDFC0
 * Callers:
 *     sub_180030500 @ 0x180030500 (sub_180030500.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_1800DBCA4 @ 0x1800DBCA4 (sub_1800DBCA4.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800DDFC0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  sub_1800DBCA4(a1, a2, a3);
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  Mtx_init_in_situ((_Mtx_t)(a1 + 64), 2);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  v5 = sub_18001C190();
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 144) = v5;
  Mtx_init_in_situ((_Mtx_t)(a1 + 160), 2);
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v6 = sub_18001C190();
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 240) = v6;
  *(_DWORD *)(a1 + 256) = 0;
  v7 = a3[1];
  if ( v7 )
    sub_180010530(v7);
  return a1;
}
