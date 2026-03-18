/*
 * XREFs of ?ProcessSetEndPoint@CLineGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEGEOMETRY_SETENDPOINT@@@Z @ 0x18023AA8C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLineGeometry::ProcessSetEndPoint(
        CLineGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEGEOMETRY_SETENDPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E4A18)(
           (char *)this + SDWORD2(xmmword_1803E4A18),
           &CLineGeometry::sc_EndPoint,
           (char *)a3 + 8);
}
