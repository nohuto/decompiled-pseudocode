/*
 * XREFs of ?s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1805040C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HoldingTankWindowForwardedActivation@StartWindowTelemetry@@SAXXZ @ 0x180503964 (-HoldingTankWindowForwardedActivation@StartWindowTelemetry@@SAXXZ.c)
 */

LRESULT __fastcall FocusHoldingTank::s_WndProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
  LONG_PTR WindowLongPtrW; // rax
  __int64 v9; // rcx

  if ( a2 == 6 && (_WORD)a3 == 1 )
  {
    StartWindowTelemetry::HoldingTankWindowForwardedActivation((__int64)hWnd);
    WindowLongPtrW = GetWindowLongPtrW(hWnd, a2 - 27);
    if ( WindowLongPtrW )
    {
      v9 = *(_QWORD *)(WindowLongPtrW + 16);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 112LL))(v9);
    }
  }
  return DefWindowProcW(hWnd, a2, a3, a4);
}
