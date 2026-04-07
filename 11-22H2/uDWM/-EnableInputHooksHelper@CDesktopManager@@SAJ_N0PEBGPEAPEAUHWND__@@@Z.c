/*
 * XREFs of ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x1800B45E4
 * Callers:
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x1800B45E4 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800B48B4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x1800B45E4 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z @ 0x1800B5A90 (-SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z.c)
 */

__int64 __fastcall CDesktopManager::EnableInputHooksHelper(char a1, char a2, const unsigned __int16 *a3, HWND *a4)
{
  unsigned int v6; // esi
  HWND ForegroundWindow; // r15
  int v8; // r8d
  int v9; // r9d
  HWND WindowInBand; // rax
  HWND v11; // r14
  unsigned int v12; // eax
  int v13; // r9d
  bool v14; // r8
  HCURSOR CursorW; // rax
  HWND v16; // rcx
  bool v17; // r8
  __int128 v19; // [rsp+70h] [rbp-38h]

  v6 = 0;
  if ( CDesktopManager::s_pDesktopManagerInstance )
  {
    if ( a1 )
    {
      ForegroundWindow = GetForegroundWindow();
      SendNotifyMessageW(ForegroundWindow, 0x1Fu, 0LL, 0LL);
      if ( a2 )
      {
        HIDWORD(v19) = 0;
        v8 = 0;
        DWORD1(v19) = 0;
        v9 = 0;
      }
      else
      {
        v19 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 388);
        v8 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 396);
        v9 = v19;
      }
      WindowInBand = (HWND)CreateWindowInBand(
                             136LL,
                             L"LivePreview",
                             0LL,
                             0x80000000LL,
                             v9,
                             DWORD1(v19),
                             v8,
                             HIDWORD(v19),
                             0LL,
                             0LL,
                             g_hInstance,
                             0LL,
                             2);
      v11 = WindowInBand;
      if ( !WindowInBand )
      {
        v6 = -2147024890;
        v12 = 2952;
        v13 = -2147024890;
LABEL_11:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180128C80, 2LL, v13, v12);
        CDesktopManager::EnableInputHooksHelper(0, 0, L"LivePreview", a4);
        return v6;
      }
      *a4 = WindowInBand;
      ChangeWindowMessageFilterEx(WindowInBand, 0x319u, 1u, 0LL);
      ChangeWindowMessageFilterEx(v11, 0x112u, 1u, 0LL);
      ChangeWindowMessageFilterEx(v11, 0x1Fu, 1u, 0LL);
      ChangeWindowMessageFilterEx(v11, 6u, 1u, 0LL);
      ChangeWindowMessageFilterEx(v11, 0x3Du, 1u, 0LL);
      if ( !a2 )
      {
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 78) = ForegroundWindow;
        v6 = CDesktopManager::SetForegroundWindowAsync(v11, v11, v14);
        v13 = v6;
        if ( (v6 & 0x80000000) == 0 )
        {
          CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F00);
          SetCursor(CursorW);
          return v6;
        }
        v12 = 2969;
        goto LABEL_11;
      }
    }
    else if ( *a4 )
    {
      LockSetForegroundWindow(2u);
      v16 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 78);
      if ( v16 )
      {
        if ( IsWindow(v16) )
          CDesktopManager::SetForegroundWindowAsync(
            *a4,
            *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 78),
            v17);
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 78) = 0LL;
      }
      PostMessageW(*a4, 0x10u, 0LL, 0LL);
      *a4 = 0LL;
    }
  }
  return v6;
}
