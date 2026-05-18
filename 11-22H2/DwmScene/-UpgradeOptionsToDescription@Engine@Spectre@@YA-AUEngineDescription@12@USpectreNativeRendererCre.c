/*
 * XREFs of ?UpgradeOptionsToDescription@Engine@Spectre@@YA?AUEngineDescription@12@USpectreNativeRendererCreateOptions@@@Z @ 0x180037DDC
 * Callers:
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@PEBUSpectreNativeRendererCreateOptions@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x1800159F4 (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectr_ea_1800159F4.c)
 * Callees:
 *     ??0EngineDescription@Engine@Spectre@@QEAA@XZ @ 0x18003145C (--0EngineDescription@Engine@Spectre@@QEAA@XZ.c)
 */

__int64 __fastcall Spectre::Engine::UpgradeOptionsToDescription(Spectre::Engine::EngineDescription *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  Spectre::Engine::EngineDescription::EngineDescription(a1);
  v2 = *(_QWORD *)(v1 + 48);
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 56);
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(v1 + 40);
  *(_BYTE *)(v3 + 28) = *(_BYTE *)(v1 + 92);
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v1 + 80);
  *(_DWORD *)(v3 + 40) = *(_DWORD *)(v1 + 4);
  *(_DWORD *)(v3 + 76) = *(_DWORD *)(v1 + 72);
  *(_DWORD *)(v3 + 80) = *(_DWORD *)(v1 + 76);
  *(_DWORD *)(v3 + 60) = *(_DWORD *)(v1 + 36);
  *(_QWORD *)(v3 + 48) = *(_QWORD *)(v1 + 16);
  *(_DWORD *)(v3 + 84) = *(_DWORD *)(v1 + 84);
  *(_BYTE *)(v3 + 64) = *(_BYTE *)(v1 + 44);
  *(_DWORD *)(v3 + 72) = *(_DWORD *)(v1 + 68);
  *(_DWORD *)(v3 + 68) = *(_DWORD *)(v1 + 64);
  *(_DWORD *)(v3 + 56) = *(_DWORD *)(v1 + 32);
  *(_DWORD *)(v3 + 128) = *(_DWORD *)(v1 + 88);
  *(_DWORD *)(v3 + 136) = *(_DWORD *)v1;
  *(_QWORD *)(v3 + 144) = *(_QWORD *)(v1 + 8);
  *(_QWORD *)(v3 + 152) = *(_QWORD *)(v1 + 24);
  result = v3;
  *(_QWORD *)v3 = v2;
  return result;
}
