/*
 * XREFs of ??0__abi_PointerToMemberWeakRefCapture@?1???$?0VXamlSnapAssistViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZ@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlSnapAssistViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZW4CallbackContext@Platform@@_N@Z@QEAA@0P86@E$AAAXXZ@Z @ 0x180610D0C
 * Callers:
 *     ??$?0VXamlSnapAssistViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZ@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlSnapAssistViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZW4CallbackContext@Platform@@_N@Z @ 0x1806104B8 (--$-0VXamlSnapAssistViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZ@LightDismis.c)
 * Callees:
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x180012F00 (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall `WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 WeakReference; // rdi

  *(_QWORD *)a1 = &`WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::LightDismissEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::`vftable';
  WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference((a2 + 152) & -(__int64)(a2 != 0));
  *(_QWORD *)(a1 + 8) = __abi_winrt_ptr_ctor(WeakReference);
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  *(_OWORD *)(a1 + 16) = *a3;
  return a1;
}
