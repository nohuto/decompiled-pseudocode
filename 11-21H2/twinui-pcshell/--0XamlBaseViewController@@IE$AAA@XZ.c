/*
 * XREFs of ??0XamlBaseViewController@@IE$AAA@XZ @ 0x180018758
 * Callers:
 *     ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@89Internal@Windows@@@Z @ 0x180018380 (--0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmers.c)
 *     ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIAppViewDataSourceAdapter@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@@Z @ 0x18060DE28 (--0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIAppViewDataSourceAdapter@@PEAUIApp.c)
 *     ??0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCRect@Geometry@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUHWND__@@_N@Z @ 0x1806106D0 (--0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCR.c)
 *     ??0VirtualDesktopSwitcherController@@AE$AAA@PEAUIVirtualDesktopSwitcherHost@@PE$AAVVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180612668 (--0VirtualDesktopSwitcherController@@AE$AAA@PEAUIVirtualDesktopSwitcherHost@@PE$AAVVirtualDeskto.c)
 * Callees:
 *     ??$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA?AV?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@XZ @ 0x180018834 (--$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA-AV-$ComPtr@VCreationThreadDis.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@@Z @ 0x1800641DC (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EEE90 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EEEC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadD.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall XamlBaseViewController::XamlBaseViewController(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  Platform::Object::Object(a1 + 3);
  *a1 = &XamlBaseViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  a1[1] = &XamlBaseViewController::`vftable'{for `IXamlMultitaskingViewController'};
  a1[2] = &XamlBaseViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  a1[3] = &XamlBaseViewController::`vftable'{for `Platform::Object'};
  a1[4] = &XamlBaseViewController::`vftable'{for `__abi_IUnknown'};
  a1[5] = &XamlBaseViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 15);
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  v2 = (__int64 *)wil::MakeAndInitializeOrThrow<CreationThreadDispatcher,>(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = a1[10];
  a1[10] = v3;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release();
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v6);
  return a1;
}
