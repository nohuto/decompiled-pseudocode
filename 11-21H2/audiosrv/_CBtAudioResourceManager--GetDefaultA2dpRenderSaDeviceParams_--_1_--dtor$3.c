/*
 * XREFs of _CBtAudioResourceManager::GetDefaultA2dpRenderSaDeviceParams_::_1_::dtor$3 @ 0x180115FBC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManager::GetDefaultA2dpRenderSaDeviceParams_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  ATL::CComHeapPtr<PacketSizeConstraints>::~CComHeapPtr<PacketSizeConstraints>((LPVOID *)(a2 + 128));
}
