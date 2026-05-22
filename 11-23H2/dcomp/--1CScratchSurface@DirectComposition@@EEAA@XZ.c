/*
 * XREFs of ??1CScratchSurface@DirectComposition@@EEAA@XZ @ 0x1800FAD34
 * Callers:
 *     ??_ECScratchSurface@DirectComposition@@EEAAPEAXI@Z @ 0x1800FAD80 (--_ECScratchSurface@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z @ 0x180038AD0 (--$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800E9380 (McTemplateU0x_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CScratchSurface::~CScratchSurface(DirectComposition::CScratchSurface *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DirectComposition::CScratchSurface::`vftable';
  ReleaseInterface<ID3D11Texture2D>((__int64 *)this + 3);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
    McTemplateU0x_EventWriteTransfer(v2, &DCOMPEVENT_ATLAS_FREE, (__int64)this);
}
