/*
 * XREFs of ?RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputProcessProxy@@@Z @ 0x1801B4550
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180035818 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     ??4?$ComPtr@VBamoInputProcessProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVBamoInputProcessProxy@@@Z @ 0x1801B3AB0 (--4-$ComPtr@VBamoInputProcessProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVBamoInputProcessProxy@@@Z.c)
 *     ?RegisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z @ 0x1801B45B0 (-RegisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z @ 0x1801B4894 (-SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z.c)
 *     ?StopProcess@InputProcessManager@@QEAAJXZ @ 0x1801B4AC4 (-StopProcess@InputProcessManager@@QEAAJXZ.c)
 */

__int64 __fastcall InputProcessManager::RegisterInputProcess(
        InputProcessManager *this,
        struct BamoInputProcessManagerStub *a2,
        struct BamoInputProcessProxy *a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  InputTraceLogging::InputProcessManager::RegisterProcess(a3);
  Microsoft::WRL::ComPtr<BamoInputProcessProxy>::operator=((__int64 *)this + 7, (void (__fastcall ***)(_QWORD))a3);
  if ( *((_DWORD *)this + 18) == 4 )
    InputProcessManager::StopProcess(this);
  else
    InputProcessManager::SetInputProcessState(this, 3LL);
  return 0LL;
}
