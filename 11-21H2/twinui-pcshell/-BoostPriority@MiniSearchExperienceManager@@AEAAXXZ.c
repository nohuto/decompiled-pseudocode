/*
 * XREFs of ?BoostPriority@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A1538
 * Callers:
 *     ?ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z @ 0x1801A731C (-ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z.c)
 *     ?OnViewCreated@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A27C8 (-OnViewCreated@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18009E190 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?BoostDiskIoImportance@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A1490 (-BoostDiskIoImportance@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?StartUnboostPriorityTimer@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A3A04 (-StartUnboostPriorityTimer@MiniSearchExperienceManager@@AEAAXXZ.c)
 */

void __fastcall MiniSearchExperienceManager::BoostPriority(_BYTE *pv)
{
  int v2; // ebx
  int v3; // esi
  __int64 v4; // rdx
  _DWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  if ( pv[160] || !*((_QWORD *)pv + 5) )
    goto LABEL_9;
  pv[160] = 1;
  MiniSearchExperienceManager::BoostDiskIoImportance((MiniSearchExperienceManager *)pv);
  v9 = 0LL;
  v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))pv + 5,
         &v9);
  if ( v3 < 0 )
  {
    v4 = 1091LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_8;
  }
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
  if ( v3 < 0 )
  {
    v4 = 1094LL;
    goto LABEL_7;
  }
LABEL_8:
  v2 = v3;
  MiniSearchExperienceManager::StartUnboostPriorityTimer(pv);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
LABEL_9:
  v5 = (_DWORD *)wil::details::static_lazy<SearchAppLauncherLogging>::get(
                   (__int64)pv,
                   _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 4u )
  {
    v11 = 0x1000000LL;
    LODWORD(v9) = (unsigned __int8)pv[160];
    v10 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)v5,
      byte_1806AE0E3,
      v6,
      v7,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v11);
  }
}
