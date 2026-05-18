/*
 * XREFs of sub_180051CB0 @ 0x180051CB0
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 * Callees:
 *     sub_1800513C0 @ 0x1800513C0 (sub_1800513C0.c)
 *     sub_1800514C8 @ 0x1800514C8 (sub_1800514C8.c)
 *     sub_180051948 @ 0x180051948 (sub_180051948.c)
 *     sub_180051D20 @ 0x180051D20 (sub_180051D20.c)
 *     sub_1800A3A98 @ 0x1800A3A98 (sub_1800A3A98.c)
 *     sub_1800A3E10 @ 0x1800A3E10 (sub_1800A3E10.c)
 */

__int64 __fastcall sub_180051CB0(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  _DWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r9
  __m128 *v7; // r9
  __int128 v9; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v10[152]; // [rsp+30h] [rbp-98h] BYREF

  sub_1800513C0((_DWORD *)(a1 + 108), a2);
  *(_DWORD *)(v2 + 252) = 2;
  sub_1800A3A98();
  v4 = (_DWORD *)sub_1800A3E10(v10, v3);
  sub_1800514C8((_DWORD *)(v5 + 256), v4);
  sub_180051D20(v6);
  v9 = xmmword_180106A08;
  return sub_180051948(v7, (__m128 *)&v9);
}
