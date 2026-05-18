/*
 * XREFs of sub_1800F7508 @ 0x1800F7508
 * Callers:
 *     sub_1800F7508 @ 0x1800F7508 (sub_1800F7508.c)
 *     sub_1800F93D0 @ 0x1800F93D0 (sub_1800F93D0.c)
 *     sub_1800F9C60 @ 0x1800F9C60 (sub_1800F9C60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 *     sub_1800F6150 @ 0x1800F6150 (sub_1800F6150.c)
 *     sub_1800F619C @ 0x1800F619C (sub_1800F619C.c)
 *     sub_1800F7508 @ 0x1800F7508 (sub_1800F7508.c)
 *     sub_1800F88AC @ 0x1800F88AC (sub_1800F88AC.c)
 *     sub_1800FA89C @ 0x1800FA89C (sub_1800FA89C.c)
 *     sub_1800FAB78 @ 0x1800FAB78 (sub_1800FAB78.c)
 *     sub_1800FAC60 @ 0x1800FAC60 (sub_1800FAC60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F7508(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rdx
  unsigned int v12; // edi
  __int64 *v13; // rax
  __int64 v14; // r14
  __int64 v15; // r8
  __int128 *v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  unsigned __int64 v20; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23[4]; // [rsp+28h] [rbp-61h] BYREF
  __int64 v24[4]; // [rsp+48h] [rbp-41h] BYREF
  __int128 v25; // [rsp+68h] [rbp-21h] BYREF
  __int128 v26; // [rsp+78h] [rbp-11h]
  char *v27[3]; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int64 v28; // [rsp+A0h] [rbp+17h]

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v7 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, &v25, a2);
  v9 = sub_1800F88AC(a1 + 144, v8);
  if ( *((_QWORD *)&v26 + 1) >= 8uLL )
    sub_180010884((char *)v25, 2LL * *((_QWORD *)&v26 + 1) + 2);
  *(_QWORD *)&v26 = 0LL;
  v10 = 7LL;
  *((_QWORD *)&v26 + 1) = 7LL;
  LOWORD(v25) = 0;
  v11 = a2;
  if ( a2[3] >= 8uLL )
    v11 = (_QWORD *)*a2;
  if ( !(unsigned __int8)sub_1800FAB78(v9, v11) )
  {
    sub_1800465B0(a1, v27);
    if ( v27[0] )
      v12 = sub_1800F7508(v27[0], a2, a3);
    else
      v12 = 2;
    sub_180010910((__int64)v27);
    goto LABEL_31;
  }
  v13 = sub_1800129F4(v23, (__int64)a2);
  v14 = sub_1800FA89C(v9, v13);
  if ( (unsigned __int8)sub_1800FAC60(v14) )
  {
    sub_18001FB6C((__int64 *)&v25, L"Value", v15);
    v16 = &v25;
    if ( *((_QWORD *)&v26 + 1) >= 8uLL )
      v16 = (__int128 *)v25;
    if ( (unsigned __int8)sub_1800FAB78(v14, v16) )
    {
      v17 = sub_1800129F4(v24, (__int64)&v25);
      sub_1800FA89C(v14, v17);
      if ( (unsigned __int8)sub_1800F619C() )
      {
        v19 = sub_1800F6150((__int64)v27, v18);
        if ( a3 != v19 )
        {
          v20 = *(_QWORD *)(a3 + 24);
          if ( v20 >= 8 )
            sub_180010884(*(char **)a3, 2 * v20 + 2);
          *(_QWORD *)(a3 + 16) = 0LL;
          *(_QWORD *)(a3 + 24) = 7LL;
          *(_WORD *)a3 = 0;
          *(_OWORD *)a3 = *(_OWORD *)v19;
          *(_OWORD *)(a3 + 16) = *(_OWORD *)(v19 + 16);
          *(_QWORD *)(v19 + 16) = 0LL;
          *(_QWORD *)(v19 + 24) = 7LL;
          *(_WORD *)v19 = 0;
        }
        if ( v28 >= 8 )
          sub_180010884(v27[0], 2 * v28 + 2);
        if ( *((_QWORD *)&v26 + 1) >= 8uLL )
          sub_180010884((char *)v25, 2LL * *((_QWORD *)&v26 + 1) + 2);
        *(_QWORD *)&v26 = 0LL;
        *((_QWORD *)&v26 + 1) = 7LL;
        LOWORD(v25) = 0;
        v12 = 0;
        goto LABEL_31;
      }
    }
    if ( *((_QWORD *)&v26 + 1) >= 8uLL )
      sub_180010884((char *)v25, 2LL * *((_QWORD *)&v26 + 1) + 2);
    *(_QWORD *)&v26 = 0LL;
    *((_QWORD *)&v26 + 1) = 7LL;
    LOWORD(v25) = 0;
    goto LABEL_30;
  }
  if ( !(unsigned __int8)sub_1800F619C() )
  {
LABEL_30:
    v12 = 1;
LABEL_31:
    Mtx_unlock(v6);
    return v12;
  }
  sub_1800129F4((__int64 *)&v25, v14 + 8);
  if ( (__int128 *)a3 == &v25 )
  {
    v10 = *((_QWORD *)&v26 + 1);
  }
  else
  {
    v22 = *(_QWORD *)(a3 + 24);
    if ( v22 >= 8 )
      sub_180010884(*(char **)a3, 2 * v22 + 2);
    *(_OWORD *)a3 = v25;
    *(_OWORD *)(a3 + 16) = v26;
    LOWORD(v25) = 0;
  }
  if ( v10 >= 8 )
    sub_180010884((char *)v25, 2 * v10 + 2);
  Mtx_unlock(v6);
  return 0LL;
}
