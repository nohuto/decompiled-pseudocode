/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::_)(Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_b66b1f45d3c83dcb8ce197914a9d1fcc___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::Invoke @ 0x180436650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438748 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::___Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_b66b1f45d3c83dcb8ce197914a9d1fcc___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 48LL))(a3, *(_QWORD *)(a1 + 16) + 656LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = CToastCenterExperienceManager::PositionView(*(CToastCenterExperienceManager **)(a1 + 16));
    v5 = v4;
    if ( v4 >= 0 )
      return 0;
    v6 = 676LL;
  }
  else
  {
    v6 = 675LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  return v5;
}
