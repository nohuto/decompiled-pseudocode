/*
 * XREFs of ?BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B2A60
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801747C0 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?BoostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B2B4C (-BoostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B3308 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?StartUnboostPriorityTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B3368 (-StartUnboostPriorityTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800BA318 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UndockedSearchAppExperienceManager::BoostPriority(_QWORD *pv)
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // rcx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 v10; // [rsp+70h] [rbp+28h] BYREF
  int v11; // [rsp+78h] [rbp+30h] BYREF
  int v12; // [rsp+80h] [rbp+38h] BYREF
  __int64 v13; // [rsp+88h] [rbp+40h] BYREF

  v2 = *((unsigned __int8 *)pv + 776);
  if ( (_BYTE)v2 || !pv[8] )
    goto LABEL_6;
  *((_BYTE *)pv + 776) = 1;
  UndockedSearchAppExperienceManager::BoostDiskIoImportance((UndockedSearchAppExperienceManager *)pv);
  v10 = 0LL;
  v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         pv + 8,
         &v10);
  if ( v3 < 0 )
  {
    v7 = 3969LL;
LABEL_11:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v3,
      v8);
    goto LABEL_5;
  }
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
  if ( v3 < 0 )
  {
    v7 = 3972LL;
    goto LABEL_11;
  }
LABEL_5:
  UndockedSearchAppExperienceManager::StartUnboostPriorityTimer(pv);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
LABEL_6:
  v4 = *(_DWORD **)(wil::details::static_lazy<SearchAppLauncherLogging>::get(
                      pv,
                      _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v4 > 4u )
  {
    v13 = 0x1000000LL;
    LODWORD(v10) = *((unsigned __int8 *)pv + 776);
    v11 = v2;
    v12 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (_DWORD)v4,
      (unsigned int)&unk_180852303,
      v5,
      v6,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v13);
  }
}
