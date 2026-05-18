/*
 * XREFs of sub_180057344 @ 0x180057344
 * Callers:
 *     sub_1800381C0 @ 0x1800381C0 (sub_1800381C0.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011968 @ 0x180011968 (sub_180011968.c)
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 *     sub_180032108 @ 0x180032108 (sub_180032108.c)
 *     sub_1800385C8 @ 0x1800385C8 (sub_1800385C8.c)
 *     sub_180038610 @ 0x180038610 (sub_180038610.c)
 *     sub_1800572B0 @ 0x1800572B0 (sub_1800572B0.c)
 *     sub_18005793C @ 0x18005793C (sub_18005793C.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180057344(__int64 a1)
{
  __int64 v1; // rbx
  struct _Mtx_internal_imp_t *v2; // rdi
  int v3; // ecx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx
  const char *v6; // rax
  const std::system_error *v7; // [rsp+20h] [rbp-28h] BYREF
  _Thrd_t v8; // [rsp+30h] [rbp-18h] BYREF
  struct _Mtx_internal_imp_t *v11; // [rsp+58h] [rbp+10h]

  try
  {
    v1 = a1;
    v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    v11 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    sub_18002B3EC((__int64)&v8, (struct _Mtx_internal_imp_t *)(a1 + 128));
    if ( *(_DWORD *)(v1 + 36) == 1 )
      sub_18005793C(v1, &v8);
    sub_18002B8E0((__int64)&v8);
  }
  catch ( const std::system_error *v7 )
  {
    v6 = (const char *)(*(__int64 (__fastcall **)(const std::system_error *))(*(_QWORD *)v7 + 8LL))(v7);
    sub_18001DB68(&stru_1801C8368, 3, "Exception in Display Destructor, message=%s", v6);
    v1 = a1;
    v2 = v11;
  }
  if ( *(_DWORD *)(v1 + 112) )
  {
    v8 = *(_Thrd_t *)(v1 + 104);
    v3 = Thrd_detach(&v8);
    sub_180011968(v3);
    *(_OWORD *)(v1 + 104) = 0LL;
  }
  _Cnd_destroy_in_situ((_Cnd_t)(v1 + 352));
  _Cnd_destroy_in_situ((_Cnd_t)(v1 + 280));
  _Cnd_destroy_in_situ((_Cnd_t)(v1 + 208));
  _Mtx_destroy_in_situ(v2);
  sub_180032108(v1 + 104);
  sub_1800572B0((void **)(v1 + 88));
  sub_180038610(v1 + 64);
  result = sub_1800385C8(v1 + 40);
  v5 = *(volatile signed __int32 **)(v1 + 8);
  if ( v5 )
    return sub_180010574(v5);
  return result;
}
