/*
 * XREFs of _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$2 @ 0x1800465DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::unique_ptr<CEndpointVolumeState>::~unique_ptr<CEndpointVolumeState>((__int64 *)(a2 + 32));
}
