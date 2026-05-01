/*
 * XREFs of ?AltTabHookProc@AltTabWindowHook@@CA_JH_K_J@Z @ 0x18060E7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetController@AltTabWindowHookData@@QEAAPE$AAVXamlAltTabViewController@@XZ @ 0x18060E924 (-GetController@AltTabWindowHookData@@QEAAPE$AAVXamlAltTabViewController@@XZ.c)
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x18060F014 (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall AltTabWindowHook::AltTabHookProc(int code, WPARAM wParam, int *lParam)
{
  int v6; // r9d
  __int64 Controller; // rdi
  __int64 v8; // rbx

  v6 = *lParam;
  if ( (((_DWORD)wParam - 257) & 0xFFFFFFFB) == 0
    && (v6 == 18 || (unsigned int)(v6 - 164) <= 1)
    && (lParam[2] & 0x20) == 0 )
  {
    Controller = AltTabWindowHookData::GetController(AltTabWindowHook::s_altTabHook);
    v8 = __abi_winrt_ptr_ctor(Controller);
    if ( Controller )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)Controller + 16LL))(Controller);
    if ( v8 )
    {
      XamlAltTabViewController::OnAltKeyUp(v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return CallNextHookEx(0LL, code, wParam, (LPARAM)lParam);
}
