/*
 * XREFs of ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x1800F1E74
 * Callers:
 *     ?CloneTitleBarConfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800F1C34 (-CloneTitleBarConfiguration@@YA-AV-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_excep.c)
 *     ?CreateTitlebarConfiguration@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804EFF3C (-CreateTitlebarConfiguration@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewTitlebarConfig.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800F21C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationView.c)
 *     ??0ApplicationViewTitlebarConfiguration@@QEAA@XZ @ 0x1800F22B0 (--0ApplicationViewTitlebarConfiguration@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18018FE0C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeAndInitializeOrThrow<ApplicationViewTitlebarConfiguration,>(_QWORD *a1)
{
  ApplicationViewTitlebarConfiguration *v2; // rax
  ApplicationViewTitlebarConfiguration *v3; // rax
  volatile int *v4; // rdx
  __int64 v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ApplicationViewTitlebarConfiguration *v8; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (ApplicationViewTitlebarConfiguration *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  if ( !v2 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)0x8007000ELL,
      1);
  }
  v3 = ApplicationViewTitlebarConfiguration::ApplicationViewTitlebarConfiguration(v2);
  if ( v3 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (ApplicationViewTitlebarConfiguration *)((char *)v3 + 44),
      v4);
    *a1 = v5;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(v5);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
