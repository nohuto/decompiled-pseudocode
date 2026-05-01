/*
 * XREFs of ?ResetAppRectClip@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180038B58
 * Callers:
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180038808 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAAPEAVSearchAppExperienceManagerTelemetry@@P6AXXZ@Z @ 0x180038BDC (-get@-$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAAPEAVSearchAppExperien.c)
 *     ?UndockedSearchAppExperienceManager_ResetAppRectClip_@SearchAppExperienceManagerTelemetry@@QEAAX_K@Z @ 0x180038C70 (-UndockedSearchAppExperienceManager_ResetAppRectClip_@SearchAppExperienceManagerTelemetry@@QEAAX.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UndockedSearchAppExperienceManager::ResetAppRectClip(
        UndockedSearchAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  __int64 v4; // rcx
  HWND v5; // rbx
  wil::TraceLoggingProvider *v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  SearchAppExperienceManagerTelemetry *v9; // rcx

  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    v5 = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
    if ( v5 )
    {
      v6 = (wil::TraceLoggingProvider *)wil::details::static_lazy<SearchAppExperienceManagerTelemetry>::get(
                                          v4,
                                          _lambda_db4a2adff33d12a6f55c62cd979ac014_::_lambda_invoker_cdecl_);
      if ( wil::TraceLoggingProvider::IsEnabled_(v6, 0, v7) )
      {
        wil::details::static_lazy<SearchAppExperienceManagerTelemetry>::get(
          v8,
          _lambda_db4a2adff33d12a6f55c62cd979ac014_::_lambda_invoker_cdecl_);
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetAppRectClip_(
          v9,
          (unsigned __int64)v5);
      }
      (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 12) + 72LL))(*((_QWORD *)this + 12), v5);
    }
  }
}
