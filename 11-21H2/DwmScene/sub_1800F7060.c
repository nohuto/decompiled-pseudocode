/*
 * XREFs of sub_1800F7060 @ 0x1800F7060
 * Callers:
 *     sub_1800F7060 @ 0x1800F7060 (sub_1800F7060.c)
 *     sub_1800F9070 @ 0x1800F9070 (sub_1800F9070.c)
 *     sub_1800F9C50 @ 0x1800F9C50 (sub_1800F9C50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 *     sub_1800F6138 @ 0x1800F6138 (sub_1800F6138.c)
 *     j_?IsContext@WorkItem@details@Concurrency@@QEBA_NXZ @ 0x1800F6184 (j_-IsContext@WorkItem@details@Concurrency@@QEBA_NXZ.c)
 *     sub_1800F7060 @ 0x1800F7060 (sub_1800F7060.c)
 *     sub_1800F88AC @ 0x1800F88AC (sub_1800F88AC.c)
 *     sub_1800FA89C @ 0x1800FA89C (sub_1800FA89C.c)
 *     sub_1800FAB78 @ 0x1800FAB78 (sub_1800FAB78.c)
 *     sub_1800FAC60 @ 0x1800FAC60 (sub_1800FAC60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F7060(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rdx
  unsigned int v11; // edi
  __int64 *v12; // rax
  __int64 v13; // rdi
  Concurrency::details::WorkItem *v14; // rcx
  __int64 v15; // r8
  char **v16; // rdx
  __int64 *v17; // rax
  Concurrency::details::WorkItem *v18; // rax
  __int64 v20[5]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v21[4]; // [rsp+48h] [rbp-21h] BYREF
  char *v22[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v24; // [rsp+80h] [rbp+17h]

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v20[4] = a1 + 64;
  v7 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = (*(__int64 (__fastcall **)(__int64, char **, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v22, a2);
  v9 = sub_1800F88AC(a1 + 144, v8);
  if ( v24 >= 8 )
    sub_180010884(v22[0], 2 * v24 + 2);
  v23 = 0LL;
  v24 = 7LL;
  LOWORD(v22[0]) = 0;
  v10 = a2;
  if ( a2[3] >= 8uLL )
    v10 = (_QWORD *)*a2;
  if ( !(unsigned __int8)sub_1800FAB78(v9, v10) )
  {
    sub_1800465B0(a1, v20);
    if ( v20[0] )
      v11 = sub_1800F7060(v20[0], a2, a3);
    else
      v11 = 2;
    sub_180010910((__int64)v20);
    goto LABEL_25;
  }
  v12 = sub_1800129F4(v21, (__int64)a2);
  v13 = sub_1800FA89C(v9, v12);
  if ( (unsigned __int8)sub_1800FAC60(v13) )
  {
    sub_18001FB6C((__int64 *)v22, L"Value", v15);
    v16 = v22;
    if ( v24 >= 8 )
      v16 = (char **)v22[0];
    if ( (unsigned __int8)sub_1800FAB78(v13, v16) )
    {
      v17 = sub_1800129F4(v20, (__int64)v22);
      v18 = (Concurrency::details::WorkItem *)sub_1800FA89C(v13, v17);
      if ( Concurrency::details::WorkItem::IsContext(v18) )
      {
        *a3 = sub_1800F6138();
        if ( v24 >= 8 )
          sub_180010884(v22[0], 2 * v24 + 2);
        v23 = 0LL;
        v24 = 7LL;
        LOWORD(v22[0]) = 0;
        v11 = 0;
        goto LABEL_25;
      }
    }
    if ( v24 >= 8 )
      sub_180010884(v22[0], 2 * v24 + 2);
    v23 = 0LL;
    v24 = 7LL;
    LOWORD(v22[0]) = 0;
    goto LABEL_24;
  }
  if ( !Concurrency::details::WorkItem::IsContext(v14) )
  {
LABEL_24:
    v11 = 1;
LABEL_25:
    Mtx_unlock(v6);
    return v11;
  }
  *a3 = *(_DWORD *)(v13 + 40);
  Mtx_unlock(v6);
  return 0LL;
}
