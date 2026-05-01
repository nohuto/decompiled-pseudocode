/*
 * XREFs of ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180092F30
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18001FB30 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18009E7E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009E9C8 (-ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18016A0F0 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___::_ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___ @ 0x18019BB90 (wil--details--ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___--_ScopeExitFn__lambda_b287.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18019EF60 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed@AEAJAEA_N@SearchAppExperienceManagerTelemetry@@SAXAEAJAEA_N@Z @ 0x180092700 (--$UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed@AEAJAEA_N@SearchAppExperienceMa.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?UnboostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009DC50 (-UnboostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180157360 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::UnboostPriority(UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 86);
  if ( v2 )
  {
    LastError = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v2);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 86) = 0LL;
  v9 = 0;
  if ( *((_BYTE *)this + 680) )
  {
    *((_BYTE *)this + 680) = 0;
    UndockedSearchAppExperienceManager::UnboostDiskIoImportance(this);
    if ( *((_QWORD *)this + 8) )
    {
      v10 = 0LL;
      v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             (char *)this + 64,
             &v10);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 3056LL;
      }
      else
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
        v5 = v4;
        if ( v4 >= 0 )
        {
LABEL_8:
          v9 = v5;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
          goto LABEL_4;
        }
        v6 = 3059LL;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v6,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v4,
        v7);
      goto LABEL_8;
    }
  }
LABEL_4:
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnPriorityUnboostProcessed<long &,bool &>(
    &v9,
    (unsigned __int8 *)this + 680);
}
