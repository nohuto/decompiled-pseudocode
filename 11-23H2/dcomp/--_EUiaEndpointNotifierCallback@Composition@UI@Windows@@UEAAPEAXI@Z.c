/*
 * XREFs of ??_EUiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUiaEndpointNotifierCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18000EB1C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUiaEndpointNotifierCal.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::UiaEndpointNotifierCallback *__fastcall Windows::UI::Composition::UiaEndpointNotifierCallback::`vector deleting destructor'(
        Windows::UI::Composition::UiaEndpointNotifierCallback *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUiaEndpointNotifierCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUiaEndpointNotifierCallback,Microsoft::WRL::FtmBase>();
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
