/*
 * XREFs of ?RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ @ 0x18000F4C8
 * Callers:
 *     ?DestroyContent@VisualIslandSite@Composition@UI@Windows@@MEAAXXZ @ 0x18000F450 (-DestroyContent@VisualIslandSite@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?SetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x18001597C (-SetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z.c)
 *     ?RemoveAllVisuals@Api@InteropVisual@Composition@UI@Windows@@UEAAJXZ @ 0x180157EC0 (-RemoveAllVisuals@Api@InteropVisual@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?SetRoot@CompositionIslandTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18015A164 (-SetRoot@CompositionIslandTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?RemoveAllVisuals@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJXZ @ 0x180198D00 (-RemoveAllVisuals@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?VisualRemoveAllChildren@CDevice@DirectComposition@@QEAAXI@Z @ 0x18000F564 (-VisualRemoveAllChildren@CDevice@DirectComposition@@QEAAXI@Z.c)
 *     ?DoUnlinkAndUnlock@?$TreeNodeT@VVisual@Composition@UI@Windows@@@Composition@UI@Windows@@IEAAXXZ @ 0x18006AA84 (-DoUnlinkAndUnlock@-$TreeNodeT@VVisual@Composition@UI@Windows@@@Composition@UI@Windows@@IEAAXXZ.c)
 *     ?OnVisualRemoved@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@@Z @ 0x18010153C (-OnVisualRemoved@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::RemoveAllChildren(Windows::UI::Composition::Visual *this)
{
  __int64 v2; // rcx
  struct Windows::UI::Composition::Visual *i; // rbx

  if ( Windows::UI::Composition::Visual::s_fIsVisualTreeCallbackRegistered )
  {
    for ( i = (struct Windows::UI::Composition::Visual *)*((_QWORD *)this + 18);
          i;
          i = (struct Windows::UI::Composition::Visual *)*((_QWORD *)i + 19) )
    {
      Windows::UI::Composition::CompositionDiagnosticsInterop::OnVisualRemoved(i);
    }
  }
  while ( 1 )
  {
    v2 = *((_QWORD *)this + 18);
    if ( !v2 )
      break;
    Windows::UI::Composition::TreeNodeT<Windows::UI::Composition::Visual>::DoUnlinkAndUnlock(v2 + 136);
  }
  DirectComposition::CDevice::VisualRemoveAllChildren(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32));
  return 0LL;
}
