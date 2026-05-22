/*
 * XREFs of ?StopProcess@InputProcessManager@@QEAAJXZ @ 0x180196AFC
 * Callers:
 *     ?RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputProcessProxy@@@Z @ 0x180196590 (-RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputPr.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801BBC24 (--1HeatProcessor@@MEAA@XZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D0EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z @ 0x1801968CC (-SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z.c)
 *     ?StopProcess@InputProcessManager@InputTraceLogging@@SAXXZ @ 0x180196B98 (-StopProcess@InputProcessManager@InputTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall InputProcessManager::StopProcess(InputProcessManager *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  InputTraceLogging::InputProcessManager::StopProcess();
  v7 = *((_DWORD *)this + 18);
  if ( v7 <= 0 )
    return 0LL;
  if ( v7 <= 2 )
  {
LABEL_10:
    InputProcessManager::SetInputProcessState((__int64)this, 4u, v5, v6);
    return 0LL;
  }
  if ( v7 == 3 )
  {
    v9 = *((_QWORD *)this + 7);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 24LL))(v9 + 8);
    goto LABEL_10;
  }
  if ( v7 == 4 )
  {
    v8 = *((_QWORD *)this + 7);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 24LL))(v8 + 8);
    *((_BYTE *)this + 76) = 0;
  }
  return 0LL;
}
