/*
 * XREFs of ??_EScreenClippingBrokerImpl@@UEAAPEAXI@Z @ 0x1805F7AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIScreenClippingBroker@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1805F7A4C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIScreenClip.c)
 */

ScreenClippingBrokerImpl *__fastcall ScreenClippingBrokerImpl::`vector deleting destructor'(
        ScreenClippingBrokerImpl *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IScreenClippingBroker>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IScreenClippingBroker>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
