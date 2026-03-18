/*
 * XREFs of MonitorGetAdvancedColorMetadataOverride @ 0x1C03B0488
 * Callers:
 *     ?PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1C01A07B0 (-PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0224BB0 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

__int64 __fastcall MonitorGetAdvancedColorMetadataOverride(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  struct _ERESOURCE *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v7, a1);
  if ( v7 )
  {
    v4 = *(_QWORD *)(v7 + 224);
    v5 = (struct _ERESOURCE *)(v7 + 24);
    *(_OWORD *)a2 = *(_OWORD *)(v4 + 400);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v4 + 416);
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(v4 + 424);
    v3 = 0;
    ExReleaseResourceLite(v5);
    KeLeaveCriticalRegion();
  }
  else
  {
    v3 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  return v3;
}
