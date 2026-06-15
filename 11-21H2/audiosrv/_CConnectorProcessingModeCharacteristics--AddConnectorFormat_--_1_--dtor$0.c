/*
 * XREFs of _CConnectorProcessingModeCharacteristics::AddConnectorFormat_::_1_::dtor$0 @ 0x18006F016
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectorProcessingModeCharacteristics::AddConnectorFormat_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CConnectorFormatCharacteristics>::~unique_ptr<CConnectorFormatCharacteristics>(a2 + 32);
}
