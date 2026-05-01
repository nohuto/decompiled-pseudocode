/*
 * XREFs of ?RegisterForEvents@JointResize@@AEAAJXZ @ 0x18013875C
 * Callers:
 *     ?SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F7170 (-SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x1805E40F0 (-OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UHitTestPartNotifyEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18013ACB8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_18013ACB8.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@2345@@Foundation@Windows@@V_lambda_0329606a7f023ea7effaf9e0739dfef7_@@$0?0PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@UArrangedWindowJointResizeCompletedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@2345@@Foundation@Windows@@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@UArrangedWindowJointResizeCompletedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_0329606a7f023ea7effaf9e0739dfef7_@@@Z @ 0x18013C318 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@Window_ea_18013C318.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVArrangedWindowResizeStartedEventArgs@2345@@Foundation@Windows@@V_lambda_5d89a6149937432e38c6bb167a19c241_@@$0?0PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIArrangedWindowResizeStartedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@U?$AggregateType@PEAVArrangedWindowResizeStartedEventArgs@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIArrangedWindowResizeStartedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_5d89a6149937432e38c6bb167a19c241_@@@Z @ 0x18013C398 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@Window_ea_18013C398.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall JointResize::RegisterForEvents(JointResize *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *v4; // rax
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // r14d
  void *v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  _OWORD *v11; // rax
  _OWORD *v12; // rbx
  int v13; // eax
  __int128 v15; // [rsp+20h] [rbp-30h]
  _BYTE v16[24]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 19) + 72LL))(
         *((_QWORD *)this + 19),
         ((unsigned __int64)this + 88) & -(__int64)(this != 0LL));
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x387,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  else
  {
    *(_QWORD *)&v15 = JointResize::OnArrangedWindowResizeStarted;
    DWORD2(v15) = 0;
    *(_QWORD *)v16 = this;
    *(_OWORD *)&v16[8] = v15;
    v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
      v5 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowResizeStartedEventArgs *,Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *>>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowResizeStartedEventArgs *>,_lambda_5d89a6149937432e38c6bb167a19c241_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowResizeStartedEventArgs *>,_lambda_5d89a6149937432e38c6bb167a19c241_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *>(
             v4,
             v16);
    else
      v5 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 20) + 64LL))(
           *((_QWORD *)this + 20),
           v5,
           (char *)this + 448);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38B,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v6);
    }
    else
    {
      *(_QWORD *)&v15 = &JointResize::OnArrangedWindowJointResizeCompleted;
      DWORD2(v15) = 0;
      *(_QWORD *)v16 = this;
      *(_OWORD *)&v16[8] = v15;
      v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
        v9 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs>,_lambda_0329606a7f023ea7effaf9e0739dfef7_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs>,_lambda_0329606a7f023ea7effaf9e0739dfef7_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs>(
               v8,
               v16);
      else
        v9 = 0LL;
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 20) + 80LL))(
              *((_QWORD *)this + 20),
              v9,
              (char *)this + 456);
      v7 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x38F,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v10);
      }
      else
      {
        *(_QWORD *)&v15 = JointResize::OnHitTestPartNotifyEvent;
        DWORD2(v15) = 0;
        *(_QWORD *)v16 = this;
        *(_OWORD *)&v16[8] = v15;
        v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
        v12 = v11;
        if ( v11 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>>(v11);
          v12[1] = *(_OWORD *)v16;
          *((_QWORD *)v12 + 4) = *(_QWORD *)&v16[16];
          *(_QWORD *)v12 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>,_lambda_6b37e6f6ffb8617f7a72125e0299ac07_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>::`vftable';
        }
        else
        {
          v12 = 0LL;
        }
        v13 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 20) + 96LL))(
                *((_QWORD *)this + 20),
                v12,
                (char *)this + 464);
        v7 = v13;
        if ( v13 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x393,
            (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)(unsigned int)v13);
        else
          v7 = 0;
        if ( v12 )
          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    return v7;
  }
}
