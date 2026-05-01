/*
 * XREFs of ?OnViewWrapperViewEvent@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803A2FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MiniSearchAppExperienceManager_OnViewWrapperViewEvent@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@MiniSearchAppExperienceManagerTelemetry@@SAXAEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A0914 (--$MiniSearchAppExperienceManager_OnViewWrapperViewEvent@AEAW4ViewEventType@ViewManagerInterop@S.c)
 *     ?OnViewConsolidationRequested@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A2698 (-OnViewConsolidationRequested@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?OnViewCreated@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A27C8 (-OnViewCreated@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inter.c)
 *     ?OnViewDestroyed@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A2C4C (-OnViewDestroyed@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?OnViewRequestNavigate@MiniSearchExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803A2E38 (-OnViewRequestNavigate@MiniSearchExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation.c)
 */

__int64 __fastcall MiniSearchExperienceManager::OnViewWrapperViewEvent(
        MiniSearchExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v9)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, __int64 *); // rbx
  int v10; // eax
  struct Windows::Foundation::Collections::IPropertySet *v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_OnViewWrapperViewEvent<enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType &>(&v13);
  if ( v13 )
  {
    switch ( v13 )
    {
      case 2:
        v14 = 0LL;
        v9 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, __int64 *))(*(_QWORD *)a3 + 56LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
        v10 = v9(a3, &v14);
        v7 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x268,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
            (const char *)(unsigned int)v10);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
          return v7;
        }
        MiniSearchExperienceManager::OnViewRequestNavigate(this, v11);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
        break;
      case 35:
        MiniSearchExperienceManager::OnViewConsolidationRequested(this);
        break;
      case 4:
        MiniSearchExperienceManager::OnViewDestroyed(this);
        break;
    }
  }
  else
  {
    MiniSearchExperienceManager::OnViewCreated((__int64 *)this, a2);
  }
  return 0LL;
}
