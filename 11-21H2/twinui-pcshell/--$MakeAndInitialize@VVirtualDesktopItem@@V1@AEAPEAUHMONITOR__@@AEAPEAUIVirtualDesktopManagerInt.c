/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItem@@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Z @ 0x1804B6D04
 * Callers:
 *     ?VirtualDesktopItem_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B73DC (-VirtualDesktopItem_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@PEAUI.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x1800A25DC (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18010EE24 (--4-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0VirtualDesktopItem@@QEAA@XZ @ 0x1804B6DF4 (--0VirtualDesktopItem@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B7288 (-InternalRelease@-$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItem,VirtualDesktopItem,HMONITOR__ * &,IVirtualDesktopManagerInternal * &,IVirtualDesktop * &>(
        __int64 **a1,
        void *a2,
        __int64 *a3,
        __int64 *a4)
{
  VirtualDesktopItem *v7; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  volatile int *v13; // rdx
  void *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  *a1 = 0LL;
  v7 = (VirtualDesktopItem *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v7;
  if ( v7 )
  {
    v9 = (__int64 *)VirtualDesktopItem::VirtualDesktopItem(v7);
    v15 = v9;
    v10 = *a4;
    Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=(v9 + 11, *a3);
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=(v9 + 12, v10);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
      0,
      v11,
      v12);
    v9[23] = 0LL;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v9 + 84), v13);
    *a1 = v9;
    Microsoft::WRL::ComPtr<VirtualDesktopItem>::InternalRelease(&v15);
    return 0;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
}
