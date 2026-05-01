/*
 * XREFs of ?_ShouldUpdateForHwnd@CFrameApplicationPresentation@@AEAA_NPEAUHWND__@@@Z @ 0x18006DB58
 * Callers:
 *     ?OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z @ 0x180031E30 (-OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z.c)
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x18006D9C8 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
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
