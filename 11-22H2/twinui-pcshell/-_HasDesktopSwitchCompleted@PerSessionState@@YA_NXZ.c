/*
 * XREFs of ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1800F45C0
 * Callers:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1800F4580 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     PerSessionState::_CreateSessionKey @ 0x1800F44E4 (PerSessionState--_CreateSessionKey.c)
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x1800F4608 (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 *     PerSessionState::_DoesSessionKeyExist @ 0x1800F466C (PerSessionState--_DoesSessionKeyExist.c)
 */

char __fastcall PerSessionState::_HasDesktopSwitchCompleted(PerSessionState *this)
{
  char result; // al
  PerSessionState *v2; // rcx
  HKEY v3; // rcx

  result = byte_18098D6E1;
  if ( !byte_18098D6E1 )
  {
    if ( !(unsigned __int8)PerSessionState::_DoesSessionKeyExist(L"DesktopSwitchCompleted") )
    {
      if ( !PerSessionState::IsCurrentThreadOnInputDesktop(v2) )
        return byte_18098D6E1;
      PerSessionState::_CreateSessionKey(v3);
    }
    result = 1;
    byte_18098D6E1 = 1;
  }
  return result;
}
