/*
 * XREFs of ?StopProcess@InputProcessManager@@QEAAJXZ @ 0x1801B4AC4
 * Callers:
 *     ?RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputProcessProxy@@@Z @ 0x1801B4550 (-RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputPr.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801D9FA4 (--1HeatProcessor@@MEAA@XZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180035818 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z @ 0x1801B4894 (-SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z.c)
 *     ?StopProcess@InputProcessManager@InputTraceLogging@@SAXXZ @ 0x1801B4B64 (-StopProcess@InputProcessManager@InputTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall InputProcessManager::StopProcess(InputProcessManager *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  InputTraceLogging::InputProcessManager::StopProcess();
  switch ( *((_DWORD *)this + 18) )
  {
    case 1:
    case 2:
LABEL_10:
      InputProcessManager::SetInputProcessState((__int64)this, 4u, v5, v6);
      return 0LL;
    case 3:
      v8 = *((_QWORD *)this + 7);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 24LL))(v8 + 8);
      goto LABEL_10;
    case 4:
      v7 = *((_QWORD *)this + 7);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 24LL))(v7 + 8);
      *((_BYTE *)this + 76) = 0;
      break;
  }
  return 0LL;
}
