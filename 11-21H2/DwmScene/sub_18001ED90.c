/*
 * XREFs of sub_18001ED90 @ 0x18001ED90
 * Callers:
 *     sub_18001F06C @ 0x18001F06C (sub_18001F06C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18001DE9C @ 0x18001DE9C (sub_18001DE9C.c)
 *     sub_18001E060 @ 0x18001E060 (sub_18001E060.c)
 *     sub_18001EA64 @ 0x18001EA64 (sub_18001EA64.c)
 *     sub_18001EB1C @ 0x18001EB1C (sub_18001EB1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18001ED90(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  struct _Mtx_internal_imp_t *v9; // rbx
  int v10; // eax
  __int64 *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rdi
  __int64 v17; // r9
  __int64 *v18; // rbx
  __int64 v19; // r11
  __int64 (__fastcall ***v20)(_QWORD, _BYTE *); // rcx
  _BYTE *v21; // rdx
  __int64 **v22; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  char v26; // [rsp+30h] [rbp-89h]
  __int64 *v27; // [rsp+38h] [rbp-81h] BYREF
  __int128 v28; // [rsp+40h] [rbp-79h] BYREF
  __int128 v29; // [rsp+50h] [rbp-69h] BYREF
  struct _Mtx_internal_imp_t *v30; // [rsp+60h] [rbp-59h]
  __int128 *v31; // [rsp+68h] [rbp-51h]
  __int128 *v32; // [rsp+70h] [rbp-49h]
  int v33; // [rsp+80h] [rbp-39h]
  _BYTE v34[56]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE *v35; // [rsp+C0h] [rbp+7h]

  v28 = 0LL;
  v27 = (__int64 *)sub_180011088(0x68uLL);
  sub_18001DE8C(v27, (__int64 *)&v27);
  sub_18001DE8C((__int64 *)(v6 + 8), (__int64 *)&v27);
  sub_18001DE8C((__int64 *)(v7 + 16), (__int64 *)&v27);
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)&v28 = v8;
  v9 = (struct _Mtx_internal_imp_t *)sub_18001EB1C();
  v30 = v9;
  v10 = Mtx_lock(v9);
  if ( v10 )
    std::_Throw_C_error(v10);
  v11 = sub_18001EA64();
  v29 = 0LL;
  v31 = &v29;
  v32 = &v29;
  v27 = (__int64 *)sub_180011088(0x68uLL);
  sub_18001DE8C(v27, (__int64 *)&v27);
  sub_18001DE8C((__int64 *)(v12 + 8), (__int64 *)&v27);
  sub_18001DE8C((__int64 *)(v13 + 16), (__int64 *)&v27);
  *(_WORD *)(v14 + 24) = 257;
  *(_QWORD *)&v29 = v14;
  sub_18001DE9C(&v29, v11, v26, v15);
  v16 = (_QWORD *)v28;
  sub_18001E060((__int64)&v28, (__int64)&v28, *(char **)(v28 + 8));
  v16[1] = v16;
  *v16 = v16;
  v16[2] = v16;
  *((_QWORD *)&v28 + 1) = 0LL;
  sub_18001DE9C(&v28, &v29, v26, v17);
  sub_18001E060((__int64)&v29, (__int64)&v29, *(char **)(v29 + 8));
  sub_180010884((char *)v29, 0x68uLL);
  Mtx_unlock(v9);
  v18 = *(__int64 **)v28;
  while ( !*((_BYTE *)v18 + 25) )
  {
    v33 = *((_DWORD *)v18 + 8);
    v30 = (struct _Mtx_internal_imp_t *)v34;
    v19 = 0LL;
    v35 = 0LL;
    v20 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))v18[12];
    if ( v20 )
    {
      v19 = (**v20)(v20, v34);
      v35 = (_BYTE *)v19;
    }
    LODWORD(v27) = a2;
    if ( !v19 )
    {
      std::_Xbad_function_call();
      break;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64 **, __int64))(*(_QWORD *)v19 + 16LL))(v19, a1, &v27, a3);
    if ( v35 )
    {
      v21 = v34;
      LOBYTE(v21) = v35 != v34;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v35 + 32LL))(v35, v21);
    }
    v22 = (__int64 **)v18[2];
    if ( *((_BYTE *)v22 + 25) )
    {
      for ( i = (__int64 *)v18[1]; !*((_BYTE *)i + 25) && v18 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v18 = i;
      v18 = i;
    }
    else
    {
      v18 = (__int64 *)v18[2];
      for ( j = *v22; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v18 = j;
    }
  }
  sub_18001E060((__int64)&v28, (__int64)&v28, *(char **)(v28 + 8));
  return sub_180010884((char *)v28, 0x68uLL);
}
