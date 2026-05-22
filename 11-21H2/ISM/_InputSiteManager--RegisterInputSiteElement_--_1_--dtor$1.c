/*
 * XREFs of _InputSiteManager::RegisterInputSiteElement_::_1_::dtor$1 @ 0x1800572A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputSiteManager::RegisterInputSiteElement_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<InputInjectionClientProxy>::~ComPtr<InputInjectionClientProxy>(a2 + 64);
}
