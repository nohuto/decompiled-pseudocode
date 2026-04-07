/*
 * XREFs of ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x180027200
 * Callers:
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x180013CF8 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180026780 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x180015708 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetCurrentStyle(__int64 a1)
{
  unsigned int v2; // ebx
  int v4; // esi
  int v5; // r15d
  __int64 v6; // rcx
  int SystemMetricsForDpi; // eax
  int v8; // r14d
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  char v14; // dl
  unsigned int v15; // ecx
  char v16; // dl
  char v17; // dl
  int v18; // ecx
  int v19; // ecx

  v2 = 1;
  if ( (*(_BYTE *)(a1 + 672) & 8) == 0 )
  {
    if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) >= 4 && (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return 2097153;
    return v2;
  }
  v4 = *(_DWORD *)(a1 + 116);
  v5 = *(_DWORD *)(a1 + 120);
  if ( *(_DWORD *)(a1 + 64)
    || *(_DWORD *)(a1 + 72)
    || *(_DWORD *)(a1 + 68)
    || *(_DWORD *)(a1 + 76)
    || !AreAllMarginsZero((const struct _MARGINS *)(a1 + 96))
    || v17 )
  {
    if ( (v4 & 0x80u) != 0 )
      v6 = 53LL;
    else
      v6 = 31LL;
    SystemMetricsForDpi = GetSystemMetricsForDpi(v6, *(unsigned int *)(a1 + 348));
    v8 = *(_DWORD *)(a1 + 72);
    v9 = SystemMetricsForDpi;
    if ( (v4 & 0xC00000) == 0xC00000 )
    {
      v10 = *(_DWORD *)(a1 + 412);
      if ( (v10 & 1) == 0 && v8 >= v9 )
        v2 = 9;
      if ( (v4 & 0x80000) != 0 )
      {
        if ( (v10 & 0x10000) == 0 )
        {
          v2 |= 0x400u;
          if ( (*(_DWORD *)(a1 + 124) & 0x200) == 0 )
            v2 |= 0x4000u;
        }
        if ( (v5 & 0x80u) != 0 )
        {
          v13 = 2;
          goto LABEL_31;
        }
        v11 = *(_DWORD *)(a1 + 132);
        if ( (v11 < 8 || (v18 = v11 - 8) != 0 && (v19 = v18 - 1) != 0 && (unsigned int)(v19 - 1) >= 2)
          && (*(char *)(a1 + 676) >= 0
           || GetPropW(*(HWND *)(a1 + 40), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow")) )
        {
          v12 = *(_DWORD *)(a1 + 412);
          if ( (v12 & 2) == 0 && v8 >= v9 )
            v2 |= 0x10000u;
          if ( (v12 & 4) == 0 && v8 >= v9 )
            v2 |= 0x80u;
          if ( (v12 & 0x10000) == 0 )
          {
            if ( (v4 & 0x30000) != 0 )
            {
              if ( (v4 & 0x20000) != 0 )
                v2 |= 0x1300u;
              if ( (v4 & 0x10000) != 0 )
                v2 |= 0x2300u;
            }
            else if ( (v5 & 0x400) != 0 )
            {
              v2 |= 0x8800u;
            }
          }
        }
      }
    }
    v13 = 4;
LABEL_31:
    v2 |= v13;
  }
  if ( (v4 & 0x1000000) != 0 )
    v2 |= 0x20u;
  if ( (v4 & 0x20000000) != 0 )
    v2 |= 0x40000u;
  v14 = *(_BYTE *)(a1 + 672);
  v15 = v2 | 0x40;
  if ( (v14 & 2) == 0 )
    v15 = v2;
  if ( (v5 & 0x400000) != 0 || v14 < 0 )
  {
    v16 = 1;
    v15 |= 0x20000u;
  }
  else
  {
    v16 = 0;
  }
  if ( ((v5 & 0x2000) != 0) != v16 )
    v15 |= 0x80000u;
  if ( (v5 & 0x1000) != 0 )
    v15 |= 0x400000u;
  return v15;
}
