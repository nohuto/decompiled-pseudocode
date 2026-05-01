/*
 * XREFs of ?CancelDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B4A6C
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180174554 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801747C0 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 * Callees:
 *     ?UndockedSearchAppExperienceManager_DeferredSuspensionTimerCanceled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18006CEC8 (-UndockedSearchAppExperienceManager_DeferredSuspensionTimerCanceled@SearchAppExperienceManagerTe.c)
 */

void __fastcall UndockedSearchAppExperienceManager::CancelDeferredSuspensionTimer(
        UndockedSearchAppExperienceManager *this)
{
  struct _TP_TIMER **v1; // rbx

  v1 = (struct _TP_TIMER **)((char *)this + 752);
  if ( *((_QWORD *)this + 94) )
  {
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_DeferredSuspensionTimerCanceled((__int64)this);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      0LL);
  }
}
