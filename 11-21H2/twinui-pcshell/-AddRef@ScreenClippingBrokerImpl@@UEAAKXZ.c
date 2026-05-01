/*
 * XREFs of ?AddRef@ScreenClippingBrokerImpl@@UEAAKXZ @ 0x18053D000
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIScreenClippingBroker@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18020C730 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIScree.c)
 *     ?AddRef@ScreenClippingBrokerImpl@@WCI@EAAKXZ @ 0x18020C740 (-AddRef@ScreenClippingBrokerImpl@@WCI@EAAKXZ.c)
 *     ?AddRef@ScreenClippingBrokerImpl@@WDA@EAAKXZ @ 0x18020C750 (-AddRef@ScreenClippingBrokerImpl@@WDA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall ScreenClippingBrokerImpl::AddRef(ScreenClippingBrokerImpl *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 8);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
