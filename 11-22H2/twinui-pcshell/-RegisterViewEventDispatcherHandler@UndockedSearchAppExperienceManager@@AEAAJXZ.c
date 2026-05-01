/*
 * XREFs of ?RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1801724D4
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B0B84 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@wistd@@@Z @ 0x1801716F8 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??$WeakReferenceCallback@VUndockedSearchAppExperienceManager@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@4@PEAUIViewEventArgs@6784@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@P82@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@4567@@ZPEAPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@7@@Z @ 0x1800FE048 (--$WeakReferenceCallback@VUndockedSearchAppExperienceManager@@U-$ITypedEventHandler@PEAUIViewWra.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVUndockedSearchAppExperienceManager@@P85@EAAJI_K_J@_E@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVUndockedSearchAppExperienceManager@@$$QEAP87@EAAJI_K_J@_E@Z @ 0x18017280C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@P.c)
 *     ?InternalRelease@?$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AA720 (-InternalRelease@-$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@W.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ @ 0x1801F045C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::RegisterViewEventDispatcherHandler(
        UndockedSearchAppExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, GUID *, GUID *, char *); // rbx
  char *v4; // r14
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, PVOID, _QWORD, char *); // rbx
  unsigned int v11; // r8d
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v20; // [rsp+30h] [rbp-19h] BYREF
  __int64 v21; // [rsp+38h] [rbp-11h] BYREF
  __int128 v22; // [rsp+40h] [rbp-9h] BYREF
  __int64 v23; // [rsp+50h] [rbp+7h] BYREF
  winrt::impl *v24; // [rsp+58h] [rbp+Fh] BYREF
  HSTRING_HEADER v25; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 7);
  v3 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v2 + 24LL);
  v4 = (char *)this + 248;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 31);
  v5 = v3(v2, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, winrt::impl **))(**((_QWORD **)this + 12) + 8LL))(*((_QWORD *)this + 12), &v24);
    v23 = 0LL;
    *(_QWORD *)&v22 = UndockedSearchAppExperienceManager::OnViewWrapperViewEvent;
    DWORD2(v22) = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
    v7 = Microsoft::WRL::WeakReferenceCallback<UndockedSearchAppExperienceManager,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>(
           (__int64)this,
           &v22,
           &v23);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v9 = *(_QWORD *)v4;
      v10 = *(__int64 (__fastcall **)(__int64, __int64, PVOID, _QWORD, char *))(**(_QWORD **)v4 + 48LL);
      *(_QWORD *)&v22 = winrt::hstring::c_str((winrt::hstring *)&v24);
      v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, (const WCHAR **)&v22, v11);
      v7 = v10(v9, v23, v12[1].Reserved.Reserved1, 0LL, (char *)this + 256);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v20 = 0LL;
        *(_QWORD *)&v22 = UndockedSearchAppExperienceManager::OnMessageHandler;
        DWORD2(v22) = 0;
        *(_OWORD *)&v25.Reserved.Reserved1 = v22;
        *(_QWORD *)&v22 = this;
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::InternalRelease(&v20);
        v13 = ___MakeAndInitialize_VIImmersiveWindowMessageNotificationHandler_Shell_Internal_Windows__V1234_PEAVUndockedSearchAppExperienceManager__P85_EAAJI_K_J__E_Details_WRL_Microsoft__YAJPEAPEAVIImmersiveWindowMessageNotificationHandler_Shell_Internal_Windows____QEAPEAVUndockedSearchAppExperienceManager____QEAP87_EAAJI_K_J__E_Z(
                &v20,
                &v22,
                &v25);
        v6 = v13;
        if ( v13 >= 0 )
        {
          v21 = 0LL;
          v14 = *((_QWORD *)this + 7);
          v15 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v14 + 24LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
          v16 = v15(v14, &IID_IImmersiveWindowMessageService, &GUID_fc62ce95_8396_401a_b74f_88df0d75e112, &v21);
          v6 = v16;
          if ( v16 >= 0 )
          {
            v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v21 + 24LL))(
                    v21,
                    1025LL,
                    (v20 + 8) & -(__int64)(v20 != 0),
                    (char *)this + 272);
            v6 = v16;
            if ( v16 >= 0 )
            {
              v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v21 + 24LL))(
                      v21,
                      1026LL,
                      (v20 + 8) & -(__int64)(v20 != 0),
                      (char *)this + 276);
              v6 = v16;
              if ( v16 >= 0 )
              {
                if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53852258>::GetImpl'::`2'::impl) )
                  winrt::hstring::operator=((volatile signed __int32 **)this + 24, &v24, v18);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
                Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::InternalRelease(&v20);
                v6 = 0;
                goto LABEL_21;
              }
              v17 = 1759LL;
            }
            else
            {
              v17 = 1758LL;
            }
          }
          else
          {
            v17 = 1757LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v16);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6DB,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v13);
        }
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::InternalRelease(&v20);
LABEL_21:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v24);
        return v6;
      }
      v8 = 1752LL;
    }
    else
    {
      v8 = 1747LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6CE,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
