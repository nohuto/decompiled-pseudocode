/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68
 * Callers:
 *     ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x1800317E4 (-CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z.c)
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180035340 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18003ACC0 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18003B0E0 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180043970 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x180077280 (-Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_I.c)
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180090630 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180090860 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800909B0 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C8B80 (-Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800C8E50 (-MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Act.c)
 *     ?Run@?$functor_wrapper_void@AEAV_lambda_62158d46a05af21ae3d227fe228597be_@@@details@wil@@UEAAJXZ @ 0x1800C95B0 (-Run@-$functor_wrapper_void@AEAV_lambda_62158d46a05af21ae3d227fe228597be_@@@details@wil@@UEAAJXZ.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800EC4C4 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18002F7A4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18003BFB8 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  char v1; // r14
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  DWORD CurrentThreadId; // ebp
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rsi
  __int64 i; // rbx
  _QWORD *v9; // rax
  signed __int64 v10; // rcx
  signed __int64 v11; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char)this;
  v2 = 0LL;
  v3 = wil::details_abi::g_pProcessLocalData;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
    {
      v13 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
                  *(_QWORD *)wil::details_abi::g_pProcessLocalData,
                  &v13) >= 0
        && !*(_QWORD *)(v3 + 8) )
      {
        *(_QWORD *)(v3 + 8) = v13;
      }
    }
    v4 = (*(_QWORD *)(v3 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v3 + 8) != 0LL);
    if ( v4 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = CurrentThreadId % 0xAuLL;
      for ( i = *(_QWORD *)(v4 + 8 * v7 + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == CurrentThreadId )
        {
          v2 = (char *)(i + 16);
          goto LABEL_18;
        }
      }
      if ( v1 && (v9 = wil::details::ProcessHeapAlloc(0, 0x38uLL, v6), (v10 = (signed __int64)v9) != 0) )
      {
        *(_DWORD *)v9 = CurrentThreadId;
        v9[1] = 0LL;
        v2 = (char *)(v9 + 2);
        *((_WORD *)v9 + 8) = 40;
        *((_DWORD *)v9 + 5) = 0;
        v9[3] = 0LL;
        *((_DWORD *)v9 + 8) = 0;
        v9[5] = 0LL;
        *((_DWORD *)v9 + 12) = 0;
        _m_prefetchw((const void *)(v4 + 8 * v7 + 8));
        do
        {
          v11 = *(_QWORD *)(v4 + 8 * v7 + 8);
          *(_QWORD *)(v10 + 8) = v11;
        }
        while ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v7 + 8), v10, v11) );
      }
      else
      {
        v2 = 0LL;
      }
LABEL_18:
      if ( v2 && !*((_QWORD *)v2 + 1) )
        *((_QWORD *)v2 + 1) = v4 + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)v2;
}
