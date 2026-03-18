/*
 * XREFs of ?ProcessSetOpacity@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETOPACITY@@@Z @ 0x1802129B8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDropShadow::ProcessSetOpacity(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DROPSHADOW_SETOPACITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803D1FB0)(
           (char *)this + SDWORD2(xmmword_1803D1FB0),
           &CDropShadow::sc_Opacity,
           (char *)a3 + 8);
}
