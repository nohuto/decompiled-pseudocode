/*
 * XREFs of ??0__abi_PointerToMemberWeakRefCapture@?1???$?0VXamlAltTabViewController@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z@KeyEventHandler@Input@Xaml@UI@Windows@@QE$AAA@PE$AAVXamlAltTabViewController@@P86@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@2345@@ZW4CallbackContext@8@_N@Z@QEAA@03@Z @ 0x180778C50
 * Callers:
 *     ??$?0VXamlAltTabViewController@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z@KeyEventHandler@Input@Xaml@UI@Windows@@QE$AAA@PE$AAVXamlAltTabViewController@@P85@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@1234@@ZW4CallbackContext@7@_N@Z @ 0x180777E54 (--$-0VXamlAltTabViewController@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@.c)
 * Callees:
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1800794CC (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall `Windows::UI::Xaml::Input::KeyEventHandler::KeyEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 WeakReference; // rdi

  *(_QWORD *)a1 = &`Windows::UI::Xaml::Input::KeyEventHandler::KeyEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::`vftable';
  WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference((a2 + 152) & -(__int64)(a2 != 0));
  *(_QWORD *)(a1 + 8) = __abi_winrt_ptr_ctor(WeakReference);
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  *(_OWORD *)(a1 + 16) = *a3;
  return a1;
}
