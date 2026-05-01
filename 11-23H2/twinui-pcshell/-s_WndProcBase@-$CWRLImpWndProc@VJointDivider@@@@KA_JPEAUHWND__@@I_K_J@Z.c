/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VJointDivider@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1805DAD80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VChromeManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1801402D4 (-InternalRelease@-$ComPtr@VChromeManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CWRLImpWndProc<JointDivider>::s_WndProcBase(HWND hWnd, UINT Msg, WPARAM wParam, LONG_PTR *lParam)
{
  LONG_PTR v8; // rdi
  LONG_PTR WindowLongPtrW; // rax
  volatile int *v11; // rdx
  LONG_PTR v12; // rdi
  __int64 v13; // rsi
  LONG_PTR v14[3]; // [rsp+30h] [rbp-18h] BYREF

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
    WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
    v12 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    v14[0] = WindowLongPtrW;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(WindowLongPtrW + 36), v11);
    v13 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v12 + 40))(
            v12 + 40,
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v12 + 48) = 0LL;
    }
    Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(v14);
    return v13;
  }
}
