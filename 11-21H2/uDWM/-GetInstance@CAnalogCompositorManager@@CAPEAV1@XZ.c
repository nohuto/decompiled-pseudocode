/*
 * XREFs of ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180016C2C
 * Callers:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x1800085C8 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180016BA0 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180016D44 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18003D34C (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_::operator() @ 0x18009C7F0 (wistd--__function--__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_--operato.c)
 *     wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_::operator() @ 0x18009C810 (wistd--__function--__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_--operato.c)
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x18009CE90 (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerChangedEventArgs___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b46eae7c97fd0c0221a3f2c2069b78bc___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs___::Invoke @ 0x18009D340 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18009D340.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x18009D580 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x18009DC30 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 * Callees:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180054C44 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     atexit @ 0x1800605D8 (atexit.c)
 *     _Init_thread_footer @ 0x180060868 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800608D0 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
struct CAnalogCompositorManager *CAnalogCompositorManager::GetInstance(void)
{
  CAnalogCompositorManager *v1; // rcx

  if ( dword_1801462EC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801462EC);
    if ( dword_1801462EC == -1 )
    {
      CAnalogCompositorManager::CAnalogCompositorManager(v1);
      atexit(CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__);
      Init_thread_footer(&dword_1801462EC);
    }
  }
  return (struct CAnalogCompositorManager *)&qword_180142F20;
}
