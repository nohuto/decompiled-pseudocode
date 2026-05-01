/*
 * XREFs of ?XboxLiveRegKeyWatcherThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1802D3418
 * Callers:
 *     ?StaticXboxLiveRegKeyWatcherThread@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x1804085A0 (-StaticXboxLiveRegKeyWatcherThread@GamingOverlayExperienceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$InvokeAll@PEAVGamingOverlayExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVGamingOverlayExperienceManager@@$$T@Z @ 0x1801AE35C (--$InvokeAll@PEAVGamingOverlayExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAUIGa.c)
 *     ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x1802D3140 (-GetSize@-$EventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@I.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1803D9538 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::XboxLiveRegKeyWatcherThread(GamingOverlayExperienceManager *this)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  char *EventW; // rbx
  unsigned int v5; // eax
  char v6; // bp
  DWORD v7; // eax
  const char *v8; // r9
  BOOL fAsynchronous; // [rsp+20h] [rbp-48h]
  BOOL fAsynchronousa; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+80h] [rbp+18h] BYREF

  hKey = 0LL;
  v2 = RegCreateKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\XboxLive", 0, 0LL, 0, 0x10u, 0LL, &hKey, 0LL);
  if ( v2 )
  {
    v3 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x3F4,
           (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
           (const char *)v2,
           fAsynchronous);
    goto LABEL_21;
  }
  while ( 1 )
  {
    EventW = (char *)CreateEventW(0LL, 1, 0, 0LL);
    if ( (unsigned __int64)(EventW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      v3 = -2147467261;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3FA,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)0x80004003LL);
      if ( !EventW || EventW == (char *)-1LL )
        goto LABEL_21;
LABEL_20:
      CloseHandle(EventW);
      goto LABEL_21;
    }
    v5 = RegNotifyChangeKeyValue(hKey, 1, 5u, EventW, 1);
    if ( v5 )
    {
      v3 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x402,
             (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
             (const char *)v5,
             fAsynchronousa);
      goto LABEL_20;
    }
    v6 = 0;
    v7 = WaitForSingleObject(EventW, 0x1388u);
    if ( v7 )
    {
      if ( v7 != 258 )
      {
        wil::details::in1diag3::Log_GetLastError(
          retaddr,
          (void *)0x414,
          (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          v8);
        v6 = 1;
      }
    }
    else
    {
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<GamingOverlayExperienceManager *,std::nullptr_t>(
        (__int64)this + 680,
        (__int64)this);
    }
    wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)this + 16);
    if ( v6
      || !Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize((RTL_SRWLOCK *)this + 85) )
    {
      break;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    CloseHandle(EventW);
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 88,
    0LL);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  CloseHandle(EventW);
  v3 = 0;
LABEL_21:
  if ( hKey )
    RegCloseKey(hKey);
  return v3;
}
