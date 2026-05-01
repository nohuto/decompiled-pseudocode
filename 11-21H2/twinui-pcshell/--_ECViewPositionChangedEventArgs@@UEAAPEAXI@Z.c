/*
 * XREFs of ??_ECViewPositionChangedEventArgs@@UEAAPEAXI@Z @ 0x180039150
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocationContextProvider@details@wil@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18003918C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocationContext.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CViewPositionChangedEventArgs *__fastcall CViewPositionChangedEventArgs::`vector deleting destructor'(
        CViewPositionChangedEventArgs *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>();
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
