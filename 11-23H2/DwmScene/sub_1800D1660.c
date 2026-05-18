/*
 * XREFs of sub_1800D1660 @ 0x1800D1660
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800CB6E8 @ 0x1800CB6E8 (sub_1800CB6E8.c)
 *     sub_1800CC188 @ 0x1800CC188 (sub_1800CC188.c)
 *     sub_1800CF5CC @ 0x1800CF5CC (sub_1800CF5CC.c)
 *     sub_1800CF834 @ 0x1800CF834 (sub_1800CF834.c)
 *     sub_1800D0568 @ 0x1800D0568 (sub_1800D0568.c)
 *     sub_1800D05C0 @ 0x1800D05C0 (sub_1800D05C0.c)
 *     sub_1800D0664 @ 0x1800D0664 (sub_1800D0664.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800D1660(__int64 a1, _QWORD *a2, __int64 *a3)
{
  int v5; // ebx
  __int64 v6; // r12
  __int64 *v7; // r15
  __int64 v8; // rsi
  __int64 *v9; // rax
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 *v13; // rax
  int v14; // ecx
  __int64 v15; // r14
  __int64 *v16; // rax
  __int64 v17; // rcx
  char v18; // dl
  char v19; // bl
  __int64 v20; // rsi
  __int64 *v21; // rax
  char v22; // di
  char v23; // di
  __int64 v24; // rbx
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int64 *v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  char v36; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h]
  _QWORD v38[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v39[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v40[8]; // [rsp+E0h] [rbp-20h] BYREF

  v30 = a3;
  v27 = a1;
  v5 = 0;
  LODWORD(v26) = 0;
  v6 = 8LL;
  sub_18000C8C8((__int64)v40, 8LL, 8LL);
  v7 = v40;
  v8 = 0LL;
  do
  {
    sub_18001246C(&v28, a2);
    if ( v28 )
    {
      v9 = sub_1800D05C0(v28, &v34, *(_DWORD *)(a1 + 88));
      v10 = v5 | 1;
      v11 = *v9;
    }
    else
    {
      v37 = 0LL;
      v9 = (__int64 *)&v36;
      v10 = v5 | 2;
      v11 = 0LL;
    }
    v38[0] = v11;
    v12 = v9[1];
    v38[1] = v12;
    *v9 = 0LL;
    v9[1] = 0LL;
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      if ( v37 )
        sub_180010530(v37);
    }
    if ( (v10 & 1) != 0 )
    {
      v10 &= ~1u;
      if ( v35 )
        sub_180010530(v35);
    }
    sub_1800CF834(&v31, v38);
    if ( v31 )
    {
      v13 = sub_1800CC188(v31, &v33);
      v14 = 4;
    }
    else
    {
      v26 = 0LL;
      v13 = &v26;
      v14 = 8;
    }
    v5 = v14 | v10;
    sub_1800CB6E8(v7, v13);
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      sub_18000E72C(&v26);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      sub_18000E72C(&v33);
    }
    v39[v8] = v40[v8];
    if ( v32 )
      sub_180010530(v32);
    if ( v12 )
      sub_180010530(v12);
    if ( v29 )
      sub_180010530(v29);
    a2 += 2;
    ++v7;
    ++v8;
    --v6;
  }
  while ( v6 );
  v15 = v27;
  if ( *v30 )
  {
    v16 = sub_1800D0568(*v30, &v34, *(_DWORD *)(v27 + 88));
    v17 = *v16;
    v18 = 16;
  }
  else
  {
    v29 = 0LL;
    v16 = &v28;
    v17 = 0LL;
    v18 = 32;
  }
  v19 = v18 | v5;
  v31 = v17;
  v20 = v16[1];
  v32 = v20;
  *v16 = 0LL;
  v16[1] = 0LL;
  if ( (v19 & 0x20) != 0 )
  {
    v19 &= ~0x20u;
    if ( v29 )
      sub_180010530(v29);
  }
  if ( (v19 & 0x10) != 0 )
  {
    v19 &= ~0x10u;
    if ( v35 )
      sub_180010530(v35);
  }
  sub_1800CF5CC(&v28, &v31);
  if ( v28 )
  {
    v21 = sub_1800D0664(v28, &v30);
    v22 = 64;
  }
  else
  {
    v27 = 0LL;
    v21 = &v27;
    v22 = 0x80;
  }
  v23 = v19 | v22;
  v24 = 0LL;
  v26 = 0LL;
  if ( &v26 != v21 )
  {
    v24 = *v21;
    v26 = *v21;
    *v21 = 0LL;
  }
  if ( v23 < 0 )
  {
    v23 &= ~0x80u;
    sub_18000E72C(&v27);
  }
  if ( (v23 & 0x40) != 0 )
    sub_18000E72C((__int64 *)&v30);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64, __int64 (*)()))(**(_QWORD **)(v15 + 144) + 264LL))(
    *(_QWORD *)(v15 + 144),
    8LL,
    v39,
    v24,
    sub_18000D430);
  sub_18000E72C(&v26);
  if ( v29 )
    sub_180010530(v29);
  if ( v20 )
    sub_180010530(v20);
  return sub_18000B4B0((__int64)v40, 8LL, 8LL);
}
