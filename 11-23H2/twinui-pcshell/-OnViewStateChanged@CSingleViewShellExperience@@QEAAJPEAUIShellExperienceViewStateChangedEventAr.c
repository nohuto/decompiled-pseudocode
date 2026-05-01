/*
 * XREFs of ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800DECE8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceDispatcher____Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_acf5f06f90f65198d6029ed629ca6feb___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::Invoke @ 0x1800DEB20 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800DEB20.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800B9E38 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800DD360 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x18010D090 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18010D4F4 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1807479CC (-OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnViewStateChanged(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, struct IUnknown **); // rbx
  int v7; // eax
  struct IUnknown *v8; // rdx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v13; // [rsp+38h] [rbp+10h] BYREF
  struct IUnknown *v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, int *))(*(_QWORD *)a2 + 56LL))(
         a2,
         &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x166,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4,
      v11);
    return v5;
  }
  v14 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, struct IUnknown **))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  v7 = v6(a2, &v14);
  v5 = v7;
  if ( v7 < 0 )
  {
    v10 = 361LL;
    goto LABEL_25;
  }
  if ( !v13 )
  {
    v7 = CSingleViewShellExperience::OnViewCreatedBase((int)this);
    v5 = v7;
    if ( v7 >= 0 )
      goto LABEL_9;
    v10 = 366LL;
    goto LABEL_25;
  }
  v8 = (struct IUnknown *)*((_QWORD *)this + 3);
  if ( !v8 || !(unsigned int)SHIsSameObject(v14, v8) )
    goto LABEL_9;
  if ( v13 == 1 )
  {
    v7 = CSingleViewShellExperience::OnViewPropertiesChangedBase(this, a2);
    v5 = v7;
    if ( v7 >= 0 )
      goto LABEL_9;
    v10 = 380LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7,
      v11);
    goto LABEL_10;
  }
  if ( v13 != 2 )
  {
    if ( v13 == 3 )
    {
      v7 = CSingleViewShellExperience::OnViewDestroyedBase(this);
      v5 = v7;
      if ( v7 >= 0 )
        goto LABEL_9;
      v10 = 388LL;
    }
    else
    {
      if ( v13 != 4 )
        goto LABEL_9;
      v7 = CSingleViewShellExperience::OnViewVisibilityRevokedChangedBase(this);
      v5 = v7;
      if ( v7 >= 0 )
        goto LABEL_9;
      v10 = 392LL;
    }
    goto LABEL_25;
  }
  v7 = CSingleViewShellExperience::OnEventQueued((HSTRING *)this, a2);
  v5 = v7;
  if ( v7 < 0 )
  {
    v10 = 384LL;
    goto LABEL_25;
  }
LABEL_9:
  v5 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  return v5;
}
