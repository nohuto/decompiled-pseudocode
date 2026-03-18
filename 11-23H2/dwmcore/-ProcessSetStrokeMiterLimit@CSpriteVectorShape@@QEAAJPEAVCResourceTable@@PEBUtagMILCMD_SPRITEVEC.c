/*
 * XREFs of ?ProcessSetStrokeMiterLimit@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEMITERLIMIT@@@Z @ 0x18001EBB0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeMiterLimit(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEMITERLIMIT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E4B30)(
           (char *)this + SDWORD2(xmmword_1803E4B30),
           &CSpriteVectorShape::sc_StrokeMiterLimit,
           (char *)a3 + 8);
}
