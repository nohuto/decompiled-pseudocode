/*
 * XREFs of _lambda_f35c72982d94b155c6e22210e02e73fe_::__lambda_f35c72982d94b155c6e22210e02e73fe_ @ 0x1803762B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f35c72982d94b155c6e22210e02e73fe___::_scalar_deleting_destructor_ @ 0x1803769F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f35c72982d94b155c6e22210e02e73fe___--_scala.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x180376AEC (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x18037642C (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_f35c72982d94b155c6e22210e02e73fe_::__lambda_f35c72982d94b155c6e22210e02e73fe_(__int64 *a1)
{
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)(a1 + 4));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
