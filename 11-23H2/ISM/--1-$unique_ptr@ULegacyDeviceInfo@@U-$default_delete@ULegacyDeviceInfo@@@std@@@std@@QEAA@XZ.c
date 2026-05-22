/*
 * XREFs of ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800B41F8
 * Callers:
 *     _Win32kInterop::ProcessDeviceArrival_::_1_::dtor$0 @ 0x18006EA73 (_Win32kInterop--ProcessDeviceArrival_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$10 @ 0x18006F0C6 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$10.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$2 @ 0x1800BA7C2 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$2.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E0F00 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     _HeatDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x1800E102C (_HeatDeviceCollection--OnDeviceAttach_--_1_--dtor$1.c)
 *     _HIDDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800E5656 (_HIDDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     ?OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800E83B4 (-OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 *     _InjectionRawInputProvider::OnAttachDevice_::_1_::dtor$0 @ 0x1800E8519 (_InjectionRawInputProvider--OnAttachDevice_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
