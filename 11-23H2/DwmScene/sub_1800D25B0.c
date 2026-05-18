/*
 * XREFs of sub_1800D25B0 @ 0x1800D25B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017600 @ 0x180017600 (sub_180017600.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 *     sub_180070B70 @ 0x180070B70 (sub_180070B70.c)
 *     sub_180070B94 @ 0x180070B94 (sub_180070B94.c)
 *     sub_1800CF04C @ 0x1800CF04C (sub_1800CF04C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D25B0(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  __int64 v6; // r14
  __int64 *v7; // rax
  char v8; // di
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 *v11; // rax
  char v12; // bl
  char v13; // bl
  __int64 v14; // r12
  __int64 *v15; // rcx
  char v16; // di
  char v17; // di
  int v18; // esi
  int v19; // esi
  void *v20; // rax
  __int64 result; // rax
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h]
  _QWORD v26[4]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v27[8]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v28; // [rsp+78h] [rbp-8h]
  __int64 v29; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+D8h] [rbp+58h]

  v30 = a4;
  v6 = 0LL;
  if ( *a3 )
  {
    v7 = sub_1800566F0(*a3, &v22, *(_DWORD *)(a1 + 88));
    v8 = 1;
    v9 = *v7;
  }
  else
  {
    v25 = 0LL;
    v7 = &v24;
    v8 = 2;
    v9 = 0LL;
  }
  v26[0] = v9;
  v10 = v7[1];
  v26[1] = v10;
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v25 )
      sub_180010530(v25);
  }
  if ( (v8 & 1) != 0 )
  {
    v8 &= ~1u;
    if ( v23 )
      sub_180010530(v23);
  }
  if ( v9 )
  {
    sub_18001246C(&v22, v26);
    v11 = (__int64 *)sub_180017600((__int64)v27);
    v6 = *v11;
    v12 = 4;
  }
  else
  {
    v25 = 0LL;
    v11 = &v24;
    v12 = 8;
  }
  v13 = v8 | v12;
  v26[2] = v6;
  v14 = v11[1];
  v26[3] = v14;
  *v11 = 0LL;
  v11[1] = 0LL;
  if ( (v13 & 8) != 0 )
  {
    v13 &= ~8u;
    if ( v25 )
      sub_180010530(v25);
  }
  if ( (v13 & 4) != 0 )
  {
    v13 &= ~4u;
    if ( v28 )
      sub_180010530(v28);
  }
  if ( v6 )
  {
    v15 = sub_1800CF04C(v6, &v24);
    v16 = 16;
  }
  else
  {
    v22 = 0LL;
    v15 = &v22;
    v16 = 32;
  }
  v17 = v13 | v16;
  v29 = 0LL;
  if ( &v29 != v15 )
  {
    v29 = *v15;
    *v15 = 0LL;
  }
  if ( (v17 & 0x20) != 0 )
  {
    v17 &= ~0x20u;
    sub_18000E72C(&v22);
  }
  if ( (v17 & 0x10) != 0 )
    sub_18000E72C(&v24);
  if ( v6 && *(_BYTE *)(v6 + 208) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 432LL))(*(_QWORD *)(a1 + 144), v29);
    *(_BYTE *)(v6 + 208) = 0;
  }
  v18 = a2 - 1;
  if ( v18 )
  {
    v19 = v18 - 3;
    if ( v19 )
    {
      if ( v19 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 64LL))(
          *(_QWORD *)(a1 + 144),
          v30,
          1LL,
          &v29);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 248LL))(
        *(_QWORD *)(a1 + 144),
        v30,
        1LL,
        &v29);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 200LL))(
      *(_QWORD *)(a1 + 144),
      v30,
      1LL,
      &v29);
  }
  if ( v29 )
  {
    v20 = sub_180070B94();
    sub_180070B70((__int64)v20, 11, 1);
  }
  result = sub_18000E72C(&v29);
  if ( v14 )
    result = sub_180010530(v14);
  if ( v10 )
    return sub_180010530(v10);
  return result;
}
