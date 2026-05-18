/*
 * XREFs of sub_1800CD1B0 @ 0x1800CD1B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017C00 @ 0x180017C00 (sub_180017C00.c)
 *     sub_180056764 @ 0x180056764 (sub_180056764.c)
 *     sub_180056848 @ 0x180056848 (sub_180056848.c)
 *     sub_180056918 @ 0x180056918 (sub_180056918.c)
 *     sub_180056938 @ 0x180056938 (sub_180056938.c)
 *     sub_18008C89C @ 0x18008C89C (sub_18008C89C.c)
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CD8AC @ 0x1800CD8AC (sub_1800CD8AC.c)
 */

void __fastcall sub_1800CD1B0(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  _QWORD *v8; // rax
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  _QWORD v11[4]; // [rsp+50h] [rbp-48h] BYREF

  if ( a2[3] == 1 )
  {
    sub_1800CD298();
  }
  else
  {
    v6 = sub_180056764(a2[4]);
    sub_1800CD8AC(a1, v6, *a2, a2[1], a2[2], v7, a2[6], a2[5], *(_QWORD *)(a3 + 8));
  }
  v8 = sub_18008C89C(v11, a2[4]);
  sub_180017C00((_OWORD *)(a1 + 120), (__int64)v8);
  sub_180011B24((__int64)v11);
  v9 = 0LL;
  v9.m128_f32[0] = (float)(int)sub_180056918(a1);
  v10 = 0LL;
  v10.m128_f32[0] = (float)(int)sub_180056848(a1);
  sub_180056938(a1, _mm_unpacklo_ps(v9, v10).m128_i64[0]);
}
