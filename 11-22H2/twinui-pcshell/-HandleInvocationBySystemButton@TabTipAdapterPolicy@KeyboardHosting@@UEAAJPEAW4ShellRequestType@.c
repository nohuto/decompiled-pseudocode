/*
 * XREFs of ?HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180533190
 * Callers:
 *     <none>
 * Callees:
 *     ??$HandleInvocationBySystemButton@AEB_NAEB_NAEAU?$atomic@_N@std@@AEAU12@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N0AEAU?$atomic@_N@std@@1AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180530850 (--$HandleInvocationBySystemButton@AEB_NAEB_NAEAU-$atomic@_N@std@@AEAU12@AEAW4ShellRequestType@Te.c)
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x180533BC4 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInvocationBySystemButton(
        KeyboardHosting::TabTipAdapterPolicy *this,
        enum Windows::Internal::Shell::Text::ShellRequestType *a2)
{
  char v5; // [rsp+40h] [rbp+8h] BYREF
  bool IsViewShownInternal; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  IsViewShownInternal = KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(this, *((_DWORD *)this + 164));
  v5 = *((_BYTE *)this + 660);
  *((_BYTE *)this + 660) = 1;
  if ( *((_BYTE *)this + 661) && !*((_BYTE *)this + 625) )
    *(_DWORD *)a2 = 1;
  TouchKeyboardExperienceTelemetryLogger::HandleInvocationBySystemButton<bool const &,bool const &,std::atomic<bool> &,std::atomic<bool> &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    (char *)&IsViewShownInternal,
    &v5,
    (char *)this + 625,
    (char *)this + 661,
    (char *)a2);
  return 0LL;
}
