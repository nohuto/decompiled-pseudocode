/*
 * XREFs of _CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor$1 @ 0x18010044F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(a2 + 96);
}
