/*
 * XREFs of ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18017AFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800F43A8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017B260 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@details@wil.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$StartDismissedByZBandChange@AEAKAEAKH@StartWindowTelemetry@@SAXAEAK0$$QEAH@Z @ 0x180502B34 (--$StartDismissedByZBandChange@AEAKAEAKH@StartWindowTelemetry@@SAXAEAK0$$QEAH@Z.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::ActiveZBandChangedForMonitor(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5)
{
  char v7; // bp
  char v8; // r14
  bool v10; // di
  HWND ForegroundWindow; // rax
  enum _TABLETMODESTATE *v12; // rdx
  TabletModeHelpers *v13; // rcx
  _DWORD v14[14]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
  if ( *(_QWORD *)(a1 + 48) )
  {
    v7 = 1;
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetImpl'::`2'::impl,
      a2);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48)) )
    {
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
      v10 = 1;
      ForegroundWindow = GetForegroundWindow();
      if ( (unsigned int)GetWindowBand(ForegroundWindow, &v15) )
        v10 = v15 != 13;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
        && v15 == 6
        && a3 == 6 )
      {
        v10 = 0;
      }
      if ( !v8
        && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 144LL))(*(_QWORD *)(a1 + 48))
         || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))) )
      {
        v7 = 0;
      }
      if ( v10 )
      {
        if ( v7 && (a3 == 1 || a3 == 5 || a3 == 8 || a3 == 9 || a3 == 10 || (unsigned int)(a3 - 11) <= 1) )
        {
          v14[0] = a5;
          StartWindowTelemetry::StartDismissedByZBandChange<unsigned long &,unsigned long &,int>(&v16, &v17, v14);
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 72LL))(*(_QWORD *)(a1 + 48), 7LL);
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
          && (a3 == 1 || a3 == 5 || a3 == 8 || a3 == 9 || a3 == 10 || (unsigned int)(a3 - 11) < 2 || a3 == 6) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(*(_QWORD *)(a1 + 48))
            || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48)) )
          {
            if ( !TabletModeHelpers::IsTabletMode(v13, v12)
              || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 152LL))(*(_QWORD *)(a1 + 48)) )
            {
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 96LL))(*(_QWORD *)(a1 + 48));
            }
          }
          else if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 152LL))(*(_QWORD *)(a1 + 48)) )
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 80LL))(*(_QWORD *)(a1 + 48));
          }
        }
      }
    }
    return 0LL;
  }
  return 2147943568LL;
}
