/*
 * XREFs of sub_1800CF2D0 @ 0x1800CF2D0
 * Callers:
 *     sub_1800CD128 @ 0x1800CD128 (sub_1800CD128.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001070C @ 0x18001070C (sub_18001070C.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017C00 @ 0x180017C00 (sub_180017C00.c)
 *     sub_180055734 @ 0x180055734 (sub_180055734.c)
 *     sub_1800558D4 @ 0x1800558D4 (sub_1800558D4.c)
 *     sub_180056744 @ 0x180056744 (sub_180056744.c)
 *     sub_180056848 @ 0x180056848 (sub_180056848.c)
 *     sub_180056918 @ 0x180056918 (sub_180056918.c)
 *     sub_180056938 @ 0x180056938 (sub_180056938.c)
 *     sub_18008C89C @ 0x18008C89C (sub_18008C89C.c)
 *     sub_1800CC1C8 @ 0x1800CC1C8 (sub_1800CC1C8.c)
 *     sub_1800CC258 @ 0x1800CC258 (sub_1800CC258.c)
 *     sub_1800CC268 @ 0x1800CC268 (sub_1800CC268.c)
 *     sub_1800CC384 @ 0x1800CC384 (sub_1800CC384.c)
 *     sub_1800CE0A0 @ 0x1800CE0A0 (sub_1800CE0A0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_1800CF2D0(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  char v5; // r14
  void ***v6; // rsi
  _QWORD *v7; // rcx
  int v8; // r8d
  void ***v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // r9
  void **v12; // rdx
  int v13; // r14d
  int v14; // edx
  _QWORD *v15; // rax
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-30h]
  int v21; // [rsp+4Ch] [rbp-24h]

  v4 = 0;
  if ( !sub_1800CC258((_QWORD *)(a1 + 160)) || (v5 = 1, (a2 & 1) == 0) )
    v5 = 0;
  v6 = (void ***)(a1 + 112);
  if ( sub_18001070C((_QWORD *)(a1 + 168)) )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v7 + 80LL))(*v7, &v19);
    v9 = (void ***)sub_1800CC268((__int64)&v18, a2, v8, v21, (__int64)&v19);
LABEL_8:
    sub_1800CC1C8((void ***)(a1 + 112), v9);
    sub_180055734(&v18);
    goto LABEL_11;
  }
  if ( sub_18001070C((_QWORD *)(a1 + 176)) )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 80LL))(*v10, &v19);
    v9 = (void ***)sub_1800CC384((__int64)&v18, a2, v20, v11, (__int64)&v19);
    goto LABEL_8;
  }
  v12 = *v6;
  *v6 = 0LL;
  if ( v12 )
    sub_1800558D4((__int64)v10, v12);
LABEL_11:
  if ( v5 )
    sub_1800CE0A0(a1);
  v13 = 0;
  if ( *v6 && **v6 )
  {
    v4 = sub_180056918(a1);
    v13 = sub_180056848(a1);
    v14 = sub_180056744(a1);
  }
  else
  {
    v14 = 0;
  }
  v15 = sub_18008C89C(&v19, v14);
  sub_180017C00((_OWORD *)(a1 + 120), (__int64)v15);
  sub_180011B24((__int64)&v19);
  v16 = 0LL;
  v17 = 0LL;
  v16.m128_f32[0] = (float)v4;
  v17.m128_f32[0] = (float)v13;
  sub_180056938(a1, _mm_unpacklo_ps(v16, v17).m128_i64[0]);
}
