/*
 * XREFs of ??_EVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x180047950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocationContextProvider@details@wil@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18004798C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocationContext.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs *__fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs::`vector deleting destructor'(
        Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>();
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
