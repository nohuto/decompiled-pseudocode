/*
 * XREFs of _lambda_0f768bc8971e0bee1fc73f6126b3910e_::__lambda_0f768bc8971e0bee1fc73f6126b3910e_ @ 0x18044BFA8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0f768bc8971e0bee1fc73f6126b3910e___::_scalar_deleting_destructor_ @ 0x18044C6C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0f768bc8971e0bee1fc73f6126b3910e___--_scala.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18044C80C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C154 (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_0f768bc8971e0bee1fc73f6126b3910e_::__lambda_0f768bc8971e0bee1fc73f6126b3910e_(__int64 *a1)
{
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)(a1 + 4));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
