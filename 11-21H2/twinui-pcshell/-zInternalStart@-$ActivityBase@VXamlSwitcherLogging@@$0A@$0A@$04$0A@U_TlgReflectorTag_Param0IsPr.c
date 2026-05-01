/*
 * XREFs of ?zInternalStart@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18041F2E4
 * Callers:
 *     ?StartActivity@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX_K@Z @ 0x18041E5CC (-StartActivity@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX_K@Z.c)
 *     ?StartActivity@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x180420B28 (-StartActivity@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@RunWindowCallback@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x1804296D0 (-StartActivity@RunWindowCallback@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowCreatedCallback@XamlSwitcherTelemetry@@QEAAXXZ @ 0x180438A20 (-StartActivity@WindowCreatedCallback@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateAltTabControl@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1805FC494 (-StartActivity@CreateAltTabControl@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateCachedData@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1805FC52C (-StartActivity@CreateCachedData@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@GetHostWindow@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1805FC5C4 (-StartActivity@GetHostWindow@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1805FC664 (-StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1805FC7B4 (-StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x18060F628 (-StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x180017490 (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18022AC64 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 */

void __fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v4);
  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                    v3,
                    _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1] <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  *(_DWORD *)v2 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v4);
}
