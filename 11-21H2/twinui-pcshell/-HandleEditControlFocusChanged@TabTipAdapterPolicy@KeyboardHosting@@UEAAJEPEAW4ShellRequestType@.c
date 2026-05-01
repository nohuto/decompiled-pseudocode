/*
 * XREFs of ?HandleEditControlFocusChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804816C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleEditControlFocusChanged@AEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18022F7DA (--$HandleEditControlFocusChanged@AEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKe.c)
 *     ??$HandleEditControlFocusChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18047F39C (--$HandleEditControlFocusChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKe.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlFocusChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        __int64 a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  char v4; // di
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = a2;
  if ( a3 )
  {
    *(_DWORD *)a3 = 0;
    TouchKeyboardExperienceTelemetryLogger::HandleEditControlFocusChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
      &v6,
      (char *)a3);
  }
  else
  {
    TouchKeyboardExperienceTelemetryLogger::HandleEditControlFocusChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType const &>(
      &v6,
      a2);
  }
  *((_BYTE *)this + 460) = 0;
  *((_BYTE *)this + 504) = v4 != 0;
  return 0LL;
}
