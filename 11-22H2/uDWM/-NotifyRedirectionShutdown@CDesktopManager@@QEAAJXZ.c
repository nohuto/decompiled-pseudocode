/*
 * XREFs of ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800B52E0
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800493DC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x180049090 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004911C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180056258 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180056394 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800B5694 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::NotifyRedirectionShutdown(CDesktopManager *this, __int64 a2, __int64 a3)
{
  int v4; // eax
  signed int v5; // ebx
  int v6; // esi
  char v7; // bp
  __int64 v8; // r8
  signed int v9; // eax
  signed int LastError; // eax
  void *v11; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp-38h] BYREF

  *((_BYTE *)this + 20) = 1;
  v4 = CDesktopManager::EnableMonitorRenderTargets((CVisualTargetProxy **)this, 0, a3);
  v5 = v4;
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x240u);
  CDesktopManager::ReleaseDCompResources(this);
  v7 = CDesktopManager::CheckAnyPreference(0x10u);
  CDesktopManager::SetPreferences();
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmShutdownMessage_Info,
      v8,
      1LL,
      (__int64)&v13);
  if ( *((_QWORD *)this + 76) )
  {
    SetLastError(0);
    if ( PostThreadMessageW(*((_DWORD *)this + 150), 0x12u, 0LL, 0LL) )
    {
      if ( v6 >= 0 )
      {
        v13 = &CDesktopManager::s_csDwmInstance;
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        SetLastError(0);
        if ( WaitForSingleObject(*((HANDLE *)this + 76), 0xFFFFFFFF) )
        {
          LastError = GetLastError();
          v5 = LastError;
          if ( LastError > 0 )
            v5 = (unsigned __int16)LastError | 0x80070000;
          if ( v5 >= 0 )
            v5 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x254u);
        }
        else
        {
          v5 = v6;
        }
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      }
    }
    else
    {
      v9 = GetLastError();
      v5 = v9;
      if ( v9 > 0 )
        v5 = (unsigned __int16)v9 | 0x80070000;
      if ( v5 >= 0 )
        v5 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x24Cu);
    }
    *((_DWORD *)this + 150) = 0;
    v11 = (void *)*((_QWORD *)this + 76);
    if ( v11 )
    {
      CloseHandle(v11);
      *((_QWORD *)this + 76) = 0LL;
    }
  }
  if ( !v7 )
    CDesktopManager::ClearPreferences();
  return (unsigned int)v5;
}
