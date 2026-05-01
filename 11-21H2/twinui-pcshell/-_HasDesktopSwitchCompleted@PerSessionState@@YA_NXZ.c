/*
 * XREFs of ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x180065F7C
 * Callers:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180065F3C (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x180065FC4 (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 *     PerSessionState::_DoesSessionKeyExist @ 0x180066028 (PerSessionState--_DoesSessionKeyExist.c)
 *     PerSessionState::_CreateSessionKey @ 0x1800660A8 (PerSessionState--_CreateSessionKey.c)
 */

char __fastcall PerSessionState::_HasDesktopSwitchCompleted(PerSessionState *this)
{
  char result; // al
  PerSessionState *v2; // rcx

  result = byte_1807B3A29;
  if ( !byte_1807B3A29 )
  {
    if ( !(unsigned __int8)PerSessionState::_DoesSessionKeyExist(L"DesktopSwitchCompleted") )
    {
      if ( !PerSessionState::IsCurrentThreadOnInputDesktop(v2) )
        return byte_1807B3A29;
      PerSessionState::_CreateSessionKey();
    }
    result = 1;
    byte_1807B3A29 = 1;
  }
  return result;
}
