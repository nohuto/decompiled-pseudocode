/*
 * XREFs of ??9type_info@@QEBA_NAEBV0@@Z @ 0x180017E2C
 * Callers:
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@AEBUEngineDescription@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x18001568C (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA-AV-$uni.c)
 *     ??8DefaultSceneNodeTraversal@Engine@Spectre@@UEBA_NAEBVISceneNodeTraversal@12@@Z @ 0x180070D20 (--8DefaultSceneNodeTraversal@Engine@Spectre@@UEBA_NAEBVISceneNodeTraversal@12@@Z.c)
 *     ??8DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEBA_NAEBVISceneNodeTraversal@12@@Z @ 0x1800956F0 (--8DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEBA_NAEBVISceneNodeTraversal@12@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall type_info::operator!=(__int64 a1, __int64 a2)
{
  return (unsigned int)__std_type_info_compare(a1 + 8, a2 + 8) != 0;
}
