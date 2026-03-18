/*
 * XREFs of ?SetCursorId@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_K@Z @ 0x1801C6418
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x180228668 (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetCursorId(CCursorVisual *a1, __int64 a2)
{
  *((_QWORD *)a1 + 88) = a2;
  CCursorVisual::OnCursorIdChanged(a1);
  return 0LL;
}
