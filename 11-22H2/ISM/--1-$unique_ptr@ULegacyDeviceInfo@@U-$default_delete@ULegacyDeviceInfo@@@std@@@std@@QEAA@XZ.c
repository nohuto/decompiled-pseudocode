/*
 * XREFs of ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800C5900
 * Callers:
 *     _Win32kInterop::ProcessDeviceArrival_::_1_::dtor$0 @ 0x18008245F (_Win32kInterop--ProcessDeviceArrival_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$10 @ 0x1800828DB (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$10.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$2 @ 0x1800CB5A2 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$2.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800EFE60 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     _HeatDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x1800EFF8C (_HeatDeviceCollection--OnDeviceAttach_--_1_--dtor$1.c)
 *     _HIDDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800F45B6 (_HIDDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     ?OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800F7334 (-OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 *     _InjectionRawInputProvider::OnAttachDevice_::_1_::dtor$0 @ 0x1800F7499 (_InjectionRawInputProvider--OnAttachDevice_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
