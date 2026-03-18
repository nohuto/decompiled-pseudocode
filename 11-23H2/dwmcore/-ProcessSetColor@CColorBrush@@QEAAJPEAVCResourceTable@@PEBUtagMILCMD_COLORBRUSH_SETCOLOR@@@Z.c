/*
 * XREFs of ?ProcessSetColor@CColorBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORBRUSH_SETCOLOR@@@Z @ 0x1800EA2B8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorBrush::ProcessSetColor(
        CColorBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COLORBRUSH_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E4360)(
           (char *)this + SDWORD2(xmmword_1803E4360),
           &CColorBrush::sc_Color,
           (char *)a3 + 8);
}
