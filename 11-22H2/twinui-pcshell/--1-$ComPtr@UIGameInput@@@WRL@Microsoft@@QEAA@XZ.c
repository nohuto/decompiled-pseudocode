/*
 * XREFs of ??1?$ComPtr@UIGameInput@@@WRL@Microsoft@@QEAA@XZ @ 0x1801DA1CC
 * Callers:
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$3 @ 0x1802C4F64 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$3.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x1803F98A8 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<IGameInput>::~ComPtr<IGameInput>()
{
  return Microsoft::WRL::ComPtr<IGameInput>::InternalRelease();
}
