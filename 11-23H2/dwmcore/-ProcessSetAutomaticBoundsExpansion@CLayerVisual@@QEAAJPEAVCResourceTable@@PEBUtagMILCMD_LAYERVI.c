/*
 * XREFs of ?ProcessSetAutomaticBoundsExpansion@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION@@@Z @ 0x1800F5470
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLayerVisual::ProcessSetAutomaticBoundsExpansion(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION *a3)
{
  *((_BYTE *)this + 728) = *((_DWORD *)a3 + 2) != 0;
  return 0LL;
}
