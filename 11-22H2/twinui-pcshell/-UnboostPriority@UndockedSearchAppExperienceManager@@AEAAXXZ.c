/*
 * XREFs of ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B2F60
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180037BE0 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800381A0 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1800E3CC0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800E46E0 (-ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180174554 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___::_ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___ @ 0x180466224 (wil--details--ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___--_ScopeExitFn__lambda_b287.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?UnboostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B3184 (-UnboostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B3308 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800BA318 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UndockedSearchAppExperienceManager::UnboostPriority(UndockedSearchAppExperienceManager *this)
{
  char *v2; // rcx
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // rcx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  int v12; // [rsp+68h] [rbp+28h] BYREF
  int v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (char *)this + 784,
    0LL);
  v3 = *((unsigned __int8 *)this + 776);
  if ( !(_BYTE)v3 )
    goto LABEL_6;
  *((_BYTE *)this + 776) = 0;
  UndockedSearchAppExperienceManager::UnboostDiskIoImportance(this);
  v2 = (char *)this + 64;
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_6;
  v11 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         v2,
         &v11);
  if ( v4 < 0 )
  {
    v8 = 4000LL;
LABEL_11:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      v9);
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
  if ( v4 < 0 )
  {
    v8 = 4003LL;
    goto LABEL_11;
  }
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
LABEL_6:
  v5 = *(_DWORD **)(wil::details::static_lazy<SearchAppLauncherLogging>::get(
                      v2,
                      _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 4u )
  {
    v14 = 0x1000000LL;
    LODWORD(v11) = *((unsigned __int8 *)this + 776);
    v12 = v3;
    v13 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (_DWORD)v5,
      (unsigned int)&unk_18085239C,
      v6,
      v7,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v14);
  }
}
