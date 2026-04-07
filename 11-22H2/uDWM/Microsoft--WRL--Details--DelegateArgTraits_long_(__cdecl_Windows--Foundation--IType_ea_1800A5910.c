/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs___Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs____Microsoft::WRL::FtmBase___lambda_4f72ee05bd0124e78352738e10539777___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs___::Invoke @ 0x1800A5910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800A5278 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs___Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs_____::___Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs____Microsoft::WRL::FtmBase___lambda_4f72ee05bd0124e78352738e10539777___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(a2) = 1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 56LL))(a3, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x118,
      (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v4);
  }
  return v4;
}
