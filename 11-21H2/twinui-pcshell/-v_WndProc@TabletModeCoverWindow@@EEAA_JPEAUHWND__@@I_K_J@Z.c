/*
 * XREFs of ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180069140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x180069214 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x18052155C (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1805216A0 (-ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x180521808 (-SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@PEAPEAX@Z @ 0x1805267EC (-CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@P.c)
 */

LONG_PTR __fastcall TabletModeCoverWindow::v_WndProc(HWND *this, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
  __int64 v5; // rsi
  IRawElementProviderSimple **v12; // r14
  const struct _GUID *v13; // r9
  int Instance; // eax
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0LL;
  if ( a3 > 0x202 )
  {
    if ( a3 == 582 )
      goto LABEL_17;
    if ( a3 != 583 )
    {
      if ( a3 == 1025 )
      {
        TabletModeCoverWindow::InitializeInstance((TabletModeCoverWindow *)(this - 12));
        return v5;
      }
      if ( a3 == 32769 && (a4 & 1) != 0 )
        TabletModeCoverWindow::ScaleFactorChanged((TabletModeCoverWindow *)(this - 12));
      return DefWindowProcW(a2, a3, a4, lParam);
    }
LABEL_28:
    TabletModeCoverWindow::OnPointerUp((TabletModeCoverWindow *)(this - 12));
    return v5;
  }
  if ( a3 == 514 )
    goto LABEL_28;
  if ( a3 != 16 )
  {
    switch ( a3 )
    {
      case 0x15u:
        TabletModeCoverWindow::SystemColorsChanged((TabletModeCoverWindow *)(this - 12));
        return DefWindowProcW(a2, a3, a4, lParam);
      case 0x21u:
        return 3LL;
      case 0x3Du:
        if ( lParam == -25 )
        {
          v12 = (IRawElementProviderSimple **)(this + 11);
          if ( this[11] )
            return UiaReturnRawElementProvider(this[1], a4, -25LL, *v12);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 11);
          Instance = CoverWindowAcc_CreateInstance(this[1], L"TabletModeCoverWindow", 0LL, v13, (void **)v12);
          if ( Instance < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xCF,
              (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
              (const char *)(unsigned int)Instance,
              v15);
          if ( *v12 )
            return UiaReturnRawElementProvider(this[1], a4, -25LL, *v12);
        }
        return DefWindowProcW(a2, a3, a4, lParam);
    }
    if ( a3 != 513 )
      return DefWindowProcW(a2, a3, a4, lParam);
LABEL_17:
    *((_BYTE *)this + 124) = 1;
  }
  return v5;
}
