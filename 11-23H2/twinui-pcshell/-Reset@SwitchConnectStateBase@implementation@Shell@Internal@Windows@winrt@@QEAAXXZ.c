/*
 * XREFs of ?Reset@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180145154
 * Callers:
 *     ?Reset@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801450F0 (-Reset@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::Reset(
        winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  winrt::com_ptr<ITouchSwipe>::operator=(this, &v2);
  if ( v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v2);
  v2 = 0LL;
  winrt::com_ptr<ITouchSwipe>::operator=((char *)this + 24, &v2);
  if ( v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v2);
}
