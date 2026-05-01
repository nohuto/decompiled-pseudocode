/*
 * XREFs of ?ResetAppRectClip@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A087C
 * Callers:
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800465EC (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Instance@SearchAppExperienceManagerTelemetry@@KAPEAV1@XZ @ 0x18019F3BC (-Instance@SearchAppExperienceManagerTelemetry@@KAPEAV1@XZ.c)
 *     ?UndockedSearchAppExperienceManager_ResetAppRectClip_@SearchAppExperienceManagerTelemetry@@QEAAX_K@Z @ 0x1801A2244 (-UndockedSearchAppExperienceManager_ResetAppRectClip_@SearchAppExperienceManagerTelemetry@@QEAAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UndockedSearchAppExperienceManager::ResetAppRectClip(
        UndockedSearchAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  unsigned __int64 v4; // rbx
  wil::TraceLoggingProvider *v5; // rax
  SearchAppExperienceManagerTelemetry *v6; // rcx

  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    v4 = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
    if ( v4 )
    {
      v5 = SearchAppExperienceManagerTelemetry::Instance();
      if ( wil::TraceLoggingProvider::IsEnabled_(v5, 0) )
      {
        SearchAppExperienceManagerTelemetry::Instance();
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetAppRectClip_(v6, v4);
      }
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 12) + 72LL))(*((_QWORD *)this + 12), v4);
    }
  }
}
