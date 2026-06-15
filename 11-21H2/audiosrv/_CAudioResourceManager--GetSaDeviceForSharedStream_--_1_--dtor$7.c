/*
 * XREFs of _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$7 @ 0x18006FA92
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(a2 + 80);
}
