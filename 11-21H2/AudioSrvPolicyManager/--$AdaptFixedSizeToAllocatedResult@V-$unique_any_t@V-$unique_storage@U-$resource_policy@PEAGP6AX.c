/*
 * XREFs of ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1800412C4
 * Callers:
 *     ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180042AB0 (-GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEA.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180007834 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??$__invoke@P6AXPEAX@ZAEAPEAG@wistd@@YAX$$QEAP6AXPEAX@ZAEAPEAG@Z @ 0x1800144E4 (--$__invoke@P6AXPEAX@ZAEAPEAG@wistd@@YAX$$QEAP6AXPEAX@ZAEAPEAG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002AD28 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002B774 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEAA@XZ @ 0x1800415BC (--1-$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
        void **a1,
        __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  const char *v6; // r9
  void (__stdcall *v7)(LPVOID); // rax
  void **v8; // rax
  void *v9; // rbx
  void (__stdcall *v10)(LPVOID); // rsi
  void **v11; // rax
  __int64 v12; // rcx
  int v13; // r14d
  void (__stdcall *v15)(LPVOID); // [rsp+30h] [rbp-D0h] BYREF
  void *v16; // [rsp+38h] [rbp-C8h] BYREF
  void (__stdcall *v17)(LPVOID); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  void *v19; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  char v21[512]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v16 = 0LL;
  *(_WORD *)v21 = 0;
  v20 = 0LL;
  v17 = (void (__stdcall *)(LPVOID))&v20;
  v18 = 256LL;
  v15 = (void (__stdcall *)(LPVOID))v21;
  v4 = *(_QWORD *)(a2 + 112);
  if ( !v4 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, void (__stdcall **)(LPVOID), __int64 *, void (__stdcall **)(LPVOID)))(*(_QWORD *)v4 + 32LL))(
         v4,
         &v15,
         &v18,
         &v17);
  if ( v5 < 0 )
    goto LABEL_19;
  v7 = (void (__stdcall *)(LPVOID))v20;
  if ( v20 > 0x100 )
  {
    while ( 1 )
    {
      v10 = v7;
      v11 = (void **)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                       &v15,
                       0LL,
                       (unsigned __int64)v7 - 1,
                       v6);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
        &v16,
        v11);
      if ( v15 )
      {
        v18 = (__int64)v15;
        v17 = CoTaskMemFree;
        wistd::__invoke<void (*)(void *),unsigned short * &>((__int64 (__fastcall **)(_QWORD))&v17, &v18);
      }
      v9 = v16;
      if ( !v16 )
        break;
      v19 = v16;
      v18 = (__int64)&v20;
      v17 = v10;
      v12 = *(_QWORD *)(a2 + 112);
      if ( !v12 )
        wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
      v13 = (*(__int64 (__fastcall **)(__int64, void **, void (__stdcall **)(LPVOID), __int64 *))(*(_QWORD *)v12 + 32LL))(
              v12,
              &v19,
              &v17,
              &v18);
      if ( v13 < 0 )
      {
        v19 = v9;
        v15 = CoTaskMemFree;
        wistd::__invoke<void (*)(void *),unsigned short * &>((__int64 (__fastcall **)(_QWORD))&v15, &v19);
        v5 = v13;
        goto LABEL_19;
      }
      v7 = (void (__stdcall *)(LPVOID))v20;
      if ( v20 <= (unsigned __int64)v10 )
        goto LABEL_14;
    }
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
      (const char *)0x8007000ELL);
    goto LABEL_19;
  }
  v8 = (void **)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                  &v15,
                  v21,
                  v20 - 1,
                  v6);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    &v16,
    v8);
  if ( v15 )
  {
    v18 = (__int64)v15;
    v17 = CoTaskMemFree;
    wistd::__invoke<void (*)(void *),unsigned short * &>((__int64 (__fastcall **)(_QWORD))&v17, &v18);
  }
  v9 = v16;
  if ( !v16 )
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
      (const char *)0x8007000ELL);
LABEL_19:
    wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::~function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(a2);
    return (unsigned int)v5;
  }
LABEL_14:
  v16 = v9;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    a1,
    &v16);
  if ( v16 )
  {
    v19 = v16;
    v15 = CoTaskMemFree;
    wistd::__invoke<void (*)(void *),unsigned short * &>((__int64 (__fastcall **)(_QWORD))&v15, &v19);
  }
  wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::~function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(a2);
  return 0LL;
}
