/*
 * XREFs of ?BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18005A874
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@UndockedSearchAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18003DF00 (-OnClientWindowReadyForPresentationChanged@UndockedSearchAppExperienceManager@@AEAAJPEAUIClientW.c)
 *     ?TakeKeyboardFocus@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18005A850 (-TakeKeyboardFocus@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800BA2B8 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUIInspectable@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@PEAUIInspectable@@@Z @ 0x180461E54 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUIInspectable@@@-$EventSource@U-$ITypedE.c)
 *     ??$call@AEAV_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@@?$factory_cache_entry@UPropertyValue@Foundation@Windows@winrt@@UIPropertyValueStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@@Z @ 0x180462B60 (--$call@AEAV_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@@-$factory_cache_entry@UPropertyValue@Fou.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::BringToForeground(UndockedSearchAppExperienceManager *this)
{
  _DWORD *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // esi
  int v7; // eax
  __int64 v8; // rbx
  ULONG v9; // [rsp+20h] [rbp-60h]
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  unsigned int *v13; // [rsp+48h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v2 = *(_DWORD **)(wil::details::static_lazy<SearchAppLauncherLogging>::get(
                      this,
                      _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((int)v2, (int)&dword_18085480A, 0, 0, 2u, &v14);
  if ( *((_QWORD *)this + 8) )
  {
    v12 = 0LL;
    v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
           (char *)this + 64,
           &v12);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5D,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v3,
        v9);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 64LL))(v12);
      if ( v5 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
        return 0LL;
      }
      v11 = v5;
      v13 = &v11;
      _InterlockedIncrement64(&qword_18098DA28);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics> )
      {
        v10 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>
                                                                   + 88LL))(
               winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>,
               v11,
               &v10);
        if ( v7 < 0 )
          winrt::throw_hresult((unsigned int)v7);
        _InterlockedDecrement64(&qword_18098DA28);
      }
      else
      {
        _InterlockedDecrement64(&qword_18098DA28);
        winrt::impl::factory_cache_entry<winrt::Windows::Foundation::PropertyValue,winrt::Windows::Foundation::IPropertyValueStatics>::call<_lambda_32c8b3fea86403d9f21a612c35bffd2c_ &>(
          0LL,
          &v10,
          &v13);
      }
      v8 = v10;
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,IInspectable *>(
        (char *)this + 440,
        this,
        v10);
      if ( v8 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
      v4 = v5;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  }
  else
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB5B,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)0x8007139FLL,
      v9);
  }
  return v4;
}
