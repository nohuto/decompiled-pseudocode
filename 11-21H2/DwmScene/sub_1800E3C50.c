/*
 * XREFs of sub_1800E3C50 @ 0x1800E3C50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18004E9D8 @ 0x18004E9D8 (sub_18004E9D8.c)
 *     sub_18005E3D8 @ 0x18005E3D8 (sub_18005E3D8.c)
 *     sub_18005E468 @ 0x18005E468 (sub_18005E468.c)
 *     sub_18005E488 @ 0x18005E488 (sub_18005E488.c)
 *     sub_18009BA0C @ 0x18009BA0C (sub_18009BA0C.c)
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 *     sub_1800E4630 @ 0x1800E4630 (sub_1800E4630.c)
 */

void __fastcall sub_1800E3C50(__int64 a1, int *a2, __int64 a3)
{
  int v6; // ebx
  int v7; // eax
  char **v8; // rbx
  __int64 *v9; // rdi
  unsigned __int64 v10; // rdx
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  char *v13; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-30h]

  if ( a2[3] == 1 )
  {
    sub_1800E3D8C();
  }
  else
  {
    v6 = a2[4];
    v7 = sub_18004E9D8(v6, *a2);
    sub_1800E4630(a1, v7, *a2, a2[1], a2[2], v6, a2[6], a2[5], *(_QWORD *)(a3 + 8));
  }
  v8 = (char **)(a1 + 120);
  v9 = sub_18009BA0C((__int64 *)&v13, a2[4]);
  if ( (__int64 *)(a1 + 120) != v9 )
  {
    v10 = *(_QWORD *)(a1 + 144);
    if ( v10 >= 0x10 )
      sub_180010884(*v8, v10 + 1);
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_BYTE *)v8 = 0;
    *(_QWORD *)(a1 + 144) = 15LL;
    *(_OWORD *)v8 = *(_OWORD *)v9;
    *(_OWORD *)(a1 + 136) = *((_OWORD *)v9 + 1);
    v9[2] = 0LL;
    v9[3] = 15LL;
    *(_BYTE *)v9 = 0;
  }
  if ( v14 >= 0x10 )
    sub_180010884(v13, v14 + 1);
  v11 = 0LL;
  v11.m128_f32[0] = (float)(int)sub_18005E468(a1);
  v12 = 0LL;
  v12.m128_f32[0] = (float)(int)sub_18005E3D8(a1);
  sub_18005E488(a1, _mm_unpacklo_ps(v11, v12).m128_i64[0]);
}
