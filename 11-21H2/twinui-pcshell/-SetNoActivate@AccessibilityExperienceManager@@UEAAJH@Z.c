/*
 * XREFs of ?SetNoActivate@AccessibilityExperienceManager@@UEAAJH@Z @ 0x180488380
 * Callers:
 *     ?OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180487F20 (-OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1804881D0 (-OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x180488704 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityExperienceManager::SetNoActivate(AccessibilityExperienceManager *this, int a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // ebx
  LONG WindowLongW; // r8d
  unsigned int v8; // eax
  LONG v9; // r8d
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = *((_QWORD *)this + 29);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    v6 = v5(v4, &v11);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 24LL))(v11, &hWnd);
      if ( v6 >= 0 )
      {
        WindowLongW = GetWindowLongW(hWnd, -20);
        v8 = WindowLongW & 0xF7FFFFFF;
        v9 = WindowLongW | 0x8000000;
        if ( !a2 )
          v9 = v8;
        *((_DWORD *)this + 79) = a2 != 0 ? 0x8000000 : 0;
        SetWindowLongW(hWnd, -20, v9);
      }
    }
  }
  else
  {
    v6 = -2147467259;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return (unsigned int)v6;
}
