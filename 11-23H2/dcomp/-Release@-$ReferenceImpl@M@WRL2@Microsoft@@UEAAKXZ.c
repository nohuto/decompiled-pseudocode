/*
 * XREFs of ?Release@?$ReferenceImpl@M@WRL2@Microsoft@@UEAAKXZ @ 0x18013A580
 * Callers:
 *     ?Release@?$ReferenceImpl@M@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AFFA0 (-Release@-$ReferenceImpl@M@WRL2@Microsoft@@W7EAAKXZ.c)
 *     ?Release@?$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AFFC0 (-Release@-$ReferenceImpl@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@WBA@EAAKXZ.c)
 *     ?Release@?$ReferenceImpl@M@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800AFFE0 (-Release@-$ReferenceImpl@M@WRL2@Microsoft@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL2::ReferenceImpl<float>::Release(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IReference<float>,Windows::Foundation::IPropertyValue,Microsoft::WRL::FtmBase>::Release(a1);
}
