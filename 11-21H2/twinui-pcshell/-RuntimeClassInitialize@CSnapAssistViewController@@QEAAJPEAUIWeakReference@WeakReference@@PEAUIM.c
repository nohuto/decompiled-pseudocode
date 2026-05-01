/*
 * XREFs of ?RuntimeClassInitialize@CSnapAssistViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1804B4600
 * Callers:
 *     ??$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1804B3B80 (--$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabViewManager@@@Z @ 0x1800A255C (--4-$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabViewManager@@@Z.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x1800FE5EC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??4?$ComPtr@UIImmersiveAppCrusher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveAppCrusher@@@Z @ 0x1801167EC (--4-$ComPtr@UIImmersiveAppCrusher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveAppCrusher@@@Z.c)
 *     ??4?$ComPtr@UITabController@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180116AD0 (--4-$ComPtr@UITabController@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakReference@@@Z @ 0x1804A3094 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakRe.c)
 */

__int64 __fastcall CSnapAssistViewController::RuntimeClassInitialize(
        CSnapAssistViewController *this,
        struct IWeakReference *a2,
        __int64 (__fastcall ***a3)(struct IMultitaskingViewManager *, GUID *, char *),
        struct IImmersiveAppCrusher *a4,
        struct IApplicationViewCollection *a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a6,
        struct ITabViewManager *a7)
{
  __int64 (__fastcall *v10)(struct IMultitaskingViewManager *, GUID *, char *); // rdi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)this + 5, (__int64)a2);
  Microsoft::WRL::ComPtr<IImmersiveAppCrusher>::operator=((__int64 *)this + 7, (__int64)a4);
  Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::ITabController>::operator=(
    (__int64 *)this + 10,
    (__int64)a6);
  Microsoft::WRL::ComPtr<ITabViewManager>::operator=((__int64 *)this + 11, (__int64)a7);
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((__int64 *)this + 12, (__int64)a5);
  v10 = **a3;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 19);
  v11 = v10((struct IMultitaskingViewManager *)a3, &GUID_4026878b_100e_4920_8bc7_baeed683a086, (char *)this + 152);
  v12 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
      (const char *)(unsigned int)v11);
  return v12;
}
