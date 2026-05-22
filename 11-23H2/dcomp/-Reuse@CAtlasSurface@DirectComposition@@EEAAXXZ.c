/*
 * XREFs of ?Reuse@CAtlasSurface@DirectComposition@@EEAAXXZ @ 0x18008ADF0
 * Callers:
 *     ?Reuse@CAtlasSurface@DirectComposition@@QEAAXIIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@@Z @ 0x18000EB4C (-Reuse@CAtlasSurface@DirectComposition@@QEAAXIIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqqqqx_EventWriteTransfer @ 0x1800E93DC (McTemplateU0xqqqqx_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CAtlasSurface::Reuse(DirectComposition::CAtlasSurface *this)
{
  int v2; // edx

  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
  {
    v2 = *((_DWORD *)this + 18);
    McTemplateU0xqqqqx_EventWriteTransfer(
      (_DWORD)this,
      (unsigned int)&DCOMPEVENT_ATLAS_ENTRY_REUSE,
      *((_QWORD *)this + 6),
      *((_DWORD *)this + 14),
      *((_DWORD *)this + 15),
      *((_BYTE *)this + 64) + (v2 & 1) + ((v2 & 2) != 0),
      *((_BYTE *)this + 68) + ((v2 & 4) != 0) + ((v2 & 8) != 0),
      (_BYTE)this - 16);
  }
  (*(void (__fastcall **)(DirectComposition::CAtlasSurface *, __int64))(*(_QWORD *)this + 40LL))(this, 2LL);
  *((_DWORD *)this + 2) = 2;
}
