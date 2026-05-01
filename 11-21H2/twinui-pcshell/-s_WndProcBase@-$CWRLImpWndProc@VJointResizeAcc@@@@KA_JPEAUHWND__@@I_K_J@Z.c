/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VJointResizeAcc@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1801592A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall CWRLImpWndProc<JointResizeAcc>::s_WndProcBase(HWND hWnd, UINT Msg, WPARAM wParam, LONG_PTR *lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v9; // rdi
  __int64 v10; // rsi
  LONG_PTR v12; // rdi
  LONG_PTR v13[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( Msg == 129 )
  {
    v12 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v12 + 40) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v12);
      return (**(__int64 (__fastcall ***)(__int64, HWND, __int64, WPARAM, LONG_PTR *))(v12 + 32))(
               v12 + 32,
               hWnd,
               129LL,
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
    v9 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    v13[0] = WindowLongPtrW;
    (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)WindowLongPtrW + 8LL))(WindowLongPtrW);
    v10 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v9 + 32))(
            v9 + 32,
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v9 + 40) = 0LL;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
    return v10;
  }
}
