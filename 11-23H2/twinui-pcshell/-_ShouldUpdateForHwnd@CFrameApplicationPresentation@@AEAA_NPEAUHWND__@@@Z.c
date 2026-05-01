/*
 * XREFs of ?_ShouldUpdateForHwnd@CFrameApplicationPresentation@@AEAA_NPEAUHWND__@@@Z @ 0x180028D88
 * Callers:
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x180028BF8 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 *     ?OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z @ 0x18005CFE0 (-OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CFrameApplicationPresentation::_ShouldUpdateForHwnd(CFrameApplicationPresentation *this, HWND a2)
{
  HWND v2; // rcx
  char result; // al

  v2 = (HWND)**((_QWORD **)this + 14);
  result = 0;
  if ( a2 && (a2 == v2 || !v2) )
    return 1;
  return result;
}
