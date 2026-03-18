/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027B78
 * Callers:
 *     GreOffsetRgn @ 0x1C001B040 (GreOffsetRgn.c)
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0027800 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C0027A70 (SetRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002A8D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     GreGetRegionData @ 0x1C008B460 (GreGetRegionData.c)
 *     EngDeleteRgn @ 0x1C008E120 (EngDeleteRgn.c)
 *     bDeleteRegion @ 0x1C008E1A0 (bDeleteRegion.c)
 *     GreSetRectRgn @ 0x1C008E9A0 (GreSetRectRgn.c)
 *     GreRectInRegion @ 0x1C008F340 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C0092B40 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x1C00980D0 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x1C0098230 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x1C00B76F0 (GreIsValidRegion.c)
 *     GreCopyVisRgn @ 0x1C00CA430 (GreCopyVisRgn.c)
 *     EngEqualRgn @ 0x1C0177A80 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0052470 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C00D8C28 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 8);
}
