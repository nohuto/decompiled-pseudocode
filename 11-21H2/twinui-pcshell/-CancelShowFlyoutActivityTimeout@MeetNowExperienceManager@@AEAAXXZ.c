/*
 * XREFs of ?CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ @ 0x180393B70
 * Callers:
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x180393364 (--1MeetNowExperienceManager@@UEAA@XZ.c)
 *     ?HideFlyout@MeetNowExperienceManager@@UEAAJXZ @ 0x180394440 (-HideFlyout@MeetNowExperienceManager@@UEAAJXZ.c)
 *     ?OnIdleStateChanged@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180394E90 (-OnIdleStateChanged@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 *     ?OnMessage@MeetNowExperienceManager@@UEAAJI_K_J@Z @ 0x180394F30 (-OnMessage@MeetNowExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?OnSetForegroundFailed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395230 (-OnSetForegroundFailed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395D20 (-OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z @ 0x180396BFC (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 */

void __fastcall MeetNowExperienceManager::CancelShowFlyoutActivityTimeout(MeetNowExperienceManager *this)
{
  struct _TP_TIMER **v1; // rcx

  v1 = (struct _TP_TIMER **)((char *)this + 400);
  if ( *v1 )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      0LL);
}
