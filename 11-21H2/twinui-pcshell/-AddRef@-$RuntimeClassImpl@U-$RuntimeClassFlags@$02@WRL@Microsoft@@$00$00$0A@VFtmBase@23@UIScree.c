/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIScreenClippingBroker@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18020C730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IScreenClippingBroker>::AddRef(
        __int64 a1)
{
  return ScreenClippingBrokerImpl::AddRef((ScreenClippingBrokerImpl *)(a1 - 8));
}
