/*
 * XREFs of ?Dispose@CScratchSurface@DirectComposition@@QEAAXXZ @ 0x1800EB914
 * Callers:
 *     ?CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchSurfaceManager@2@@Z @ 0x18000BE74 (-CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchS.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     McTemplateU0x_EventWriteTransfer @ 0x1800E9380 (McTemplateU0x_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CScratchSurface::Dispose(DirectComposition::CScratchSurface *this)
{
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
    McTemplateU0x_EventWriteTransfer((__int64)this, &DCOMPEVENT_ATLAS_ENTRY_MARK_AVAILABLE, (__int64)this);
  *((_BYTE *)this + 48) = 1;
  *((_DWORD *)this + 11) = GetTickCount();
}
