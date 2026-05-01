/*
 * XREFs of ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x18009CF0C
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18009CDF4 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18030EBE0 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
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
