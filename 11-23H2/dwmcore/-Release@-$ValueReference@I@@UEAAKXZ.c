/*
 * XREFs of ?Release@?$ValueReference@I@@UEAAKXZ @ 0x180297A30
 * Callers:
 *     ?Release@?$ValueReference@I@@W7EAAKXZ @ 0x18011F150 (-Release@-$ValueReference@I@@W7EAAKXZ.c)
 *     ?Release@?$ValueReference@I@@WBA@EAAKXZ @ 0x18011F170 (-Release@-$ValueReference@I@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ValueReference<unsigned int>::Release(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>::Release(a1);
}
