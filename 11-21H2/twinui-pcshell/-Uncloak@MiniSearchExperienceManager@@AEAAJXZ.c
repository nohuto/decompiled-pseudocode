/*
 * XREFs of ?Uncloak@MiniSearchExperienceManager@@AEAAJXZ @ 0x1801A8200
 * Callers:
 *     ?ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z @ 0x1801A731C (-ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z.c)
 *     ?OnClientWindowReadyForPresentationChanged@MiniSearchExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1803A23E0 (-OnClientWindowReadyForPresentationChanged@MiniSearchExperienceManager@@AEAAJPEAUIClientWindowSt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ @ 0x18004319C (--1-$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800467B0 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008FBF8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionSearchAppWindow@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A30C8 (-PositionSearchAppWindow@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?watch_errors@?$tip_test@U_tip_MiniSearchActivationTest@@@tip@@QEAA?AV?$test_watcher@U_tip_MiniSearchActivationTest@@@2@XZ @ 0x1803A4E3C (-watch_errors@-$tip_test@U_tip_MiniSearchActivationTest@@@tip@@QEAA-AV-$test_watcher@U_tip_MiniS.c)
 */

__int64 __fastcall MiniSearchExperienceManager::Uncloak(MiniSearchExperienceManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  _BYTE v7[72]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF

  v2 = SearchAppLauncherLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)v2,
      (int)&unk_1806AEB11,
      0);
  tip::tip_test<_tip_MiniSearchActivationTest>::watch_errors((char *)this + 256, v7);
  MiniSearchExperienceManager::PositionSearchAppWindow(this);
  if ( *((_QWORD *)this + 5) )
  {
    v9 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5,
           &v9);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, 0LL);
      v3 = v4;
      if ( v4 >= 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
        v3 = 0;
        goto LABEL_11;
      }
      v5 = 551LL;
    }
    else
    {
      v5 = 550LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  }
  else
  {
    v3 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x224,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      (const char *)0x8007139FLL);
  }
LABEL_11:
  tip::test_watcher<_tip_SwipeDashboard>::~test_watcher<_tip_SwipeDashboard>((__int64)v7);
  return v3;
}
