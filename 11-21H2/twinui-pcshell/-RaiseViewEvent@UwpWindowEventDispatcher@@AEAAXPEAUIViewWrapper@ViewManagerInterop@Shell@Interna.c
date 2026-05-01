/*
 * XREFs of ?RaiseViewEvent@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1803F0058
 * Callers:
 *     ?FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrapperInternal@@@Z @ 0x1803ED6F8 (-FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrappe.c)
 *     ?OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1803EF430 (-OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInter.c)
 *     ?UwpWindowConsolidateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F6100 (-UwpWindowConsolidateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIConsolidateRequestedEventArgs.c)
 *     ?UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F6490 (-UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowL.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1803F00EC (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::RaiseViewEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  if ( *a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a4 + 8LL))(*a4);
  UwpWindowEventDispatcher::RaiseViewEventWithPropertySet(a1, a2, a3);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a4);
}
