/*
 * XREFs of sub_18005E94C @ 0x18005E94C
 * Callers:
 *     sub_180030A58 @ 0x180030A58 (sub_180030A58.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180029930 @ 0x180029930 (sub_180029930.c)
 *     sub_18005E678 @ 0x18005E678 (sub_18005E678.c)
 *     sub_18005F26C @ 0x18005F26C (sub_18005F26C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18005E94C(__int64 a1)
{
  __int64 v1; // rdi
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rcx
  const char *v11; // rax
  const std::system_error *v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h] BYREF
  char v14; // [rsp+30h] [rbp-38h]
  _Thrd_t v15; // [rsp+40h] [rbp-28h] BYREF
  __int128 v16; // [rsp+50h] [rbp-18h]

  v1 = a1;
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v13 = a1 + 128;
  v3 = Mtx_lock((_Mtx_t)(a1 + 128));
  try
  {
    if ( v3 )
      std::_Throw_C_error(v3);
    v14 = 1;
    if ( *(_DWORD *)(v1 + 36) == 1 )
      sub_18005F26C(v1, &v13);
    Mtx_unlock(v2);
  }
  catch ( const std::system_error *v12 )
  {
    v11 = (const char *)(*(__int64 (__fastcall **)(const std::system_error *))(*(_QWORD *)v12 + 8LL))(v12);
    sub_18001F2B4(&stru_1801EA368, 3, "Exception in Display Destructor, message=%s", v11);
    v1 = a1;
  }
  if ( *(_DWORD *)(v1 + 112) )
  {
    v15 = *(_Thrd_t *)(v1 + 104);
    v4 = Thrd_detach(&v15);
    if ( v4 )
    {
      std::_Throw_C_error(v4);
      __debugbreak();
    }
    v16 = 0LL;
    *(_OWORD *)(v1 + 104) = 0LL;
  }
  _Cnd_destroy_in_situ((_Cnd_t)(v1 + 352));
  _Cnd_destroy_in_situ((_Cnd_t)(v1 + 280));
  _Cnd_destroy_in_situ((_Cnd_t)(v1 + 208));
  _Mtx_destroy_in_situ((_Mtx_t)(v1 + 128));
  if ( *(_DWORD *)(v1 + 112) )
  {
    sub_180029930(v6, v5);
    JUMPOUT(0x18005EB22LL);
  }
  sub_18005E678(v1 + 88, v1 + 88, *(char **)(*(_QWORD *)(v1 + 88) + 8LL));
  result = sub_180010884(*(char **)(v1 + 88), 0x48uLL);
  v8 = *(_QWORD *)(v1 + 64);
  if ( v8 )
  {
    sub_180011138(v8, *(_QWORD *)(v1 + 72));
    result = sub_180010884(*(char **)(v1 + 64), (*(_QWORD *)(v1 + 80) - *(_QWORD *)(v1 + 64)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(v1 + 64) = 0LL;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_QWORD *)(v1 + 80) = 0LL;
  }
  v9 = *(_QWORD *)(v1 + 40);
  if ( v9 )
  {
    sub_1800126E8(v9, *(_QWORD *)(v1 + 48));
    result = sub_180010884(*(char **)(v1 + 40), (*(_QWORD *)(v1 + 56) - *(_QWORD *)(v1 + 40)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(v1 + 40) = 0LL;
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = 0LL;
  }
  v10 = *(volatile signed __int32 **)(v1 + 8);
  if ( v10 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return result;
}
