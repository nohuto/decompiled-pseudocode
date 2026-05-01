/*
 * XREFs of ?HandleUtilityChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18045F700
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18008D1B0 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?OnOnScreenKeyboardVisibilityChanged@TouchKeyboardExperienceManager@@AEAAX_N@Z @ 0x1804632B4 (-OnOnScreenKeyboardVisibilityChanged@TouchKeyboardExperienceManager@@AEAAX_N@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::HandleUtilityChangeEvent(
        __int64 hWinEventHook,
        __int64 event,
        HWND hwnd,
        LONG idObject)
{
  int v5; // edi
  TouchKeyboardExperienceManager *v6; // rcx

  v5 = event;
  if ( !TouchKeyboardExperienceManager::IsSessionShuttingDown(hWinEventHook, event)
    && v5 == 35
    && TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager
    && (idObject & 1) != 0 )
  {
    TouchKeyboardExperienceManager::OnOnScreenKeyboardVisibilityChanged(v6, HIWORD(idObject) == 1);
  }
}
