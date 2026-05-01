/*
 * XREFs of ?GetCurrentActiveQuietHoursProfileAllowedApps@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z @ 0x18032F6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18010988C (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x18032B5A4 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?GetView@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@345@@Z @ 0x180332670 (-GetView@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collection.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x180333A00 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 *     ?InternalRelease@?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180333BD4 (-InternalRelease@-$ComPtr@V-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING_.c)
 *     ?reset@?$unique_any_array_ptr@PEAGU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U?$unique_any_array_deleter@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@2@@wil@@QEAAXXZ @ 0x18033D848 (-reset@-$unique_any_array_ptr@PEAGU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@U-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::GetCurrentActiveQuietHoursProfileAllowedApps(__int64 a1, __int64 a2)
{
  int v3; // ebx
  HRESULT v4; // eax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, char *, __int64 *); // rdi
  void *v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rbx
  HSTRING_HEADER *v18; // rax
  __int64 v19; // r9
  int View; // eax
  __int64 v21; // rcx
  LPVOID v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-19h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-11h] BYREF
  __int64 v26; // [rsp+40h] [rbp-9h] BYREF
  __int64 v27; // [rsp+48h] [rbp-1h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp+7h]
  void *v29; // [rsp+58h] [rbp+Fh] BYREF
  HSTRING_HEADER v30; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( !a2 )
  {
    v3 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF2B,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)0x80004003LL);
    return (unsigned int)v3;
  }
  ppv = 0LL;
  v4 = CoCreateInstance(
         &GUID_f53321fa_34f8_4b7f_b9a3_361877cb94cf,
         0LL,
         4u,
         &GUID_6bff4732_81ec_4ffb_ae67_b6c1bc29631f,
         &ppv);
  v3 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF33,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_34;
  }
  v5 = *(_QWORD *)ppv;
  v29 = 0LL;
  v6 = (*(__int64 (__fastcall **)(LPVOID, void **))(v5 + 96))(ppv, &v29);
  v3 = v6;
  if ( v6 >= 0 )
  {
    v26 = 0LL;
    v7 = (*(__int64 (__fastcall **)(LPVOID, void *, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v29, &v26);
    v3 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF39,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_31;
    }
    v27 = 0LL;
    v28 = 0LL;
    v8 = v26;
    v9 = *(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v26 + 88LL);
    wil::unique_any_array_ptr<unsigned short *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::reset(&v27);
    v30.Reserved.Reserved1 = &v27;
    *(_DWORD *)&v30.Reserved.Reserved2[8] = 0;
    v30.Reserved.Reserved2[12] = 1;
    v3 = v9(v8, &v30.Reserved.Reserved2[8], &v27);
    if ( v30.Reserved.Reserved2[12] )
      *((_QWORD *)v30.Reserved.Reserved1 + 1) = *(unsigned int *)&v30.Reserved.Reserved2[8];
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF3C,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
LABEL_30:
      wil::unique_any_array_ptr<unsigned short *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::reset(&v27);
LABEL_31:
      v21 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      goto LABEL_33;
    }
    v24 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(&v24);
    v24 = 0LL;
    v3 = 0;
    v10 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10
      && (v12 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>((__int64)v10)) != 0 )
    {
      v24 = v12;
    }
    else
    {
      v3 = -2147024882;
    }
    if ( v3 >= 0 )
    {
      v15 = 0;
      if ( v28 )
      {
        v16 = 0LL;
        while ( 1 )
        {
          v17 = v24;
          v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)(v27 + 8 * v16), v11);
          LOBYTE(v19) = 1;
          View = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
                   v17,
                   0LL,
                   v18[1].Reserved.Reserved1,
                   v19);
          v3 = View;
          if ( View < 0 )
            break;
          v16 = ++v15;
          if ( v15 >= v28 )
            goto LABEL_23;
        }
        v14 = 3907LL;
      }
      else
      {
LABEL_23:
        View = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetView(
                 v24,
                 a2);
        v3 = View;
        if ( View >= 0 )
        {
          v3 = 0;
          goto LABEL_29;
        }
        v14 = 3909LL;
      }
      v13 = (unsigned int)View;
    }
    else
    {
      v13 = (unsigned int)v3;
      v14 = 3903LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v13);
LABEL_29:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(&v24);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF36,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_33:
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v29);
LABEL_34:
  v22 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return (unsigned int)v3;
}
