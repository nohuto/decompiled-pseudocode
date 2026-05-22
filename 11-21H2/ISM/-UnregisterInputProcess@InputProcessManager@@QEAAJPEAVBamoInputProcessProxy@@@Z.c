/*
 * XREFs of ?UnregisterInputProcess@InputProcessManager@@QEAAJPEAVBamoInputProcessProxy@@@Z @ 0x180196CB4
 * Callers:
 *     ?OnDisconnected@InputProcessProxy@@MEAAJXZ @ 0x180195540 (-OnDisconnected@InputProcessProxy@@MEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D0EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z @ 0x1801968CC (-SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z.c)
 *     ?StartProcess@InputProcessManager@@QEAAJXZ @ 0x180196908 (-StartProcess@InputProcessManager@@QEAAJXZ.c)
 *     ?UnregisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z @ 0x180196D20 (-UnregisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z.c)
 */

__int64 __fastcall InputProcessManager::UnregisterInputProcess(
        InputProcessManager *this,
        struct BamoInputProcessProxy *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  InputTraceLogging::InputProcessManager::UnregisterProcess(a2);
  v8 = (__int64 *)((char *)this + 56);
  if ( *((_QWORD *)this + 7) && (struct BamoInputProcessProxy *)*v8 == a2 )
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(v8);
  InputProcessManager::SetInputProcessState((__int64)this, 0, v6, v7);
  if ( *((_BYTE *)this + 76) )
  {
    InputProcessManager::StartProcess(this, v9, v10, v11);
    *((_BYTE *)this + 76) = 0;
  }
  return 0LL;
}
