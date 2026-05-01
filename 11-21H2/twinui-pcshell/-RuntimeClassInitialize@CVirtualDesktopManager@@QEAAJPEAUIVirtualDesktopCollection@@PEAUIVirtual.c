/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1800B5364
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1800B5544 (--$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtu.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800B525C (-SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopPersistence@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPersistence@@@Z @ 0x1800B547C (--4-$ComPtr@UIVirtualDesktopPersistence@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPersiste.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1800B54E0 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??4?$ComPtr@UIVirtualDesktopGroupedViewsPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopGroupedViewsPolicy@@@Z @ 0x1801108CC (--4-$ComPtr@UIVirtualDesktopGroupedViewsPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopG.c)
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x180112914 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVisibilityPolicy@@@Z @ 0x180112970 (--4-$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVis.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801129D4 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ??4?$ComPtr@UIVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopForegroundPolicy@@@Z @ 0x180112B64 (--4-$ComPtr@UIVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopFor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopManager::RuntimeClassInitialize(
        CVirtualDesktopManager *this,
        struct IVirtualDesktopCollection *a2,
        struct IVirtualDesktopVisibilityPolicy *a3,
        struct IVirtualDesktopNotification *a4,
        struct IVirtualDesktopForegroundPolicy *a5,
        struct IVirtualDesktopPersistence *a6,
        struct IVirtualDesktopGroupedViewsPolicy *a7,
        struct IVirtualDesktopLock *a8)
{
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64, GUID *, char *); // rsi
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // r8
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((char *)this + 96, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopVisibilityPolicy>::operator=((char *)this + 112, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((char *)this + 120, a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopForegroundPolicy>::operator=((char *)this + 128, a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopPersistence>::operator=((char *)this + 136, a6);
  Microsoft::WRL::ComPtr<IVirtualDesktopGroupedViewsPolicy>::operator=((char *)this + 144, a7);
  Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=((char *)this + 160, a8);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    v11,
    v12);
  v13 = *((_QWORD *)this + 12);
  v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v13 + 72LL);
  v15 = *((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = v14(v13, 0LL, 5LL, &GUID_536d3495_b208_4cc9_ae26_de8111275bf8, (char *)this + 248);
  if ( v16 < 0 )
  {
    v19 = 1908LL;
  }
  else
  {
    v16 = CVirtualDesktopManager::SubscribeToWNFForBackgroundImage(this, 0LL, v17);
    if ( v16 >= 0 )
      return 0LL;
    v19 = 1909LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v16);
  return (unsigned int)v16;
}
