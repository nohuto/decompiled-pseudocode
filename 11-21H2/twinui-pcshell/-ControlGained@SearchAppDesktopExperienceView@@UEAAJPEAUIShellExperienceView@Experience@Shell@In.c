/*
 * XREFs of ?ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1803995A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180357390 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIShellExperi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1803573E8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_1803573E8.c)
 *     ??4?$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@@Z @ 0x1803984CC (--4-$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ?EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180399D6C (-EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039C8AC (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18039DDC0 (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::ControlGained(__int64 a1, __int64 a2)
{
  __int64 *v4; // r14
  _OWORD *v5; // rax
  _OWORD *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  _OWORD *v10; // rax
  _OWORD *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebp
  int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int128 v17; // [rsp+30h] [rbp-28h]
  __int128 v18; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (__int64 *)(a1 + 152);
  if ( *(_QWORD *)(a1 + 152) )
    return 0LL;
  SearchAppDesktopExperienceView::SetExplicitDismissEnabled((SearchAppDesktopExperienceView *)a1, 0);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceView>::operator=(v4, a2);
  LODWORD(v16) = 0;
  *(_QWORD *)&v17 = a1;
  *((_QWORD *)&v17 + 1) = SearchAppDesktopExperienceView::OnViewChanged;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>((__int64)v5);
    v6[1] = v17;
    *((_QWORD *)v6 + 4) = v16;
    *(_QWORD *)v6 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>::*)(Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>,_lambda_931beb00e51d342d82439ed6609a09c4_,-1,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64))(*(_QWORD *)*v4 + 152LL))(*v4, v6, a1 + 160);
  v8 = v7;
  if ( v7 >= 0 )
  {
    LODWORD(v16) = 0;
    *(_QWORD *)&v18 = a1;
    *((_QWORD *)&v18 + 1) = SearchAppDesktopExperienceView::OnViewEvent;
    v10 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>((__int64)v10);
      v11[1] = v18;
      *((_QWORD *)v11 + 4) = v16;
      *(_QWORD *)v11 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>::*)(Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,_lambda_41b5fd1e85b5fa293ba99f420d7ce4cb_,-1,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>::`vftable';
    }
    else
    {
      v11 = 0LL;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64))(*(_QWORD *)*v4 + 168LL))(*v4, v11, a1 + 168);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x192,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v12);
      if ( v11 )
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v6 )
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v6 + 16LL))(v6);
      return v13;
    }
    SearchAppDesktopExperienceView::OnViewPropertiesChanging((SearchAppDesktopExperienceView *)a1);
    v14 = SearchAppDesktopExperienceView::EnsureInputHostManager((SearchAppDesktopExperienceView *)a1);
    v13 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x198,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v14);
      if ( v11 )
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v6 )
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v6 + 16LL))(v6);
      return v13;
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 112) + 24LL))(
            *(_QWORD *)(a1 + 112),
            a1 + 48,
            a1 + 228);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x199,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v15);
    if ( v11 )
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v6 )
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x190,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v7);
  if ( v6 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
