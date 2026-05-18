/*
 * XREFs of sub_1800E657C @ 0x1800E657C
 * Callers:
 *     sub_1800E3B1C @ 0x1800E3B1C (sub_1800E3B1C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010D08 @ 0x180010D08 (sub_180010D08.c)
 *     sub_18005E30C @ 0x18005E30C (sub_18005E30C.c)
 *     sub_18005E3D8 @ 0x18005E3D8 (sub_18005E3D8.c)
 *     sub_18005E468 @ 0x18005E468 (sub_18005E468.c)
 *     sub_18005E488 @ 0x18005E488 (sub_18005E488.c)
 *     sub_18009BA0C @ 0x18009BA0C (sub_18009BA0C.c)
 *     sub_1800E2DE0 @ 0x1800E2DE0 (sub_1800E2DE0.c)
 *     sub_1800E2DF0 @ 0x1800E2DF0 (sub_1800E2DF0.c)
 *     sub_1800E2F14 @ 0x1800E2F14 (sub_1800E2F14.c)
 *     sub_1800E502C @ 0x1800E502C (sub_1800E502C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_1800E657C(_QWORD *a1, unsigned int a2)
{
  char v4; // r15
  LPVOID **v5; // rdi
  _QWORD *v6; // rcx
  unsigned int v7; // r8d
  LPVOID **v8; // rax
  LPVOID *v9; // rcx
  LPVOID *v10; // r14
  LPVOID *v11; // rdi
  LPVOID *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // r9
  LPVOID *v15; // r14
  _QWORD *v16; // rax
  int v17; // r14d
  int v18; // r15d
  int v19; // edx
  char **v20; // rdi
  __int64 *v21; // rsi
  unsigned __int64 v22; // rdx
  __m128 v23; // xmm1
  __m128 v24; // xmm0
  int v25[2]; // [rsp+30h] [rbp-40h] BYREF
  char *v26; // [rsp+38h] [rbp-38h] BYREF
  int v27; // [rsp+40h] [rbp-30h]
  int v28; // [rsp+4Ch] [rbp-24h]
  unsigned __int64 v29; // [rsp+50h] [rbp-20h]

  if ( !sub_1800E2DE0(a1 + 20) || (v4 = 1, (a2 & 1) == 0) )
    v4 = 0;
  v5 = (LPVOID **)(a1 + 14);
  if ( sub_180010D08(a1 + 21) )
  {
    (*(void (__fastcall **)(_QWORD, char **))(*(_QWORD *)*v6 + 80LL))(*v6, &v26);
    v8 = (LPVOID **)sub_1800E2DF0((__int64)v25, a2, v7, v28, (unsigned int *)&v26);
  }
  else
  {
    if ( !sub_180010D08(a1 + 22) )
    {
      v15 = *v5;
      *v5 = 0LL;
      if ( !v15 )
        goto LABEL_22;
      if ( *v15 )
        sub_18000B998(*v15);
      v12 = v15;
      goto LABEL_21;
    }
    (*(void (__fastcall **)(_QWORD, char **))(*(_QWORD *)*v13 + 80LL))(*v13, &v26);
    v8 = (LPVOID **)sub_1800E2F14((__int64)v25, a2, (unsigned int)v27, v14, (unsigned int *)&v26);
  }
  if ( v5 != v8 )
  {
    v9 = *v8;
    *v8 = 0LL;
    v10 = *v5;
    *v5 = v9;
    if ( v10 )
    {
      if ( *v10 )
        sub_18000B998(*v10);
      sub_18000B998(v10);
    }
  }
  v11 = *(LPVOID **)v25;
  if ( *(_QWORD *)v25 )
  {
    if ( **(_QWORD **)v25 )
      sub_18000B998(**(LPVOID **)v25);
    v12 = v11;
LABEL_21:
    sub_18000B998(v12);
  }
LABEL_22:
  if ( v4 )
    sub_1800E502C((__int64)a1);
  v16 = (_QWORD *)a1[14];
  v17 = 0;
  v18 = 0;
  if ( v16 && *v16 )
  {
    v17 = sub_18005E468((__int64)a1);
    v18 = sub_18005E3D8((__int64)a1);
    v19 = sub_18005E30C((__int64)a1);
  }
  else
  {
    v19 = 0;
  }
  v20 = (char **)(a1 + 15);
  v21 = sub_18009BA0C((__int64 *)&v26, v19);
  if ( a1 + 15 != v21 )
  {
    v22 = a1[18];
    if ( v22 >= 0x10 )
      sub_180010884(*v20, v22 + 1);
    a1[17] = 0LL;
    a1[18] = 15LL;
    *(_BYTE *)v20 = 0;
    *(_OWORD *)v20 = *(_OWORD *)v21;
    *(_OWORD *)(a1 + 17) = *((_OWORD *)v21 + 1);
    v21[2] = 0LL;
    *(_BYTE *)v21 = 0;
    v21[3] = 15LL;
  }
  if ( v29 >= 0x10 )
    sub_180010884(v26, v29 + 1);
  v23 = 0LL;
  v24 = 0LL;
  v23.m128_f32[0] = (float)v17;
  v24.m128_f32[0] = (float)v18;
  sub_18005E488((__int64)a1, _mm_unpacklo_ps(v23, v24).m128_i64[0]);
}
