/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::_)(Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_69bbf18e8e0f03bc10764316da6b6053___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::Invoke @ 0x180196CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800495FC (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::___Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_69bbf18e8e0f03bc10764316da6b6053___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 48LL))(a3, *(_QWORD *)(a1 + 16) + 640LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = CToastCenterExperienceManager::PositionView(*(CToastCenterExperienceManager **)(a1 + 16));
    v5 = v4;
    if ( v4 >= 0 )
      return 0;
    v6 = 665LL;
  }
  else
  {
    v6 = 664LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  return v5;
}
