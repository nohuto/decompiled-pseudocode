/*
 * XREFs of ??0__abi_PointerToMemberWeakRefCapture@?1???$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P86@E$AAAXPE$AAUIVirtualDesktop@Multitasking@4Internal@Windows@@1@ZW4CallbackContext@Platform@@_N@Z@QEAA@02@Z @ 0x1800127F0
 * Callers:
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUIVirtualDesktop@Multitasking@3Internal@Windows@@1@ZW4CallbackContext@Platform@@_N@Z @ 0x1800122A0 (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableSh.c)
 * Callees:
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x180012F00 (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall `WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 WeakReference; // rsi

  *a1 = &`WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::`vftable';
  v3 = __abi_winrt_cast_to(0LL, a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__);
  WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference(v3);
  a1[1] = __abi_winrt_ptr_ctor(WeakReference);
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  a1[2] = IXamlMultitaskingViewController::VirtualDesktopInvoked;
  return a1;
}
