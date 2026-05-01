/*
 * XREFs of ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x18001DEE0
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18001EBEC (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1803CB040 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 * Callees:
 *     <none>
 */

char __fastcall CSplashScreen::_CanSendDismissedEvent(CSplashScreen *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 128) )
  {
    if ( !*((_BYTE *)this + 129) )
      return 1;
  }
  return result;
}
