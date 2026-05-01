/*
 * XREFs of ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18013AF70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x18003C5E4 (-IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18013B320 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondit.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartDismissedByZBandChange@StartWindowTelemetry@@SAXXZ @ 0x18044CD98 (-StartDismissedByZBandChange@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::ActiveZBandChangedForMonitor(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r8d
  char v7; // si
  char v8; // r14
  bool v9; // di
  HWND ForegroundWindow; // rax
  enum _TABLETMODESTATE *v11; // rdx
  TabletModeHelpers *v12; // rcx
  void (*v13)(void); // rax
  int v14; // [rsp+40h] [rbp-38h] BYREF
  char v15; // [rsp+44h] [rbp-34h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  _BYTE v17[16]; // [rsp+50h] [rbp-28h] BYREF
  int v18; // [rsp+80h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 48) )
    return 2147943568LL;
  v6 = `wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v16 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetImpl'::`2'::impl,
                       v17);
    v6 = v16;
  }
  v7 = 1;
  v14 = 0;
  v15 = 3;
  wil::details::ReportUsageToService(&unk_1807B5268, 9910473LL, (v6 >> 8) & 1, (v6 >> 9) & 1, &v14, 1, 3);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48)) )
    return 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(*(_QWORD *)(a1 + 48))
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48)) )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 144LL))(*(_QWORD *)(a1 + 48)) )
    {
      return 0LL;
    }
  }
  v9 = 1;
  ForegroundWindow = GetForegroundWindow();
  if ( (unsigned int)GetWindowBand(ForegroundWindow, &v18) )
    v9 = v18 != 13;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
    && v18 == 6
    && a3 == 6 )
  {
    v9 = 0;
  }
  if ( !v8
    && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 144LL))(*(_QWORD *)(a1 + 48))
     || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))) )
  {
    v7 = 0;
  }
  if ( !v9 )
    return 0LL;
  if ( v7 && ZBandHelpers::IsBelowImmersiveLauncher(a3) )
  {
    StartWindowTelemetry::StartDismissedByZBandChange();
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 72LL))(*(_QWORD *)(a1 + 48), 7LL);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
    || !ZBandHelpers::IsBelowImmersiveLauncher(a3) && a3 != 6 )
  {
    return 0LL;
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
  {
    if ( !v8 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 152LL))(*(_QWORD *)(a1 + 48)) )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 80LL))(*(_QWORD *)(a1 + 48));
      return 0LL;
    }
    goto LABEL_35;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(*(_QWORD *)(a1 + 48))
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48)) )
  {
LABEL_35:
    if ( TabletModeHelpers::IsTabletMode(v12, v11)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 152LL))(*(_QWORD *)(a1 + 48)) )
    {
      return 0LL;
    }
    v13 = *(void (**)(void))(**(_QWORD **)(a1 + 48) + 96LL);
    goto LABEL_38;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 152LL))(*(_QWORD *)(a1 + 48)) )
  {
    v13 = *(void (**)(void))(**(_QWORD **)(a1 + 48) + 80LL);
LABEL_38:
    v13();
  }
  return 0LL;
}
