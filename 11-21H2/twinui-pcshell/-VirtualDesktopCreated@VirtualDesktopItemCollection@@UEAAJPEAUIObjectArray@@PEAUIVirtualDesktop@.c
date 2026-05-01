/*
 * XREFs of ?VirtualDesktopCreated@VirtualDesktopItemCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x1804A9530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x1804A9824 (-_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z.c)
 */

__int64 __fastcall VirtualDesktopItemCollection::VirtualDesktopCreated(
        VirtualDesktopItemCollection *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    a4);
  v6 = VirtualDesktopItemCollection::_AddDesktopItem(
         (VirtualDesktopItemCollection *)((char *)this - 144),
         a3,
         *((_DWORD *)this - 30),
         0);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v6);
  return v7;
}
