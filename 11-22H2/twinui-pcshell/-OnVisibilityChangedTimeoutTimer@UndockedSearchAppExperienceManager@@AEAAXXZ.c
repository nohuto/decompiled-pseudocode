/*
 * XREFs of ?OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180469BF8
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1800E3CC0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ??$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCCortanaShownEventArgs@@@12@AEAURect@Foundation@Windows@@@Z @ 0x18003E0BC (--$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18003E208 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800527B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$UndockedSearchAppExperienceManager_OnSearchAppVisibilityChangedTimeout@AEAW4SearchAppState@@@SearchAppExperienceManagerTelemetry@@SAXAEAW4SearchAppState@@@Z @ 0x1804620C8 (--$UndockedSearchAppExperienceManager_OnSearchAppVisibilityChangedTimeout@AEAW4SearchAppState@@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::OnVisibilityChangedTimeoutTimer(
        UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER **v2; // rsi
  struct _TP_TIMER *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _TP_TIMER **)((char *)this + 760);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 95);
  if ( v3 )
  {
    if ( !IsThreadpoolTimerSet(v3) )
    {
      SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnSearchAppVisibilityChangedTimeout<enum SearchAppState &>((int *)this + 184);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        v2,
        0LL);
      if ( *((_DWORD *)this + 184) == 8 )
      {
        v4 = Microsoft::WRL::Details::Make<CCortanaShownEventArgs,Windows::Foundation::Rect &>(
               &v7,
               (__int128 *)this + 8);
        v5 = *v4;
        *v4 = 0LL;
        v6 = v7;
        if ( v7 )
        {
          v7 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(v6);
        }
        Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>(
          (__int64)this + 320,
          (__int64)this,
          v5);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
}
