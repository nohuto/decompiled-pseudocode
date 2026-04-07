/*
 * XREFs of ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18002D8C0
 * Callers:
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x180002EF8 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x180008C4C (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetCurrentStyle(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ebp
  int v4; // esi
  __int64 v5; // rcx
  int SystemMetricsForDpi; // eax
  int v7; // r15d
  int v8; // r14d
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v13; // dl
  unsigned int v14; // ecx
  char v15; // dl
  char v17; // dl

  v2 = 1;
  if ( (*(_BYTE *)(a1 + 664) & 8) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 120);
    v4 = *(_DWORD *)(a1 + 116);
    if ( !*(_DWORD *)(a1 + 64)
      && !*(_DWORD *)(a1 + 72)
      && !*(_DWORD *)(a1 + 68)
      && !*(_DWORD *)(a1 + 76)
      && AreAllMarginsZero((const struct _MARGINS *)(a1 + 96))
      && !v17 )
    {
      goto LABEL_30;
    }
    if ( (v4 & 0x80u) != 0 )
      v5 = 53LL;
    else
      v5 = 31LL;
    SystemMetricsForDpi = GetSystemMetricsForDpi(v5, *(unsigned int *)(a1 + 348));
    v7 = *(_DWORD *)(a1 + 72);
    v8 = SystemMetricsForDpi;
    if ( (v4 & 0xC00000) == 0xC00000 )
    {
      v9 = *(_DWORD *)(a1 + 412);
      if ( (v9 & 1) == 0 && v7 >= v8 )
        v2 = 9;
      if ( (v4 & 0x80000) != 0 )
      {
        if ( (v9 & 0x10000) == 0 )
        {
          v2 |= 0x400u;
          if ( (*(_DWORD *)(a1 + 124) & 0x200) == 0 )
            v2 |= 0x4000u;
        }
        if ( (v3 & 0x80u) != 0 )
        {
          v12 = 2;
          goto LABEL_29;
        }
        v10 = *(_DWORD *)(a1 + 132);
        if ( (v10 < 8 || v10 > 11)
          && (*(char *)(a1 + 668) >= 0
           || GetPropW(*(HWND *)(a1 + 40), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow")) )
        {
          v11 = *(_DWORD *)(a1 + 412);
          if ( (v11 & 2) == 0 && v7 >= v8 )
            v2 |= 0x10000u;
          if ( (v11 & 4) == 0 && v7 >= v8 )
            v2 |= 0x80u;
          if ( (v11 & 0x10000) == 0 )
          {
            if ( (v4 & 0x30000) != 0 )
            {
              if ( (v4 & 0x20000) != 0 )
                v2 |= 0x1300u;
              if ( (v4 & 0x10000) != 0 )
                v2 |= 0x2300u;
            }
            else if ( (v3 & 0x400) != 0 )
            {
              v2 |= 0x8800u;
            }
          }
        }
      }
    }
    v12 = 4;
LABEL_29:
    v2 |= v12;
LABEL_30:
    if ( (v4 & 0x1000000) != 0 )
      v2 |= 0x20u;
    if ( (v4 & 0x20000000) != 0 )
      v2 |= 0x40000u;
    v13 = *(_BYTE *)(a1 + 664);
    v14 = v2 | 0x40;
    if ( (v13 & 2) == 0 )
      v14 = v2;
    if ( (v3 & 0x400000) != 0 || v13 < 0 )
    {
      v15 = 1;
      v14 |= 0x20000u;
    }
    else
    {
      v15 = 0;
    }
    if ( ((v3 & 0x2000) != 0) != v15 )
      v14 |= 0x80000u;
    if ( (v3 & 0x1000) != 0 )
      v14 |= 0x400000u;
    return v14;
  }
  if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) >= 4 && (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return 2097153;
  return v2;
}
