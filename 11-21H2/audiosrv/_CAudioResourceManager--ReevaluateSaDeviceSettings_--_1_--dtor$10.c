/*
 * XREFs of _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$10 @ 0x180101444
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  ATL::CComHeapPtr<PacketSizeConstraints>::~CComHeapPtr<PacketSizeConstraints>((LPVOID *)(a2 + 200));
}
