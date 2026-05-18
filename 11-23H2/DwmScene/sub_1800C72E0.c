/*
 * XREFs of sub_1800C72E0 @ 0x1800C72E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18002650C @ 0x18002650C (sub_18002650C.c)
 *     sub_180026698 @ 0x180026698 (sub_180026698.c)
 *     sub_1800266EC @ 0x1800266EC (sub_1800266EC.c)
 *     sub_180028B9C @ 0x180028B9C (sub_180028B9C.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800C72E0(__int64 a1, int a2)
{
  int v3; // edi
  __int64 result; // rax
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 *v8; // rbx
  _QWORD *v9; // rax
  __int128 *v10; // rax
  __m128 v11; // xmm7
  __m128 v12; // xmm8
  _QWORD *v13; // rax
  __int64 v14; // rax
  void (__fastcall *v15)(__int64 *); // rbx
  __int64 v16; // [rsp+38h] [rbp-79h] BYREF
  __int64 v17; // [rsp+40h] [rbp-71h]
  __int64 *v18; // [rsp+48h] [rbp-69h] BYREF
  __int64 v19; // [rsp+50h] [rbp-61h]
  __int128 v20; // [rsp+58h] [rbp-59h] BYREF
  __int64 v21; // [rsp+68h] [rbp-49h] BYREF
  __int64 v22; // [rsp+70h] [rbp-41h]
  __int64 v23; // [rsp+78h] [rbp-39h] BYREF
  __int64 v24; // [rsp+80h] [rbp-31h]
  _BYTE v25[96]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v26; // [rsp+118h] [rbp+67h] BYREF
  int v27; // [rsp+120h] [rbp+6Fh]

  v3 = 0;
  v27 = 0;
  *(_DWORD *)(a1 + 416) = a2;
  result = sub_1800266EC(a1);
  v5 = result;
  v6 = 0;
  if ( (_DWORD)result )
  {
    v7 = *((_QWORD *)&v20 + 1);
    do
    {
      sub_180026698(a1, &v18, v6);
      v8 = v18;
      sub_18002A0C4((__int64)(v18 + 1), (__int64)v25);
      (*(void (__fastcall **)(__int64 *))(*v8 + 112))(v8);
      (*(void (__fastcall **)(__int64 *))(*v8 + 120))(v8);
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *))(*v8 + 152))(v8);
      sub_18001246C(&v21, v9);
      if ( v21 )
      {
        v10 = (__int128 *)sub_18001246C(&v23, (_QWORD *)(v21 + 456));
        v3 |= 1u;
      }
      else
      {
        v20 = 0LL;
        v10 = &v20;
        v3 |= 2u;
        v7 = 0LL;
      }
      sub_18001246C(&v16, v10);
      if ( (v3 & 2) != 0 )
      {
        v3 &= ~2u;
        if ( v7 )
          sub_180010530(v7);
      }
      if ( (v3 & 1) != 0 )
      {
        v3 &= ~1u;
        if ( v24 )
          sub_180010530(v24);
      }
      v11 = 0LL;
      v12 = 0LL;
      if ( v16 )
      {
        v13 = sub_18002650C(v16, &v26);
        v11 = (__m128)*(unsigned int *)v13;
        v12 = (__m128)*((unsigned int *)v13 + 1);
      }
      v14 = *v8;
      v15 = *(void (__fastcall **)(__int64 *))(*v8 + 56);
      (*(void (__fastcall **)(__int64 *))(v14 + 104))(v18);
      (*(void (__fastcall **)(__int64 *))(*v18 + 96))(v18);
      v15(v18);
      if ( v16 )
        sub_180028B9C(v16, _mm_unpacklo_ps(v11, v12).m128_i64[0]);
      if ( v17 )
        sub_180010530(v17);
      if ( v22 )
        sub_180010530(v22);
      result = sub_180010F54((__int64)v25);
      if ( v19 )
        result = sub_180010530(v19);
      ++v6;
    }
    while ( v6 < v5 );
  }
  return result;
}
