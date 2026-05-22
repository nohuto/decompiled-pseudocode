/*
 * XREFs of ?RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180021900
 * Callers:
 *     ?RecordUtilizationInfo@CSurfaceManager@DirectComposition@@QEAAXXZ @ 0x1800194B8 (-RecordUtilizationInfo@CSurfaceManager@DirectComposition@@QEAAXXZ.c)
 *     ?Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ @ 0x18001FAA0 (-Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ.c)
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 *     ?Initialize@CAtlasSurface@DirectComposition@@AEAAJXZ @ 0x180021834 (-Initialize@CAtlasSurface@DirectComposition@@AEAAJXZ.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ??1CAtlasSurfacePool@DirectComposition@@EEAA@XZ @ 0x18005E68C (--1CAtlasSurfacePool@DirectComposition@@EEAA@XZ.c)
 * Callees:
 *     McTemplateU0xqqqf_EventWriteTransfer @ 0x1800EA3A8 (McTemplateU0xqqqf_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::RecordUtilizationInfo(DirectComposition::CAtlasSurfacePool *this)
{
  int v2; // edx
  int v3; // r9d
  __int64 v4; // rcx
  float v5; // xmm1_4
  float v6; // xmm1_4
  char v7; // al
  float v8; // xmm1_4

  if ( (*((_BYTE *)this + 172) & 2) != 0 )
  {
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
    {
      v2 = *((_DWORD *)this + 39);
      v3 = *((_DWORD *)this + 38);
      v4 = *((_QWORD *)this + 23);
      if ( v4 < 0 )
        v5 = (float)(v4 & 1 | (unsigned int)((unsigned __int64)v4 >> 1))
           + (float)(v4 & 1 | (unsigned int)((unsigned __int64)v4 >> 1));
      else
        v5 = (float)(int)v4;
      v6 = v5 * 100.0;
      v7 = 64;
      if ( *((_DWORD *)this + 40) != 10 )
        v7 = 32;
      v8 = v6 / (float)(v2 * v3);
      McTemplateU0xqqqf_EventWriteTransfer(32, v2, (_DWORD)this, v3, v2, v7, SLOBYTE(v8));
    }
    *((_BYTE *)this + 172) &= ~2u;
  }
}
