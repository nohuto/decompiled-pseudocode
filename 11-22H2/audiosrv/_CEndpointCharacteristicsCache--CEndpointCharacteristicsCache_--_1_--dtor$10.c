/*
 * XREFs of _CEndpointCharacteristicsCache::CEndpointCharacteristicsCache_::_1_::dtor$10 @ 0x18007DCA7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristicsCache::CEndpointCharacteristicsCache_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return std::list<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>::~list<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(*(_QWORD *)(a2 + 56) + 8LL);
}
