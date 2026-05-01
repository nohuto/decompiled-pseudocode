/*
 * XREFs of ?Reset@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180144E90
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::Reset(
        winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator *this)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  winrt::com_ptr<ITouchSwipe>::operator=((char *)this + 48, &v1);
  if ( v1 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v1);
}
