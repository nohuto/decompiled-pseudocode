/*
 * XREFs of ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z @ 0x180533BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x180533BC4 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::IsViewShown(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned int a2,
        unsigned __int8 *a3)
{
  *a3 = KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(
          (KeyboardHosting::TabTipAdapterPolicy *)((char *)this - 16),
          a2);
  return 0LL;
}
