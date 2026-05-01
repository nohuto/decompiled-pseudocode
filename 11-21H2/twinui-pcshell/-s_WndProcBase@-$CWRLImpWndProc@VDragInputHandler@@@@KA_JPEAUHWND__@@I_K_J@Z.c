/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VDragInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1804D0400
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDragInputHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1804D0170 (-InternalRelease@-$ComPtr@VDragInputHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CWRLImpWndProc<DragInputHandler>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR v8; // rdi
  volatile int *WindowLongPtrW; // rax
  volatile int *v11; // rdx
  volatile int *v12; // rdi
  __int64 v13; // rsi
  volatile int *v14; // [rsp+30h] [rbp-18h] BYREF

  if ( Msg == 129 )
  {
    v8 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v8 + 24) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v8);
      return (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v8 + 16))(
               v8 + 16,
               hWnd,
               Msg,
               wParam,
               lParam);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    WindowLongPtrW = (volatile int *)GetWindowLongPtrW(hWnd, 0);
    v12 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    v14 = WindowLongPtrW;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(WindowLongPtrW + 3), v11);
    v13 = (**((__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))v12 + 2))(
            (__int64)(v12 + 4),
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *((_QWORD *)v12 + 3) = 0LL;
    }
    Microsoft::WRL::ComPtr<DragInputHandler>::InternalRelease(&v14);
    return v13;
  }
}
