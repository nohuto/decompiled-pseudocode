/*
 * XREFs of ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x18011AD50
 * Callers:
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x180117970 (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x18011A140 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$call@P6A?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindowStatics@23456@@Z@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEBUIWindowStatics@45672@@Z@Z @ 0x1800490E0 (--$call@P6A-AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindo.c)
 *     ?Start@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800497C4 (-Start@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180053678 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWin.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x180070B6C (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x1800715D4 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ??$as@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800AD8DC (--$as@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype.c)
 *     ?UniversalPropertyChanged@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelWatcher@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1800AFE5C (-UniversalPropertyChanged@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversa.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18011AD14 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z @ 0x18011B714 (-MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall MPCTarget::MPCTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // r14
  const char *v8; // r9
  __int64 *v9; // rbx
  wil::details::in1diag3 *v10; // rcx
  const char *v11; // r9
  __int64 v12; // rax
  int v13; // ecx
  unsigned int *v14; // rdi
  char *CompositionInputQueue; // rax
  const char *v16; // r9
  __int64 v17; // rax
  char *v18; // rax
  __int64 v19; // rcx
  ISMTracing *v20; // rcx
  wil::details::in1diag3 *v22; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+28h] [rbp-A0h] BYREF
  char *v24; // [rsp+30h] [rbp-98h] BYREF
  void (__fastcall *v25[2])(__int64, __int64 *); // [rsp+38h] [rbp-90h] BYREF
  __int64 v26; // [rsp+48h] [rbp-80h]
  __int64 v27; // [rsp+50h] [rbp-78h] BYREF
  char v28; // [rsp+58h] [rbp-70h]
  __int128 v29; // [rsp+60h] [rbp-68h]
  _BYTE v30[24]; // [rsp+70h] [rbp-58h]
  __int64 v31; // [rsp+88h] [rbp-40h] BYREF
  _DWORD v32[4]; // [rsp+90h] [rbp-38h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v7 = a1;
  v26 = a1;
  *(_QWORD *)(a1 + 8) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = &MPCTarget::`vftable'{for `IMPCTarget'};
  *(_QWORD *)(a1 + 8) = &MPCTarget::`vftable'{for `RefCountedObject'};
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
    (_QWORD *)(a1 + 24),
    a2);
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_DWORD *)(v7 + 44) = a3;
  *(_DWORD *)(v7 + 56) = a4;
  v9 = (__int64 *)(v7 + 64);
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_BYTE *)(v7 + 40) = a3 == 1;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      v8);
  InputSite::GetIdForNamespace(a2, (__int64)&v27, 1);
  if ( v28 )
  {
    *(_QWORD *)(v7 + 48) = v27;
  }
  else
  {
    *(_QWORD *)(v7 + 48) = 0LL;
    if ( !*(_BYTE *)(a2 + 480) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
        v11);
    v12 = 0LL;
    v13 = 1;
    do
      v32[v12++] = v13++;
    while ( v12 < 4 );
    v14 = v32;
    while ( 1 )
    {
      CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue((LegacyInputSinkData *)(a2 + 48), *v14);
      if ( *(_DWORD *)CompositionInputQueue == 2 || *(_DWORD *)CompositionInputQueue == 3 )
        break;
      if ( ++v14 == (unsigned int *)&v33 )
        goto LABEL_19;
    }
    *(_QWORD *)(v7 + 48) = *((unsigned int *)CompositionInputQueue + 2);
LABEL_19:
    v10 = retaddr;
    if ( !*(_QWORD *)(v7 + 48) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x41,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
        v16);
  }
  if ( *(_DWORD *)(v7 + 44) == 6 )
  {
    try
    {
      v25[1] = (void (__fastcall *)(__int64, __int64 *))&qword_1802786C8;
      _InterlockedAdd64(&qword_1802786C8, 1uLL);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics> )
      {
        winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::CreateWatcher(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>,
          &v22);
        _InterlockedDecrement64(&qword_1802786C8);
      }
      else
      {
        _InterlockedDecrement64(&qword_1802786C8);
        v25[0] = (void (__fastcall *)(__int64, __int64 *))_lambda_ae55d4909240e1fdeaaab3ab1260b561_::_lambda_invoker_cdecl_;
        winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::call<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher (*)(winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics const &)>(
          (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))v10,
          (__int64)&v22,
          v25);
      }
      if ( v9 == (__int64 *)&v22 )
      {
        v17 = (__int64)v22;
      }
      else
      {
        if ( *v9 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)(v7 + 64));
        v10 = v22;
        v17 = 0LL;
        v22 = 0LL;
        *v9 = (__int64)v10;
      }
      if ( v17 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v22);
      if ( *v9 )
      {
        winrt::impl::as<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
          &v23,
          (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v9);
        *(_QWORD *)&v29 = &MPCTarget::OnUniversalPropertyChanged;
        DWORD2(v29) = 0;
        *(_QWORD *)v30 = v7;
        *(_OWORD *)&v30[8] = v29;
        v18 = (char *)operator new(0x28uLL);
        *(_OWORD *)(v18 + 8) = *(_OWORD *)v30;
        *((_QWORD *)v18 + 3) = *(_QWORD *)&v30[16];
        _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
        *((_DWORD *)v18 + 8) = 1;
        *(_QWORD *)v18 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs>,_lambda_f7189cc794088eeaf33bed95e453010f_>::`vftable';
        v24 = v18;
        *(_QWORD *)(v7 + 72) = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher>::UniversalPropertyChanged(
                                  &v23,
                                  &v31,
                                  &v24);
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v24);
        winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Start((_QWORD *)(v7 + 64));
        if ( v23 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
      }
    }
    catch ( ... )
    {
      v7 = v26;
    }
  }
  if ( ISMTracing::IsEnabled((__int64)v10) )
  {
    wil::details::static_lazy<ISMTracing>::get(v19, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCTarget_Create_(v20, (struct IMPCTarget *)v7);
  }
  return v7;
}
