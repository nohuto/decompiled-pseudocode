/*
 * XREFs of ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x1800560C0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18003A654 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18003B630 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180020544 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 */

void CTopLevelWindow::ReadSystemColors(void)
{
  void *Theme; // rax
  void *v1; // rax
  COLORREF v2; // edx
  COLORREF v3; // edx
  COLORREF pColor; // [rsp+40h] [rbp+8h] BYREF
  COLORREF SysColor; // [rsp+48h] [rbp+10h] BYREF

  Theme = (void *)CDesktopManager::GetTheme(0);
  if ( GetThemeColor(Theme, 46, 1, 3803, &pColor) < 0
    || (v1 = (void *)CDesktopManager::GetTheme(0), GetThemeColor(v1, 46, 2, 3803, &SysColor) < 0) )
  {
    pColor = GetSysColor(9);
    SysColor = GetSysColor(19);
  }
  v2 = pColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 16) + 1832LL) = pColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 32) + 1832LL) = v2;
  *(_DWORD *)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 1832LL) = v2;
  v3 = SysColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 24) + 1832LL) = SysColor;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 40) + 1832LL) = v3;
  *(_DWORD *)(*(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8) + 1832LL) = v3;
}
