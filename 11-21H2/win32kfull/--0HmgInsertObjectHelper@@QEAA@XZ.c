/*
 * XREFs of ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C026B168
 * Callers:
 *     hfontCreate @ 0x1C0013DE0 (hfontCreate.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0022804 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0083AA4 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C0083E2C (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00FE390 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C012A4FC (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     NtGdiCreateClientObj @ 0x1C0142AC0 (NtGdiCreateClientObj.c)
 *     EngCreateDriverObj @ 0x1C0282C50 (EngCreateDriverObj.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0291ACC (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@QEAA@XZ @ 0x1C015D4C0 (--0-$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@QEAA@XZ.c)
 */

HmgInsertObjectHelper *__fastcall HmgInsertObjectHelper::HmgInsertObjectHelper(HmgInsertObjectHelper *this)
{
  UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>(this);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
