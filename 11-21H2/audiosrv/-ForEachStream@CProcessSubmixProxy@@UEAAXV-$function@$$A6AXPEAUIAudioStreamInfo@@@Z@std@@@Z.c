/*
 * XREFs of ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180028520
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ @ 0x18000A9C0 (-_Tidy@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixProxy::ForEachStream(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall ***v5)(_QWORD, _BYTE *); // rcx
  _BYTE *v6; // rax
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  _BYTE *v9; // rcx
  __int64 v10; // rdx
  _BYTE *v11; // rdx
  __int64 v12; // rdx
  _BYTE *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v18[56]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE *v19; // [rsp+68h] [rbp-70h]
  _BYTE v20[56]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE *v21; // [rsp+A8h] [rbp-30h]

  v2 = a1 + 128;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v5 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  v6 = 0LL;
  v17 = v2;
  v19 = 0LL;
  if ( v5 )
  {
    v6 = (_BYTE *)(**v5)(v5, v18);
    v19 = v6;
  }
  v7 = *(__int64 **)(a1 + 176);
  v8 = *(__int64 **)(a1 + 168);
  if ( v8 != v7 )
  {
    while ( 1 )
    {
      v16 = *v8;
      if ( !v6 )
        break;
      (*(void (__fastcall **)(_BYTE *, __int64 *))(*(_QWORD *)v6 + 16LL))(v6, &v16);
      v6 = v19;
      if ( ++v8 == v7 )
        goto LABEL_6;
    }
    std::_Xbad_function_call();
    __debugbreak();
    LOBYTE(v15) = v14 != v18;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v14 + 32LL))(v14, v15);
    v9 = v21;
    goto LABEL_21;
  }
LABEL_6:
  v9 = 0LL;
  v21 = 0LL;
  if ( !v6 )
    goto LABEL_12;
  if ( v6 != v18 )
  {
    v9 = v6;
    v21 = v6;
LABEL_21:
    v19 = 0LL;
    goto LABEL_12;
  }
  v9 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v6 + 8LL))(v6, v20);
  v21 = v9;
  if ( v19 )
  {
    if ( v19 == v18 )
      v10 = 0LL;
    else
      LOBYTE(v10) = 1;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v19 + 32LL))(v19, v10);
    v9 = v21;
    v19 = 0LL;
  }
LABEL_12:
  if ( v9 )
  {
    v11 = v20;
    if ( v9 == v20 )
      v11 = 0LL;
    else
      LOBYTE(v11) = 1;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v9 + 32LL))(v9, v11);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
  return std::_Func_class<void,IAudioStreamInfo *>::_Tidy(a2, v12);
}
