/*
 * XREFs of ?SetCursorId@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_K@Z @ 0x1801C68E8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x180228BD8 (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetCursorId(CCursorVisual *a1, __int64 a2)
{
  *((_QWORD *)a1 + 88) = a2;
  CCursorVisual::OnCursorIdChanged(a1);
  return 0LL;
}
