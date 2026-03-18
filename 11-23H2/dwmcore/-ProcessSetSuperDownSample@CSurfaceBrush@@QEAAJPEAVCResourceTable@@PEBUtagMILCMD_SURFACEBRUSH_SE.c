/*
 * XREFs of ?ProcessSetSuperDownSample@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSUPERDOWNSAMPLE@@@Z @ 0x180252864
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::ProcessSetSuperDownSample(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETSUPERDOWNSAMPLE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E4C48)(
           (char *)this + SDWORD2(xmmword_1803E4C48),
           &CSurfaceBrush::sc_SuperDownSample,
           (char *)a3 + 8);
}
