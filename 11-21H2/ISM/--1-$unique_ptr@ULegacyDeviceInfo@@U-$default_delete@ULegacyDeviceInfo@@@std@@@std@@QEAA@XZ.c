/*
 * XREFs of ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x18009CC5C
 * Callers:
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$10 @ 0x18005566E (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$10.c)
 *     _Win32kInterop::ProcessPnpNotification_::_1_::dtor$3 @ 0x180058265 (_Win32kInterop--ProcessPnpNotification_--_1_--dtor$3.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$2 @ 0x1800A2DC5 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$2.c)
 *     _HeatDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x1800C7694 (_HeatDeviceCollection--OnDeviceAttach_--_1_--dtor$1.c)
 *     _HIDDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800CC04A (_HIDDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     _InjectionRawInputProvider::OnAttachDevice_::_1_::dtor$0 @ 0x1800CEE54 (_InjectionRawInputProvider--OnAttachDevice_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
