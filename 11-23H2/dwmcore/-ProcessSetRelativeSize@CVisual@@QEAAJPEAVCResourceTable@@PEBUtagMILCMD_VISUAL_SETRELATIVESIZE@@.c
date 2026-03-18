/*
 * XREFs of ?ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@@Z @ 0x180131ADC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1800B4280 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRelativeSize(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETRELATIVESIZE *a3)
{
  CVisual::SetRelativeSize(
    this,
    COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a3 + 2)),
    COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a3 + 3)));
  return 0LL;
}
