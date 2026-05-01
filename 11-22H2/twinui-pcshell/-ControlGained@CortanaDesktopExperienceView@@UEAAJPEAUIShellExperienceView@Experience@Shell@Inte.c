/*
 * XREFs of ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x180481E00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180429708 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIShellExperi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180429760 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_180429760.c)
 *     ??4?$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@@Z @ 0x180476F00 (--4-$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ?EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180482714 (-EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180485CF4 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x180487804 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ControlGained(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r14
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

  CortanaDesktopExperienceView::SetExplicitDimissEnabled((CortanaDesktopExperienceView *)a1, 0);
  v4 = (_QWORD *)(a1 + 168);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceView>::operator=(
    (__int64 *)(a1 + 168),
    a2);
  LODWORD(v16) = 0;
  *(_QWORD *)&v17 = a1;
  *((_QWORD *)&v17 + 1) = CortanaDesktopExperienceView::OnViewChanged;
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
  v7 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, __int64))(*(_QWORD *)*v4 + 152LL))(*v4, v6, a1 + 176);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CD,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v7);
    if ( v6 )
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v6 + 16LL))(v6);
    return v8;
  }
  LODWORD(v16) = 0;
  *(_QWORD *)&v18 = a1;
  *((_QWORD *)&v18 + 1) = CortanaDesktopExperienceView::OnViewEvent;
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
  v12 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, __int64))(*(_QWORD *)*v4 + 168LL))(*v4, v11, a1 + 184);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CF,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v12);
    if ( v11 )
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v6 )
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v6 + 16LL))(v6);
    return v13;
  }
  CortanaDesktopExperienceView::OnViewPropertiesChanging((CortanaDesktopExperienceView *)a1);
  v14 = CortanaDesktopExperienceView::EnsureInputHostManager((CortanaDesktopExperienceView *)a1);
  v13 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v14);
    if ( v11 )
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v6 )
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v6 + 16LL))(v6);
    return v13;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 128) + 24LL))(
          *(_QWORD *)(a1 + 128),
          (a1 + 56) & -(__int64)(a1 != 0),
          a1 + 264);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v15);
  if ( v11 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v6 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
