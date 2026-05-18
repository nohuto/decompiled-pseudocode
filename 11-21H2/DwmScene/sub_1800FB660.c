/*
 * XREFs of sub_1800FB660 @ 0x1800FB660
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180029710 @ 0x180029710 (sub_180029710.c)
 *     sub_1800FAEA8 @ 0x1800FAEA8 (sub_1800FAEA8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800FB660(__int64 a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  char v6; // bp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 *v13; // rcx
  __int64 v14; // rdx
  unsigned int v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h]

  v18 = a2;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v17 = a1 + 8;
  v5 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v5 )
    std::_Throw_C_error(v5);
  v16 = ++*(_DWORD *)(a1 + 88);
  v6 = *(_BYTE *)(a1 + 112);
  if ( !v6 )
  {
    v7 = sub_1800FAEA8((__int64 *)(a1 + 96), (int *)&v16);
    v8 = v7;
    if ( v7 != a2 )
    {
      v9 = *(__int64 **)(v7 + 56);
      if ( v9 )
      {
        v10 = *v9;
        LOBYTE(v10) = v9 != (__int64 *)v7;
        (*(void (__fastcall **)(__int64 *, __int64))(*v9 + 32))(v9, v10);
        *(_QWORD *)(v8 + 56) = 0LL;
      }
      sub_180029710(v8, a2);
    }
  }
  Mtx_unlock(v4);
  if ( v6 )
  {
    v11 = *(_QWORD *)(a2 + 56);
    if ( !v11 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v16;
  v13 = *(__int64 **)(a2 + 56);
  if ( v13 )
  {
    v14 = *v13;
    LOBYTE(v14) = v13 != (__int64 *)a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v13 + 32))(v13, v14);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v12;
}
