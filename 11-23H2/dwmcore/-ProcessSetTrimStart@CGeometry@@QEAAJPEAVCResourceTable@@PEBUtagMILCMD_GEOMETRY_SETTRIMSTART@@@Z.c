/*
 * XREFs of ?ProcessSetTrimStart@CGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY_SETTRIMSTART@@@Z @ 0x180211C14
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGeometry::ProcessSetTrimStart(
        CGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRY_SETTRIMSTART *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E43C0)(
           (char *)this + SDWORD2(xmmword_1803E43C0),
           &CGeometry::sc_TrimStart,
           (char *)a3 + 8);
}
