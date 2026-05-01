/*
 * XREFs of ??1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ @ 0x1803EAB7C
 * Callers:
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1803EEF80 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 *     _UwpWindowEventDispatcher::OnShellHookMessage_::_1_::dtor$2 @ 0x1803EF383 (_UwpWindowEventDispatcher--OnShellHookMessage_--_1_--dtor$2.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x1803F457C (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivationRequested_::_1_::dtor$14 @ 0x1803F4FCB (_UwpWindowEventDispatcher--UwpWindowActivationRequested_--_1_--dtor$14.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1803F5190 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     _UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor$7 @ 0x1803F5CD2 (_UwpWindowEventDispatcher--UwpWindowAdded_--_1_--dtor$7.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1805F5290 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall UwpWindowEventDispatcher::WindowIdChangedEventHelper::~WindowIdChangedEventHelper(
        UwpWindowEventDispatcher::WindowIdChangedEventHelper *this)
{
  std::_Ref_count_base *v2; // rcx

  if ( *(_BYTE *)this )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( *((_BYTE *)this + 28) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( *((_BYTE *)this + 36) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( *((_BYTE *)this + 44) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( *((_BYTE *)this + 52) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( *((_BYTE *)this + 60) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
