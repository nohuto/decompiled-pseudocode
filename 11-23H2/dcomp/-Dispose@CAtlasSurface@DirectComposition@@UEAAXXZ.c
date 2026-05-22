/*
 * XREFs of ?Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ @ 0x18001FAA0
 * Callers:
 *     ?DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z @ 0x18001E48C (-DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z.c)
 *     ?DisposeAndDeleteWhitePixelSurface@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x18001EB64 (-DisposeAndDeleteWhitePixelSurface@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ??_ECAtlasSurface@DirectComposition@@EEAAPEAXI@Z @ 0x1800217B0 (--_ECAtlasSurface@DirectComposition@@EEAAPEAXI@Z.c)
 *     ??1CAtlasSurfacePool@DirectComposition@@EEAA@XZ @ 0x18005E68C (--1CAtlasSurfacePool@DirectComposition@@EEAA@XZ.c)
 * Callees:
 *     ?NotifyDisposeSurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x18001F284 (-NotifyDisposeSurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z.c)
 *     ?RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180021900 (-RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqqqqx_EventWriteTransfer @ 0x1800E93DC (McTemplateU0xqqqqx_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CAtlasSurface::Dispose(DirectComposition::CAtlasSurface *this)
{
  DirectComposition::CAtlasSurface **v2; // rcx

  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16, 5LL);
  *((_DWORD *)this + 6) = 5;
  DirectComposition::CAtlasSurfacePool::RecordUtilizationInfo(*((DirectComposition::CAtlasSurfacePool **)this + 8));
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
    McTemplateU0xqqqqx_EventWriteTransfer(
      *((_DWORD *)this + 22) & 1,
      (unsigned int)&DCOMPEVENT_ATLAS_ENTRY_FREE,
      *((_QWORD *)this + 8),
      *((_DWORD *)this + 18),
      *((_DWORD *)this + 19),
      *((_BYTE *)this + 80) + (*((_DWORD *)this + 22) & 1) + ((*((_DWORD *)this + 22) & 2) != 0),
      *((_BYTE *)this + 84) + ((*((_DWORD *)this + 22) & 4) != 0) + ((*((_DWORD *)this + 22) & 8) != 0),
      (char)this);
  v2 = (DirectComposition::CAtlasSurface **)*((_QWORD *)this + 8);
  if ( v2[25] != this )
    DirectComposition::CAtlasSurfacePool::NotifyDisposeSurface((DirectComposition::CAtlasSurfacePool *)v2, this);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
}
