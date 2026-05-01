/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceDispatcher____Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_acf5f06f90f65198d6029ed629ca6feb___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::Invoke @ 0x1800DEB20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1800DEB90 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800DECE8 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceDispatcher____Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::___Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_acf5f06f90f65198d6029ed629ca6feb___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::Invoke(
        __int64 a1,
        struct IInspectable *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a3)
{
  __int64 v4; // rbx
  int v5; // eax
  int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v4 = a1 + 16;
  ExperienceManagerUtils::AsStrong<IInspectable>(&v10, (Microsoft::WRL::WeakRef *)(a1 + 16));
  if ( v10 )
  {
    v5 = CSingleViewShellExperience::OnViewStateChanged(*(CSingleViewShellExperience **)(v4 + 8), a3);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v5,
        v8);
  }
  else
  {
    v6 = 0;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  if ( v6 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v6);
  return (unsigned int)v6;
}
