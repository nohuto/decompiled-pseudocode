/*
 * XREFs of ?TrackMouseMovement@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18046ACA8
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18003DA50 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?UndockedSearchAppExperienceManager_TrackMouseMovement_Ignored@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18046B2A4 (-UndockedSearchAppExperienceManager_TrackMouseMovement_Ignored@SearchAppExperienceManagerTelemet.c)
 *     ?UpdateMouseOnSearchState@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18046B4C8 (-UpdateMouseOnSearchState@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 */

void __fastcall UndockedSearchAppExperienceManager::TrackMouseMovement(
        UndockedSearchAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v5; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    if ( !*((_QWORD *)this + 25) )
      *((_QWORD *)this + 25) = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
    UndockedSearchAppExperienceManager::UpdateMouseOnSearchState(this);
    ThreadpoolTimer = CreateThreadpoolTimer(
                        (PTP_TIMER_CALLBACK)lambda_a21e1a2925ef670440b4b94eb1909895_::_lambda_invoker_cdecl_,
                        this,
                        0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 27,
      ThreadpoolTimer);
    v5 = (struct _TP_TIMER *)*((_QWORD *)this + 27);
    pftDueTime.dwHighDateTime = -1;
    pftDueTime.dwLowDateTime = -3330000;
    SetThreadpoolTimer(v5, &pftDueTime, 0x14Du, 0);
  }
  else
  {
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_TrackMouseMovement_Ignored();
  }
}
