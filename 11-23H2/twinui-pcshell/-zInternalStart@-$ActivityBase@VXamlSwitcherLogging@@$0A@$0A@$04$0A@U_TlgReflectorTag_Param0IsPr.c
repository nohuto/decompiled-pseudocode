/*
 * XREFs of ?zInternalStart@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802ECCB8
 * Callers:
 *     ??$?0$$V@CreateAltTabControl@XamlSwitcherTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1807615BC (--$-0$$V@CreateAltTabControl@XamlSwitcherTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$?0$$V@CreateCachedData@XamlSwitcherTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18076166C (--$-0$$V@CreateCachedData@XamlSwitcherTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$?0$$V@NavigateAltTab@XamlSwitcherTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18076171C (--$-0$$V@NavigateAltTab@XamlSwitcherTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$?0$$V@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1807617CC (--$-0$$V@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@AEAA@U-$integral_constant@D$0A@@w.c)
 *     ??$?0_N@GetHostWindow@XamlSwitcherTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEA_N@Z @ 0x180761920 (--$-0_N@GetHostWindow@XamlSwitcherTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@$$QEA_N@Z.c)
 *     ??$?0_N@OnAltKeyUp@XamlSwitcherTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEA_N@Z @ 0x180778344 (--$-0_N@OnAltKeyUp@XamlSwitcherTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@$$QEA_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x18001C97C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802D0954 (-LockExclusive@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 */

void __fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                    v3,
                    (void (__cdecl *)())_lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1] <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
