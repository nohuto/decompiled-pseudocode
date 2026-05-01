/*
 * XREFs of ?AddRef@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAKXZ @ 0x1801F80B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::AddRef(a1 - 24);
}
