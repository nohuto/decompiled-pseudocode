/*
 * XREFs of ?get@KeyStatus@IKeyRoutedEventArgs@Input@Xaml@UI@Windows@@UE$AAA?AVCorePhysicalKeyStatus@Core@56@XZ @ 0x18077B3D4
 * Callers:
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z @ 0x180779F60 (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Inp.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::Input::IKeyRoutedEventArgs::KeyStatus::get(__int64 a1, __int64 a2)
{
  int v3; // eax

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  if ( v3 < 0 )
  {
    __abi_WinRTraiseException(v3);
    __debugbreak();
  }
  return a2;
}
