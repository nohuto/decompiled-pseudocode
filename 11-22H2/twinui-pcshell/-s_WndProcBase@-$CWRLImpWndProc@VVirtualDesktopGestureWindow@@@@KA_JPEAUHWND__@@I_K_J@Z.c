/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VVirtualDesktopGestureWindow@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180612EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@IEBAXXZ @ 0x18060F888 (-InternalAddRef@-$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@IEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall CWRLImpWndProc<VirtualDesktopGestureWindow>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR v8; // rdi
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v11; // rdi
  __int64 v12; // rsi
  LONG_PTR v13[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( Msg == 129 )
  {
    v8 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v8 + 8) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v8);
      return (**(__int64 (__fastcall ***)(LONG_PTR, HWND, _QWORD, WPARAM, LONG_PTR *))v8)(v8, hWnd, Msg, wParam, lParam);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
    v11 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    v13[0] = WindowLongPtrW;
    Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>::InternalAddRef(v13);
    v12 = (**(__int64 (__fastcall ***)(LONG_PTR, HWND, _QWORD, WPARAM, LONG_PTR *))v11)(v11, hWnd, Msg, wParam, lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v11 + 8) = 0LL;
    }
    (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)(v11 + 16) + 16LL))(v11 + 16);
    return v12;
  }
}
