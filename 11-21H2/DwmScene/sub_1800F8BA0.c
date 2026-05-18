/*
 * XREFs of sub_1800F8BA0 @ 0x1800F8BA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180029710 @ 0x180029710 (sub_180029710.c)
 *     sub_180059B30 @ 0x180059B30 (sub_180059B30.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800F8BA0(__int64 a1, __int64 *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  int v6; // esi
  __int64 *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 i; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  _BYTE *v17; // rax
  __int64 (__fastcall ***v18)(_QWORD, _BYTE *); // rcx
  _BYTE *v19; // rcx
  _BYTE *v20; // rdx
  _BYTE *v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int64 v25[2]; // [rsp+20h] [rbp-A9h] BYREF
  __int128 v26; // [rsp+30h] [rbp-99h] BYREF
  __int128 v27; // [rsp+48h] [rbp-81h]
  __int64 v28; // [rsp+60h] [rbp-69h]
  __int64 *v29; // [rsp+68h] [rbp-61h]
  _BYTE v30[56]; // [rsp+70h] [rbp-59h] BYREF
  _BYTE *v31; // [rsp+A8h] [rbp-21h]
  _BYTE v32[56]; // [rsp+B0h] [rbp-19h] BYREF
  _BYTE *v33; // [rsp+E8h] [rbp+1Fh]

  v29 = a2;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 160);
  v28 = a1 + 160;
  v5 = Mtx_lock((_Mtx_t)(a1 + 160));
  if ( v5 )
    std::_Throw_C_error(v5);
  v6 = 0;
  v7 = (__int64 *)(a1 + 240);
  v8 = *(_QWORD *)(a1 + 240);
  v9 = *(_QWORD *)v8;
  if ( v8 != *(_QWORD *)v8 )
  {
    if ( *(_BYTE *)(v8 + 25) )
    {
      v9 = *(_QWORD *)(v8 + 16);
    }
    else if ( *(_BYTE *)(v9 + 25) )
    {
      v9 = *(_QWORD *)(v8 + 8);
      v10 = *(_QWORD *)(a1 + 240);
      while ( !*(_BYTE *)(v9 + 25) && v10 == *(_QWORD *)v9 )
      {
        v10 = v9;
        v9 = *(_QWORD *)(v9 + 8);
      }
      if ( *(_BYTE *)(v10 + 25) )
        v9 = v10;
    }
    else
    {
      for ( i = *(_QWORD *)(v9 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
        v9 = i;
    }
    v6 = *(_DWORD *)(v9 + 32) + 1;
  }
  v12 = *(_QWORD *)(v8 + 8);
  *(_QWORD *)&v27 = v12;
  DWORD2(v27) = 0;
  while ( !*(_BYTE *)(v12 + 25) )
  {
    *(_QWORD *)&v27 = v12;
    if ( *(_DWORD *)(v12 + 32) >= v6 )
    {
      DWORD2(v27) = 1;
      v8 = v12;
      v12 = *(_QWORD *)v12;
    }
    else
    {
      DWORD2(v27) = 0;
      v12 = *(_QWORD *)(v12 + 16);
    }
  }
  if ( *(_BYTE *)(v8 + 25) || v6 < *(_DWORD *)(v8 + 32) )
  {
    if ( *(_QWORD *)(a1 + 248) == 0x276276276276276LL )
      sub_18001F56C();
    v25[0] = *v7;
    v26 = (unsigned __int64)(a1 + 240);
    v13 = sub_180011088(0x68uLL);
    *(_DWORD *)(v13 + 32) = v6;
    *(_QWORD *)(v13 + 96) = 0LL;
    sub_18001DE7C((__int64 *)v13, v25);
    sub_18001DE7C((__int64 *)(v14 + 8), v25);
    sub_18001DE7C((__int64 *)(v13 + 16), v25);
    *(_WORD *)(v13 + 24) = 0;
    *((_QWORD *)&v26 + 1) = 0LL;
    sub_180059B30((__int64)&v26, v15);
    v26 = v27;
    v8 = sub_18001F31C(v7, (__int64)&v26, v13);
  }
  v16 = v8 + 40;
  v17 = 0LL;
  v31 = 0LL;
  v18 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))a2[7];
  if ( v18 )
  {
    v17 = (_BYTE *)(**v18)(v18, v30);
    v31 = v17;
  }
  if ( v17 == v30 || (v19 = *(_BYTE **)(v16 + 56), v19 == (_BYTE *)v16) )
  {
    v33 = 0LL;
    sub_180029710((__int64)v32, (__int64)v30);
    sub_180029710((__int64)v30, v16);
    sub_180029710(v16, (__int64)v32);
    if ( v33 )
    {
      v20 = v32;
      LOBYTE(v20) = v33 != v32;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v33 + 32LL))(v33, v20);
    }
    v19 = v31;
  }
  else
  {
    v31 = *(_BYTE **)(v16 + 56);
    *(_QWORD *)(v16 + 56) = v17;
  }
  if ( v19 )
  {
    v21 = v30;
    LOBYTE(v21) = v19 != v30;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v19 + 32LL))(v19, v21);
  }
  Mtx_unlock(v4);
  v22 = (__int64 *)a2[7];
  if ( v22 )
  {
    v23 = *v22;
    LOBYTE(v23) = v22 != a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v22 + 32))(v22, v23);
    a2[7] = 0LL;
  }
  return (unsigned int)v6;
}
