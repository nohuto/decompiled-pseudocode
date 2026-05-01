/*
 * XREFs of ?Invoke@?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Foundation@Windows@@UE$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180789640
 * Callers:
 *     ?__abi_Windows_Foundation_?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Foundation@Windows@@234@UE$AAAJPE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18078A830 (-__abi_Windows_Foundation_-$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewM.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::Foundation::TypedEventHandler<Platform::Object __gc *,WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel __gc *>::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &Windows::Foundation::TypedEventHandler<Platform::Object __gc *,WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel __gc *>::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x180789696LL);
  }
  return result;
}
