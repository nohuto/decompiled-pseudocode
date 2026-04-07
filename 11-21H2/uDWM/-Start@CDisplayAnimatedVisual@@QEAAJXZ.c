/*
 * XREFs of ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18005BA80
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D62C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18003FA6C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x18005BB70 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ @ 0x18005BBB0 (-AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ @ 0x18005BCB0 (-InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::Start(CDisplayAnimatedVisual *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v6; // rax
  unsigned int v8; // eax

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  *((_DWORD *)this + 88) = 97;
  *((_DWORD *)this + 89) = 2;
  *((_DWORD *)this + 94) = 2;
  *((_DWORD *)this + 90) = 1;
  *((_DWORD *)this + 91) = 96;
  *((_DWORD *)this + 92) = 1;
  *((_DWORD *)this + 93) = 109;
  *((_DWORD *)this + 95) = 1;
  CDisplayAnimatedVisual::InitializeTelemetry(this);
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22));
  v5 = CDisplayAnimatedVisual::AddInstructionsForBackgroundInNewVirtualScreen(this);
  if ( v5 < 0 )
  {
    v8 = 130;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v8);
    CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
    goto LABEL_4;
  }
  v5 = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
  if ( v5 < 0 )
  {
    v8 = 135;
    goto LABEL_8;
  }
  v5 = (*(__int64 (__fastcall **)(CDisplayAnimatedVisual *))(*(_QWORD *)this + 208LL))(this);
  if ( v5 < 0 )
  {
    v8 = 137;
    goto LABEL_8;
  }
LABEL_4:
  v6 = *((_QWORD *)this + 41);
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 42) = v6;
  return (unsigned int)v5;
}
