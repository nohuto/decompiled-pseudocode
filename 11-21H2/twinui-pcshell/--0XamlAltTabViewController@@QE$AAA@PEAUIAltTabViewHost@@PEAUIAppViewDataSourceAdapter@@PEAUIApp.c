/*
 * XREFs of ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIAppViewDataSourceAdapter@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@@Z @ 0x18060DE28
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1805FB4D8 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIMultitaskingViewHost@@@Z @ 0x180018668 (--4-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIMultitas.c)
 *     ??4?$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveAppCrusher@@@Z @ 0x1800186B8 (--4-$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersive.c)
 *     ??4?$com_ptr_t@UIApplicationViewSwitcher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationViewSwitcher@@@Z @ 0x180018708 (--4-$com_ptr_t@UIApplicationViewSwitcher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIAppli.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x180018758 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIAppViewDataSourceAdapter@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIAppViewDataSourceAdapter@@@Z @ 0x1805F8E38 (--0-$com_ptr_t@UIAppViewDataSourceAdapter@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIAppViewDat.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall XamlAltTabViewController::XamlAltTabViewController(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD, GUID *, __int64))
{
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64); // rsi
  __int64 v11; // rcx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  XamlBaseViewController::XamlBaseViewController((_QWORD *)(a1 + 8));
  *(_QWORD *)a1 = &XamlAltTabViewController::`vftable';
  *(_QWORD *)(a1 + 8) = &XamlAltTabViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  *(_QWORD *)(a1 + 16) = &XamlAltTabViewController::`vftable'{for `IXamlMultitaskingViewController'};
  *(_QWORD *)(a1 + 24) = &XamlAltTabViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  *(_QWORD *)(a1 + 32) = &XamlAltTabViewController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 40) = &XamlAltTabViewController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 48) = &XamlAltTabViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 152) = &XamlAltTabViewController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 160) = &XamlAltTabViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_OWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  wil::com_ptr_t<IAppViewDataSourceAdapter,wil::err_exception_policy>::com_ptr_t<IAppViewDataSourceAdapter,wil::err_exception_policy>(
    (_QWORD *)(a1 + 384),
    a3);
  wil::com_ptr_t<IApplicationViewSwitcher,wil::err_exception_policy>::operator=((__int64 *)(a1 + 64), a4);
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::operator=((__int64 *)(a1 + 72), a5);
  wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::operator=((__int64 *)(a1 + 56), a2);
  v10 = **a6;
  v11 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = v10(a6, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, a1 + 80);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x36,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
      (const char *)(unsigned int)v12,
      v14);
  return a1;
}
