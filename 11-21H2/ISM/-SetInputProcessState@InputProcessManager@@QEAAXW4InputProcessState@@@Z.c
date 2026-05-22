/*
 * XREFs of ?SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z @ 0x1801968CC
 * Callers:
 *     ?OnConnected@InputProcessProxy@@MEAAJXZ @ 0x180195460 (-OnConnected@InputProcessProxy@@MEAAJXZ.c)
 *     ?RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputProcessProxy@@@Z @ 0x180196590 (-RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputPr.c)
 *     ?StartProcess@InputProcessManager@@QEAAJXZ @ 0x180196908 (-StartProcess@InputProcessManager@@QEAAJXZ.c)
 *     ?StopProcess@InputProcessManager@@QEAAJXZ @ 0x180196AFC (-StopProcess@InputProcessManager@@QEAAJXZ.c)
 *     ?UnregisterInputProcess@InputProcessManager@@QEAAJPEAVBamoInputProcessProxy@@@Z @ 0x180196CB4 (-UnregisterInputProcess@InputProcessManager@@QEAAJPEAVBamoInputProcessProxy@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D0EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     ?ChangeState@InputProcessManager@InputTraceLogging@@SAXW4InputProcessState@@0@Z @ 0x180195DD4 (-ChangeState@InputProcessManager@InputTraceLogging@@SAXW4InputProcessState@@0@Z.c)
 */

int __fastcall InputProcessManager::SetInputProcessState(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int result; // eax

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  result = InputTraceLogging::InputProcessManager::ChangeState(*(unsigned int *)(a1 + 72), a2);
  *(_DWORD *)(a1 + 72) = a2;
  return result;
}
