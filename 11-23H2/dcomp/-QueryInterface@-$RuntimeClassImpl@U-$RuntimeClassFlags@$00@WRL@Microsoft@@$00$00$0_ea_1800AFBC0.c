/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@Windows@@UIPropertyValue@56@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IReference<Windows::Foundation::Numerics::Vector3>,Windows::Foundation::IPropertyValue,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1)
{
  return Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector3>::QueryInterface(a1 - 24);
}
