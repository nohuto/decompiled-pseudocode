/*
 * XREFs of _lambda_524e7201540b0d78c05a86380e3a64a5_::__lambda_524e7201540b0d78c05a86380e3a64a5_ @ 0x180376280
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5___::_scalar_deleting_destructor_ @ 0x1803769A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5___--_scala.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x180376AEC (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x18037642C (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_524e7201540b0d78c05a86380e3a64a5_::__lambda_524e7201540b0d78c05a86380e3a64a5_(__int64 *a1)
{
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)(a1 + 2));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
