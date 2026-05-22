/*
 * XREFs of ??1CTileClump@DirectComposition@@MEAA@XZ @ 0x180036EB4
 * Callers:
 *     ??_GCTileClump@DirectComposition@@MEAAPEAXI@Z @ 0x180036E70 (--_GCTileClump@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x180038924 (-EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??1UnavailableRegion@DirectComposition@@QEAA@XZ @ 0x18008A770 (--1UnavailableRegion@DirectComposition@@QEAA@XZ.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800E9380 (McTemplateU0x_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CTileClump::~CTileClump(DirectComposition::CTileClump *this)
{
  DirectComposition::CBitmapInfoBack *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdi
  DirectComposition::UnavailableRegion *v5; // rsi

  *(_QWORD *)this = &DirectComposition::CTileClump::`vftable';
  v2 = (DirectComposition::CBitmapInfoBack *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    DirectComposition::CBitmapInfoBack::EndDraw(v2);
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(*((_QWORD *)this + 10));
  }
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 32) = 0LL;
    v2 = (DirectComposition::CBitmapInfoBack *)*((_QWORD *)this + 9);
    if ( v2 )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v2);
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
    McTemplateU0x_EventWriteTransfer(v2, &DCOMPEVENT_DESTROY_CLUMP, this);
  v4 = 4LL;
  v5 = (DirectComposition::CTileClump *)((char *)this + 496);
  do
  {
    v5 = (DirectComposition::UnavailableRegion *)((char *)v5 - 80);
    DirectComposition::UnavailableRegion::~UnavailableRegion(v5);
    --v4;
  }
  while ( v4 );
  FastRegion::CRegion::FreeMemory((DirectComposition::CTileClump *)((char *)this + 96));
}
