/*
 * XREFs of _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$0 @ 0x1800F7E1F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::~forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>((_QWORD **)(a2 + 40));
}
