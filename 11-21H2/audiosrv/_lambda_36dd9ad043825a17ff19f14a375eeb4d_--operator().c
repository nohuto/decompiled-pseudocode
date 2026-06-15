/*
 * XREFs of _lambda_36dd9ad043825a17ff19f14a375eeb4d_::operator() @ 0x1800FB9D8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_36dd9ad043825a17ff19f14a375eeb4d__bool_ISaDeviceProxy___::_Do_call @ 0x1800FD530 (std--_Func_impl_no_alloc__lambda_36dd9ad043825a17ff19f14a375eeb4d__bool_ISaDeviceProxy___--_Do_c.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006251D (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qdd @ 0x1800DB85C (WPP_SF_qdd.c)
 *     WPP_SF_qDD @ 0x1800FDA08 (WPP_SF_qDD.c)
 *     WPP_SF_qdddd @ 0x1800FDA74 (WPP_SF_qdddd.c)
 *     WPP_SF_qii @ 0x1800FDAFC (WPP_SF_qii.c)
 */

char __fastcall lambda_36dd9ad043825a17ff19f14a375eeb4d_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rdi
  size_t v18; // rsi
  const void *v19; // rax
  __int64 v21; // rax
  int v22; // edi
  int v23; // esi
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-48h]
  int v29; // [rsp+28h] [rbp-40h]
  _BYTE v30[16]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*a1 + 32);
  if ( v4 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v30);
    v9 = *a1;
    v10 = *(_QWORD *)(*a1 + 48) - *v8;
    if ( !v10 )
      v10 = *(_QWORD *)(v9 + 56) - v8[1];
    if ( v10 )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v11 = *(_DWORD *)(v9 + 48);
        v12 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v30);
        WPP_SF_qDD(*((_QWORD *)WPP_GLOBAL_Control + 2), v13, v14, a2, *v12, v11);
      }
    }
    else
    {
      v15 = *(_DWORD *)(v9 + 8);
      if ( v15 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2) )
      {
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
        v17 = *a1;
        v18 = *(unsigned __int16 *)(*(_QWORD *)(*a1 + 16) + 16LL) + 18LL;
        if ( v18 == *(unsigned __int16 *)(v16 + 16) + 18LL )
        {
          v19 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          if ( !memcmp_0(*(const void **)(v17 + 16), v19, v18) )
            return 1;
        }
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v21 = *(_QWORD *)(v17 + 16);
          v22 = *(unsigned __int16 *)(v21 + 2);
          v23 = *(_DWORD *)(v21 + 4);
          v24 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) + 2);
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          WPP_SF_qdddd(*((_QWORD *)WPP_GLOBAL_Control + 2), v26, v27, a2, *(_DWORD *)(v25 + 4), v24, v23, v22);
        }
      }
      else if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v29 = v15;
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_963f2f7f04c53afe9709a1371902504b_Traceguids,
          a2,
          v28,
          v29);
      }
    }
  }
  else if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    WPP_SF_qii(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, a2, v5, v4);
  }
  return 0;
}
