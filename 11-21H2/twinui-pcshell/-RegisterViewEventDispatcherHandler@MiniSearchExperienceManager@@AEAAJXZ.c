/*
 * XREFs of ?RegisterViewEventDispatcherHandler@MiniSearchExperienceManager@@AEAAJXZ @ 0x18005E620
 * Callers:
 *     ?RuntimeClassInitialize@MiniSearchExperienceManager@@QEAAJPEAUIServiceProvider@@V?$unique_ptr@VIUndockedMiniSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedMiniSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VIMiniSearchAppPositioner@@U?$default_delete@VIMiniSearchAppPositioner@@@wistd@@@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18005DF9C (-RuntimeClassInitialize@MiniSearchExperienceManager@@QEAAJPEAUIServiceProvider@@V-$unique_ptr@VI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVMiniSearchExperienceManager@@P85@EAAJI_K_J@_E@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVMiniSearchExperienceManager@@$$QEAP87@EAAJI_K_J@_E@Z @ 0x18005EA6C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_18005EA6C.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WeakReferenceCallback@VMiniSearchExperienceManager@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@4@PEAUIViewEventArgs@6784@@WRL@Microsoft@@YAJPEAVMiniSearchExperienceManager@@P82@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@4567@@ZPEAPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@7@@Z @ 0x1800B3840 (--$WeakReferenceCallback@VMiniSearchExperienceManager@@U-$ITypedEventHandler@PEAUIViewWrapper@Vi.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180161038 (-InternalRelease@-$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@W.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MiniSearchExperienceManager::RegisterViewEventDispatcherHandler(MiniSearchExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, GUID *, GUID *, char *); // rbx
  char *v4; // r14
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, _QWORD); // rbx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  int v18; // [rsp+20h] [rbp-29h]
  __int64 v19; // [rsp+30h] [rbp-19h] BYREF
  __int64 v20; // [rsp+38h] [rbp-11h] BYREF
  __int128 v21; // [rsp+40h] [rbp-9h] BYREF
  __int64 v22; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v23[8]; // [rsp+58h] [rbp+Fh] BYREF
  _OWORD v24[2]; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 4);
  v3 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v2 + 24LL);
  v4 = (char *)this + 112;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
  v5 = v3(v2, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9), v23);
    v22 = 0LL;
    *(_QWORD *)&v21 = MiniSearchExperienceManager::OnViewWrapperViewEvent;
    DWORD2(v21) = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    v7 = Microsoft::WRL::WeakReferenceCallback<MiniSearchExperienceManager,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>(
           this,
           &v21,
           &v22);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v9 = *(_QWORD *)v4;
      v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(**(_QWORD **)v4 + 48LL);
      *(_QWORD *)&v21 = winrt::hstring::c_str((winrt::hstring *)v23);
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v24, &v21);
      v18 = (_DWORD)this + 120;
      v7 = v10(v9, v22, *(_QWORD *)(v11 + 24), 0LL);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v19 = 0LL;
        *(_QWORD *)&v21 = MiniSearchExperienceManager::OnMessageHandler;
        DWORD2(v21) = 0;
        v24[0] = v21;
        *(_QWORD *)&v21 = this;
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::InternalRelease(&v19);
        v12 = ___MakeAndInitialize_VIImmersiveWindowMessageNotificationHandler_Shell_Internal_Windows__V1234_PEAVMiniSearchExperienceManager__P85_EAAJI_K_J__E_Details_WRL_Microsoft__YAJPEAPEAVIImmersiveWindowMessageNotificationHandler_Shell_Internal_Windows____QEAPEAVMiniSearchExperienceManager____QEAP87_EAAJI_K_J__E_Z(
                &v19,
                &v21,
                v24);
        v6 = v12;
        if ( v12 >= 0 )
        {
          v20 = 0LL;
          v13 = *((_QWORD *)this + 4);
          v14 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v13 + 24LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
          v15 = v14(v13, &IID_IImmersiveWindowMessageService, &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca, &v20);
          v6 = v15;
          if ( v15 >= 0 )
          {
            v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v20 + 24LL))(
                    v20,
                    1025LL,
                    (v19 + 8) & -(__int64)(v19 != 0),
                    (char *)this + 136);
            v6 = v15;
            if ( v15 >= 0 )
            {
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
              Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::InternalRelease(&v19);
              v6 = 0;
              goto LABEL_17;
            }
            v16 = 576LL;
          }
          else
          {
            v16 = 575LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
            (const char *)(unsigned int)v15,
            v18);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x23D,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
            (const char *)(unsigned int)v12,
            v18);
        }
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::InternalRelease(&v19);
LABEL_17:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
        winrt::handle_type<winrt::impl::hstring_traits>::close(v23);
        return v6;
      }
      v8 = 570LL;
    }
    else
    {
      v8 = 564LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      v18);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22F,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
    (const char *)(unsigned int)v5,
    v18);
  return v6;
}
