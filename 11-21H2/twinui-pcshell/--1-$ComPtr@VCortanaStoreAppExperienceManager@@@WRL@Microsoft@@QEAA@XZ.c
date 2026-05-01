/*
 * XREFs of ??1?$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1803865EC
 * Callers:
 *     _CortanaStoreAppExperienceManagerFactory::CreateInstance_::_1_::dtor$0 @ 0x180222E51 (_CortanaStoreAppExperienceManagerFactory--CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CortanaStoreAppExperienceManager_CortanaStoreAppExperienceManager__::_1_::dtor$2 @ 0x180222E63 (_Microsoft--WRL--Details--MakeAndInitialize_CortanaStoreAppExperienceManager_CortanaStoreAppExpe.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::~ComPtr<CortanaStoreAppExperienceManager>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::InternalRelease(a1);
}
