/*
 * XREFs of ?ProcessSetStrokeMiterLimit@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEMITERLIMIT@@@Z @ 0x18023FA20
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeMiterLimit(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEMITERLIMIT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803D2250)(
           (char *)this + SDWORD2(xmmword_1803D2250),
           &CSpriteVectorShape::sc_StrokeMiterLimit,
           (char *)a3 + 8);
}
