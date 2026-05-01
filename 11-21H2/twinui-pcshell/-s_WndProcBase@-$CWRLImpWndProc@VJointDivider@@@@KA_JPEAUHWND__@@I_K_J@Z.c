/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VJointDivider@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1805223D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VChromeManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C9D0 (-InternalRelease@-$ComPtr@VChromeManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CWRLImpWndProc<JointDivider>::s_WndProcBase(HWND hWnd, UINT Msg, WPARAM wParam, LONG_PTR *lParam)
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
      *(_QWORD *)(v8 + 48) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v8);
      return (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v8 + 40))(
               v8 + 40,
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
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(WindowLongPtrW + 9), v11);
    v13 = (**((__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))v12 + 5))(
            (__int64)(v12 + 10),
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *((_QWORD *)v12 + 6) = 0LL;
    }
    Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(&v14);
    return v13;
  }
}
