/*
 * XREFs of ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x1800F7A0C
 * Callers:
 *     ?ProcessSetRoot@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_SETROOT@@@Z @ 0x1800F79B8 (-ProcessSetRoot@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_SETROOT@@@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x1801F5E24 (--1CDesktopTree@@UEAA@XZ.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x1801F5F68 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800474A4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800487B4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopTree::SetRootVisual(CVisual **this, CVisual **a2)
{
  unsigned int v4; // ebx
  int inserted; // eax
  __int64 v6; // rcx

  v4 = 0;
  CVisual::RemoveAllChildren(this[590]);
  if ( a2 )
  {
    inserted = CVisual::InsertChildAt(this[590], a2, 0, 0);
    v4 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, inserted, 0x1A5u);
  }
  return v4;
}
