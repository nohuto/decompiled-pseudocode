/*
 * XREFs of ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x180037EEC
 * Callers:
 *     ?NumberOfItems@TaskViewFrame@@UEAAIXZ @ 0x180037D60 (-NumberOfItems@TaskViewFrame@@UEAAIXZ.c)
 *     ?NumberOfVirtualDesktops@TaskViewFrame@@UEAAIXZ @ 0x180037E40 (-NumberOfVirtualDesktops@TaskViewFrame@@UEAAIXZ.c)
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::operator() @ 0x18042FDDC (_lambda_baaea9c5454d5217874bd274f7881db0_--operator().c)
 *     ?GetVirtualDesktopIndex@XamlAllUpViewHost@@AEAAJPE$AAVVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x1804344C4 (-GetVirtualDesktopIndex@XamlAllUpViewHost@@AEAAJPE$AAVVirtualDesktopBarElementViewModel@Switcher.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::Interop::IBindableVector::Size::get(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 56LL))(a1, &v3);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    JUMPOUT(0x180037F21LL);
  }
  return v3;
}
