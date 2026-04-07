/*
 * XREFs of ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1800B4340
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x180053A14 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall CDesktopManager::DwmLivePreviewWndProc(HWND hWnd, UINT Msg, HWND wParam, LPARAM lParam)
{
  __int64 v8; // r8
  LRESULT v9; // rdi
  char v10; // si
  char v11; // r15
  signed int v12; // eax
  signed int LastError; // eax
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+48h] [rbp-30h]

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  v10 = 1;
  v11 = 0;
  if ( Msg == 6 )
  {
    if ( (_WORD)wParam )
      goto LABEL_30;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 78) = 0LL;
  }
  else if ( Msg != 31 )
  {
    if ( Msg == 71 )
    {
      if ( (*(_BYTE *)(lParam + 32) & 0x40) != 0 )
      {
        v16 = &CDesktopManager::s_csDwmInstance;
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        SetLastError(0);
        if ( SetForegroundWindow(hWnd) )
        {
          LockSetForegroundWindow(1u);
        }
        else
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          if ( LastError >= 0 )
            LastError = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0x9E9u);
          v11 = 1;
        }
LABEL_24:
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v11 )
          goto LABEL_29;
        goto LABEL_28;
      }
LABEL_30:
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v15 = 0LL;
      v9 = DefWindowProcW(hWnd, Msg, (WPARAM)wParam, lParam);
      goto LABEL_31;
    }
    if ( Msg != 257 )
    {
      if ( Msg == 1028 )
      {
        v16 = &CDesktopManager::s_csDwmInstance;
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        SetLastError(0);
        if ( !SetWindowPos(wParam, 0LL, 0, 0, 0, 0, lParam != 0 ? 67 : 83) )
        {
          v12 = GetLastError();
          if ( v12 > 0 )
            v12 = (unsigned __int16)v12 | 0x80070000;
          if ( v12 >= 0 )
            v12 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x9D3u);
          if ( wParam == hWnd )
            v11 = 1;
        }
        v10 = 0;
        goto LABEL_24;
      }
      goto LABEL_30;
    }
    if ( (unsigned __int64)wParam - 91 > 1 )
      goto LABEL_30;
    v10 = 0;
  }
LABEL_28:
  CLivePreview::DeActivate(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57), 0, v8);
LABEL_29:
  if ( v10 )
    goto LABEL_30;
LABEL_31:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v9;
}
