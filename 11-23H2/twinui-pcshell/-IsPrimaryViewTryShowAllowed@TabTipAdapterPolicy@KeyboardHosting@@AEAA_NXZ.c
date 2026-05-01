/*
 * XREFs of ?IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x180533B20
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180532D90 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x180533BC4 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewTryShowAllowed(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  int v2; // eax
  int v4; // ecx

  if ( !*((_BYTE *)this + 661)
    || *((_BYTE *)this + 625)
    || KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(this, *((_DWORD *)this + 164)) )
  {
    return 0;
  }
  v2 = *((_DWORD *)this + 157);
  if ( v2 != 2 )
  {
    if ( v2 == 16 )
      return *((_BYTE *)this + 608);
    return 0;
  }
  v4 = *((_DWORD *)this + 153);
  if ( !v4 )
    return 0;
  if ( v4 == 2 )
    return 1;
  else
    return *((_BYTE *)this + 609);
}
