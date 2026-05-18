/*
 * XREFs of sub_1800FADEC @ 0x1800FADEC
 * Callers:
 *     sub_1800FAC80 @ 0x1800FAC80 (sub_1800FAC80.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800FADEC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h]

  v6 = (__int64 *)a1;
  *(_QWORD *)a1 = &Spectre::Utils::Internal::SimpleCancellationToken::`vftable';
  Mtx_init_in_situ((_Mtx_t)(a1 + 8), 2);
  *(_DWORD *)(a1 + 88) = 0;
  v7 = a1 + 96;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  v6 = (__int64 *)sub_180011088(0x68uLL);
  sub_18001DE8C(v6, (__int64 *)&v6);
  sub_18001DE8C((__int64 *)(v2 + 8), (__int64 *)&v6);
  sub_18001DE8C((__int64 *)(v3 + 16), (__int64 *)&v6);
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)(a1 + 96) = v4;
  *(_BYTE *)(a1 + 112) = 0;
  return a1;
}
