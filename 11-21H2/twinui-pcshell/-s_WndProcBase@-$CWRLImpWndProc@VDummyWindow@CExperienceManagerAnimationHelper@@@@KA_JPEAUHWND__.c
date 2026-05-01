/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VDummyWindow@CExperienceManagerAnimationHelper@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180128550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CWRLImpWndProc<CExperienceManagerAnimationHelper::DummyWindow>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v9; // rbx
  signed __int32 i; // eax
  __int64 v11; // rsi
  signed __int32 v12; // edx
  LONG_PTR v14; // rbx

  if ( Msg == 129 )
  {
    v14 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v14 + 24) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v14);
      return (**(__int64 (__fastcall ***)(__int64, HWND, __int64, WPARAM, LONG_PTR *))(v14 + 16))(
               v14 + 16,
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
    for ( i = *(_DWORD *)(WindowLongPtrW + 12);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 12), i + 1, i);
          i = *(_DWORD *)(v9 + 12) )
    {
      ;
    }
    v11 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v9 + 16))(
            v9 + 16,
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v9 + 24) = 0LL;
    }
    do
      v12 = *(_DWORD *)(v9 + 12);
    while ( v12 != 0x7FFFFFFF && v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 12), v12 - 1, v12) );
    if ( v12 == 1 )
    {
      (*(void (__fastcall **)(LONG_PTR, __int64))(*(_QWORD *)v9 + 40LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    return v11;
  }
}
