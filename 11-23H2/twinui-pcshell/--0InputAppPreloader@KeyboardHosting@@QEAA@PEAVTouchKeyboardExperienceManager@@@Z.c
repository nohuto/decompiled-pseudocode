/*
 * XREFs of ??0InputAppPreloader@KeyboardHosting@@QEAA@PEAVTouchKeyboardExperienceManager@@@Z @ 0x1800ABB14
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@23456@@Foundation@Windows@@V_lambda_f2653944a1f8e8e1a0d5ae701a288a85_@@$0?0PEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_f2653944a1f8e8e1a0d5ae701a288a85_@@@Z @ 0x1800ABCAC (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@In.c)
 *     ??$GetActivationFactory@UICoreKeyboardInputProfileManagerStatics@Core@Text@Internal@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UICoreKeyboardInputProfileManagerStatics@Core@Text@Internal@UI@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800ABD24 (--$GetActivationFactory@UICoreKeyboardInputProfileManagerStatics@Core@Text@Internal@UI@Windows@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
KeyboardHosting::InputAppPreloader *__fastcall KeyboardHosting::InputAppPreloader::InputAppPreloader(
        KeyboardHosting::InputAppPreloader *this,
        struct TouchKeyboardExperienceManager *a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbp
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64, char *); // rbp
  __int64 v12; // rbx
  void *v13; // rax
  int v14; // eax
  int v16[2]; // [rsp+20h] [rbp-38h] BYREF
  int (*v17)(KeyboardHosting::InputAppPreloader *__hidden, struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *); // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  *(_QWORD *)this = a2;
  v5 = (__int64 *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x70,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
      a4);
  wil::GetActivationFactory<Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerStatics>(&v20);
  v6 = v20;
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 48LL);
  v8 = *v5;
  *v5 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = v7(v6, v5);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
      (const char *)(unsigned int)v9,
      v16[0]);
  v10 = *v5;
  v11 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v10 + 64LL);
  *(_QWORD *)v16 = this;
  v17 = KeyboardHosting::InputAppPreloader::OnEnabledInputProfilesChanged;
  v12 = 0LL;
  v13 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = (__int64)v13;
  if ( v13 )
  {
    v12 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>,_lambda_f2653944a1f8e8e1a0d5ae701a288a85_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>,_lambda_f2653944a1f8e8e1a0d5ae701a288a85_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>(
            v13,
            v16);
    v19 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v19);
  v19 = v12;
  v14 = v11(v10, v12, (char *)this + 16);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x77,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
      (const char *)(unsigned int)v14,
      v16[0]);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  return this;
}
