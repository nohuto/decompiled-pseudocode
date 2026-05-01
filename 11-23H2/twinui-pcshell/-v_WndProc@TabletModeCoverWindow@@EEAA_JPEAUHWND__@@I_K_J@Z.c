/*
 * XREFs of ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800F40E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x1800F41B8 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x1805D9F2C (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1805DA070 (-ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1805DA1D8 (-SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@PEAPEAX@Z @ 0x1805DF12C (-CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@P.c)
 */

LONG_PTR __fastcall TabletModeCoverWindow::v_WndProc(
        TabletModeCoverWindow *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  __int64 v5; // rsi
  void **v12; // r14
  HWND *v13; // rdi
  const struct _GUID *v14; // r9
  int Instance; // eax
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0LL;
  if ( a3 > 0x202 )
  {
    if ( a3 != 582 )
    {
      if ( a3 != 583 )
      {
        if ( a3 == 1025 )
        {
          TabletModeCoverWindow::InitializeInstance((TabletModeCoverWindow *)((char *)this - 96));
          return v5;
        }
        if ( a3 == 32769 && (a4 & 1) != 0 )
          TabletModeCoverWindow::ScaleFactorChanged((TabletModeCoverWindow *)((char *)this - 96));
        return DefWindowProcW(a2, a3, a4, lParam);
      }
LABEL_28:
      TabletModeCoverWindow::OnPointerUp((TabletModeCoverWindow *)((char *)this - 96));
      return v5;
    }
LABEL_15:
    *((_BYTE *)this + 124) = 1;
    return v5;
  }
  switch ( a3 )
  {
    case 0x202u:
      goto LABEL_28;
    case 0x10u:
      return v5;
    case 0x15u:
      TabletModeCoverWindow::SystemColorsChanged((TabletModeCoverWindow *)((char *)this - 96));
      break;
    case 0x21u:
      return 3LL;
    case 0x3Du:
      if ( lParam == -25 )
      {
        v12 = (void **)((char *)this + 88);
        if ( *((_QWORD *)this + 11) )
        {
          v13 = (HWND *)((char *)this + 8);
        }
        else
        {
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 11);
          v13 = (HWND *)((char *)this + 8);
          Instance = CoverWindowAcc_CreateInstance(*v13, L"TabletModeCoverWindow", 0LL, v14, v12);
          if ( Instance < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xCF,
              (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
              (const char *)(unsigned int)Instance,
              v16);
        }
        if ( *v12 )
          return UiaReturnRawElementProvider(*v13, a4, -25LL, (IRawElementProviderSimple *)*v12);
      }
      break;
    case 0x201u:
      goto LABEL_15;
  }
  return DefWindowProcW(a2, a3, a4, lParam);
}
