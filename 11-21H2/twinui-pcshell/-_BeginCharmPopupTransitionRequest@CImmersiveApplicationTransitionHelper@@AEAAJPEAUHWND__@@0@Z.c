/*
 * XREFs of ?_BeginCharmPopupTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x1802F1EA8
 * Callers:
 *     ?BeginCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUCHARM_TRANSITION_INFORMATION@@@Z @ 0x1802F1A00 (-BeginCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUCHARM_TRANSITION_IN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::_BeginCharmPopupTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        HWND a2,
        HWND a3)
{
  int v3; // ebx

  v3 = 0;
  if ( a2 )
  {
    v3 = DwmpBeginTransitionRequest(18LL);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v3 = DwmpTransitionWindow(a2, 270532622LL);
    if ( v3 < 0 )
      return (unsigned int)v3;
    *((_DWORD *)this + 14) = 18;
  }
  if ( a3 )
  {
    v3 = DwmpBeginTransitionRequest(19LL);
    if ( v3 >= 0 )
    {
      v3 = DwmpTransitionWindow(a3, 805306384LL);
      if ( v3 >= 0 )
      {
        DwmFlush();
        *((_DWORD *)this + 15) = 19;
      }
    }
  }
  return (unsigned int)v3;
}
