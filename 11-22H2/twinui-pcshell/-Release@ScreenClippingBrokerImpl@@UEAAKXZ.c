/*
 * XREFs of ?Release@ScreenClippingBrokerImpl@@UEAAKXZ @ 0x1805F8120
 * Callers:
 *     ?Release@ScreenClippingBrokerImpl@@W7EAAKXZ @ 0x1802A85A0 (-Release@ScreenClippingBrokerImpl@@W7EAAKXZ.c)
 *     ?Release@ScreenClippingBrokerImpl@@WCI@EAAKXZ @ 0x1802A85B0 (-Release@ScreenClippingBrokerImpl@@WCI@EAAKXZ.c)
 *     ?Release@ScreenClippingBrokerImpl@@WDA@EAAKXZ @ 0x1802A85C0 (-Release@ScreenClippingBrokerImpl@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ScreenClippingBrokerImpl::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IScreenClippingBroker>::Release(this);
}
