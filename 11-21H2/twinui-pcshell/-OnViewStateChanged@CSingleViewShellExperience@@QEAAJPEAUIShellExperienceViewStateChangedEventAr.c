/*
 * XREFs of ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180075ADC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceDispatcher____Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_e3bd702fa1af73124fc67e69a57335af___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::Invoke @ 0x180075A20 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180075A20.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180075FB0 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800A120C (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1800A20AC (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800A3348 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1805F1678 (-OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::OnViewStateChanged(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct IUnknown *v7; // rdx
  struct IUnknown *v8; // rcx
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
      (void *)0x16A,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4,
      v11);
    return v5;
  }
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, struct IUnknown **))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v14);
  v5 = v6;
  if ( v6 < 0 )
  {
    v10 = 365LL;
  }
  else if ( v13 )
  {
    v7 = (struct IUnknown *)*((_QWORD *)this + 3);
    if ( !v7 || !(unsigned int)SHIsSameObject(v14, v7) )
      goto LABEL_9;
    switch ( v13 )
    {
      case 1:
        v6 = CSingleViewShellExperience::OnViewPropertiesChangedBase(this, a2);
        v5 = v6;
        if ( v6 >= 0 )
          goto LABEL_9;
        v10 = 384LL;
        break;
      case 2:
        v6 = CSingleViewShellExperience::OnEventQueued(this, a2);
        v5 = v6;
        if ( v6 >= 0 )
        {
LABEL_9:
          v5 = 0;
          goto LABEL_10;
        }
        v10 = 388LL;
        break;
      case 3:
        v6 = CSingleViewShellExperience::OnViewDestroyedBase(this);
        v5 = v6;
        if ( v6 >= 0 )
          goto LABEL_9;
        v10 = 392LL;
        break;
      case 4:
        v6 = CSingleViewShellExperience::OnViewVisibilityRevokedChangedBase(this);
        v5 = v6;
        if ( v6 >= 0 )
          goto LABEL_9;
        v10 = 396LL;
        break;
      default:
        goto LABEL_9;
    }
  }
  else
  {
    v6 = CSingleViewShellExperience::OnViewCreatedBase(this);
    v5 = v6;
    if ( v6 >= 0 )
      goto LABEL_9;
    v10 = 370LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v6,
    v11);
LABEL_10:
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  }
  return v5;
}
