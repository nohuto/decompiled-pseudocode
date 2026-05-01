/*
 * XREFs of ?CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1803ED13C
 * Callers:
 *     _lambda_1bf1d9a4c4dca45da51dc8b6becb9b00_::operator() @ 0x1803EAC54 (_lambda_1bf1d9a4c4dca45da51dc8b6becb9b00_--operator().c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x1803F457C (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1803F5190 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 * Callees:
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180095E64 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1805F5290 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall UwpWindowEventDispatcher::WindowIdChangedEventHelper::CompareNewValues(
        UwpWindowEventDispatcher::WindowIdChangedEventHelper *this,
        struct IUwpWindowWrapperInternal *a2)
{
  __int64 *v4; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  if ( !*(_BYTE *)this )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( *((_DWORD *)this + 6) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2) )
  {
    *((_BYTE *)this + 28) = 1;
    *((_BYTE *)this + 36) = *((_DWORD *)this + 8) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 424LL))(a2);
    *((_BYTE *)this + 44) = *((_DWORD *)this + 10) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 432LL))(a2);
    *((_BYTE *)this + 52) = *((_DWORD *)this + 12) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 440LL))(a2);
    *((_BYTE *)this + 60) = *((_DWORD *)this + 14) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 448LL))(a2);
    v4 = (__int64 *)(*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, _BYTE *))(*(_QWORD *)a2 + 264LL))(
                      a2,
                      v5);
    std::shared_ptr<ViewEventRegistration>::operator=((_QWORD *)this + 1, v4);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
}
