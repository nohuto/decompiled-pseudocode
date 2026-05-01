/*
 * XREFs of ?IsAutoInvokeInDesktopModeEnabled@TabTipAdapterPolicy@KeyboardHosting@@AEBA_NXZ @ 0x180482328
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481930 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     <none>
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IsAutoInvokeInDesktopModeEnabled(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 510) || *((_BYTE *)this + 511) )
    return 1;
  return result;
}
