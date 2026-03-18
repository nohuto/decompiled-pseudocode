/*
 * XREFs of ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C0345B20
 * Callers:
 *     ?ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z @ 0x1C034570C (-ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0346710 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C0346A50 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0346F60 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     McTemplateK0pqqqggggtqqqggggtqgggg_EtwWriteTransfer @ 0x1C005A348 (McTemplateK0pqqqggggtqqqggggtqgggg_EtwWriteTransfer.c)
 *     ?CreatePerfDataWorkerThreadIfNeeded@DXGGLOBAL@@QEAAXXZ @ 0x1C03098D8 (-CreatePerfDataWorkerThreadIfNeeded@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::ReportStats(DXGTRACKEDWORKLOAD *this)
{
  __int64 v1; // rdx
  DXGGLOBAL *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 && (qword_1C012F870 & 0x10000000) != 0 )
    McTemplateK0pqqqggggtqqqggggtqgggg_EtwWriteTransfer(
      (__int64)this,
      *((unsigned __int8 *)this + 296),
      *((unsigned __int8 *)this + 184),
      (__int64)this,
      *((_DWORD *)this + 34),
      *((_DWORD *)this + 35),
      *((_DWORD *)this + 36),
      *(_OWORD *)((char *)this + 152),
      *((_QWORD *)this + 20),
      *(_OWORD *)((char *)this + 168),
      *((_QWORD *)this + 22),
      *((_BYTE *)this + 184),
      *((_DWORD *)this + 62),
      *((_DWORD *)this + 63),
      *((_DWORD *)this + 64),
      *(_OWORD *)((char *)this + 264),
      *((_QWORD *)this + 34),
      *(_OWORD *)((char *)this + 280),
      *((_QWORD *)this + 36),
      *((_BYTE *)this + 296),
      *((_DWORD *)this + 48),
      *(_OWORD *)((char *)this + 200),
      *((_QWORD *)this + 26),
      *(_OWORD *)((char *)this + 216),
      *((_QWORD *)this + 28));
  DXGGLOBAL_GetGlobal();
  DXGGLOBAL::CreatePerfDataWorkerThreadIfNeeded(v2, v1, v3, v4);
}
