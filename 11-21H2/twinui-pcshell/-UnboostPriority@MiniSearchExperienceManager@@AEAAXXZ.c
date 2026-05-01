/*
 * XREFs of ?UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A4808
 * Callers:
 *     ?OnMessageHandler@MiniSearchExperienceManager@@AEAAJI_K_J@Z @ 0x180176320 (-OnMessageHandler@MiniSearchExperienceManager@@AEAAJI_K_J@Z.c)
 *     wil::details::ScopeExitFn__lambda_f99fc2eadc43862d251e6e54b7b29c0f___::_ScopeExitFn__lambda_f99fc2eadc43862d251e6e54b7b29c0f___ @ 0x1803A0EFC (wil--details--ScopeExitFn__lambda_f99fc2eadc43862d251e6e54b7b29c0f___--_ScopeExitFn__lambda_f99f.c)
 *     ?Hide@MiniSearchExperienceManager@@UEAAJXZ @ 0x1803A1920 (-Hide@MiniSearchExperienceManager@@UEAAJXZ.c)
 *     ?OnViewConsolidationRequested@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A2698 (-OnViewConsolidationRequested@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A2C4C (-OnViewDestroyed@MiniSearchExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18009E190 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UnboostDiskIoImportance@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A4760 (-UnboostDiskIoImportance@MiniSearchExperienceManager@@AEAAXXZ.c)
 */

void __fastcall MiniSearchExperienceManager::UnboostPriority(struct _TP_TIMER **this)
{
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // ebx
  int v4; // esi
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 21,
    0LL);
  v3 = 0;
  if ( !*((_BYTE *)this + 160) )
    goto LABEL_9;
  *((_BYTE *)this + 160) = 0;
  MiniSearchExperienceManager::UnboostDiskIoImportance((MiniSearchExperienceManager *)this);
  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(this + 5);
  if ( !this[5] )
    goto LABEL_9;
  v10 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         v2,
         &v10);
  if ( v4 < 0 )
  {
    v5 = 1117LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_8;
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
  if ( v4 < 0 )
  {
    v5 = 1120LL;
    goto LABEL_7;
  }
LABEL_8:
  v3 = v4;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
LABEL_9:
  v6 = (_DWORD *)wil::details::static_lazy<SearchAppLauncherLogging>::get(
                   (__int64)v2,
                   _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 4u )
  {
    v12 = 0x1000000LL;
    LODWORD(v10) = *((unsigned __int8 *)this + 160);
    v11 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)v6,
      byte_1806AE06C,
      v7,
      v8,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v12);
  }
}
