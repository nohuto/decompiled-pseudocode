/*
 * XREFs of ??1?$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180429D24
 * Callers:
 *     _CortanaSharedExperienceManager::_RegisterMessages_::_1_::dtor$1 @ 0x18043094B (_CortanaSharedExperienceManager--_RegisterMessages_--_1_--dtor$1.c)
 *     _SearchAppExperienceManager::_RegisterMessages_::_1_::dtor$1 @ 0x18046045D (_SearchAppExperienceManager--_RegisterMessages_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::~ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::InternalRelease(a1);
}
