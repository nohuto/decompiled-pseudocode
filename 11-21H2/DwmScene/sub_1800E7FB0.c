/*
 * XREFs of sub_1800E7FB0 @ 0x1800E7FB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     sub_1800E6288 @ 0x1800E6288 (sub_1800E6288.c)
 *     sub_1800E6B44 @ 0x1800E6B44 (sub_1800E6B44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1800E7FB0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v5; // rdx
  char v6; // di
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rax
  char v10; // bl
  char v11; // bl
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // r14d
  __int64 v18; // rsi
  void (__fastcall *v19)(__int64, _QWORD, _QWORD, __int64, _DWORD, int); // rdi
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rsi
  void (__fastcall *v25)(__int64, _QWORD, __int64); // rdi
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v31; // [rsp+40h] [rbp-89h] BYREF
  __int64 v32; // [rsp+48h] [rbp-81h] BYREF
  __int64 v33[2]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v34; // [rsp+60h] [rbp-69h] BYREF
  __int64 v35; // [rsp+68h] [rbp-61h]
  __int64 v36[2]; // [rsp+70h] [rbp-59h] BYREF
  _QWORD v37[2]; // [rsp+80h] [rbp-49h] BYREF
  char v38[16]; // [rsp+90h] [rbp-39h] BYREF
  int v39; // [rsp+A0h] [rbp-29h]
  unsigned int v40; // [rsp+A4h] [rbp-25h]
  char v41[16]; // [rsp+C0h] [rbp-9h] BYREF
  int v42; // [rsp+D0h] [rbp+7h]
  int v43; // [rsp+D4h] [rbp+Bh]

  LODWORD(v31) = 0;
  if ( *a2 )
  {
    v5 = sub_18005E29C(*a2, v36, *(_DWORD *)(a1 + 88));
    v6 = 1;
    v7 = *v5;
  }
  else
  {
    v35 = 0LL;
    v5 = &v34;
    v6 = 2;
    v7 = 0LL;
  }
  v37[0] = v7;
  v37[1] = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    sub_180010910((__int64)&v34);
  }
  if ( (v6 & 1) != 0 )
  {
    v6 &= ~1u;
    sub_180010910((__int64)v36);
  }
  if ( *a3 )
  {
    v8 = sub_18005E29C(*a3, v36, *(_DWORD *)(a1 + 88));
    v9 = *v8;
    v10 = 4;
  }
  else
  {
    v33[1] = 0LL;
    v8 = v33;
    v9 = 0LL;
    v10 = 8;
  }
  v11 = v6 | v10;
  v34 = v9;
  v35 = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  if ( (v11 & 8) != 0 )
  {
    v11 &= ~8u;
    sub_180010910((__int64)v33);
  }
  if ( (v11 & 4) != 0 )
    sub_180010910((__int64)v36);
  sub_1800E6B44(v33, v37);
  sub_1800E6B44(v36, &v34);
  v12 = v36[0];
  v13 = sub_1800E6288(v36[0], &v31);
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v13 + 80LL))(*v13, v38);
  v14 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = sub_1800E6288(v33[0], &v31);
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v15 + 80LL))(*v15, v41);
  v16 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v43 == 1 && v40 > 1 )
  {
    v17 = v39;
    if ( v39 == 39 )
      v17 = v42;
    v18 = *(_QWORD *)(a1 + 144);
    v19 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, int))(*(_QWORD *)v18 + 456LL);
    v20 = *sub_1800E6288(v12, &v32);
    v21 = sub_1800E6288(v33[0], &v31);
    v19(v18, *v21, 0LL, v20, 0, v17);
    v22 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 144);
    v25 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v24 + 376LL);
    v26 = *sub_1800E6288(v12, &v31);
    v27 = sub_1800E6288(v33[0], &v32);
    v25(v24, *v27, v26);
    v28 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  sub_180010910((__int64)v36);
  sub_180010910((__int64)v33);
  sub_180010910((__int64)&v34);
  return sub_180010910((__int64)v37);
}
