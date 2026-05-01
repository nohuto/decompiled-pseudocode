/*
 * XREFs of ?add_XboxLiveKeyChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18033CB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x1801875A8 (-GetSize@-$EventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@I.c)
 *     ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18032D3E4 (-Add@-$AgileEventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@.c)
 *     ?StartXboxLiveRegKeyWatcherThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18033A1B8 (-StartXboxLiveRegKeyWatcherThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::add_XboxLiveKeyChanged(__int64 a1, __int64 a2, struct IUnknown **a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  int started; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( !a3 )
    {
      v6 = 2909LL;
      goto LABEL_3;
    }
    v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 464);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 464));
    v13 = v8;
    started = Microsoft::WRL::AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
                a1 + 504,
                a2,
                a3);
    v7 = started;
    if ( started >= 0 )
    {
      if ( Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize((RTL_SRWLOCK *)(a1 + 504)) != 1
        || *(_QWORD *)(a1 + 528)
        || (started = GamingOverlayExperienceManager::StartXboxLiveRegKeyWatcherThread((HANDLE *)(a1 - 136)),
            v7 = started,
            started >= 0) )
      {
        v7 = 0;
        goto LABEL_14;
      }
      v10 = 2916LL;
    }
    else
    {
      v10 = 2912LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)started);
LABEL_14:
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
    return v7;
  }
  v6 = 2908LL;
LABEL_3:
  v7 = -2147467261;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)0x80004003LL);
  return v7;
}
