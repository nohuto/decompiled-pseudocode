/*
 * XREFs of ?UpdateHotkeyRegistrations@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1800A8E40
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_97bd317dfbb19e24b4bfc3738a3f0e1d___::Run @ 0x180073DA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_97bd317dfbb19e24b4bfc3738a3f0e1d___--Run.c)
 *     ?RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A7650 (-RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     CreationThreadDispatcher::RunAsync__lambda_21a77d8432acb5502686125a77e03100___ @ 0x1801D9ECC (CreationThreadDispatcher--RunAsync__lambda_21a77d8432acb5502686125a77e03100___.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::UpdateHotkeyRegistrations(GamingOverlayExperienceManager *this)
{
  if ( *((_QWORD *)this + 102) )
    CreationThreadDispatcher::RunAsync__lambda_21a77d8432acb5502686125a77e03100___(*((_QWORD *)this + 102), this);
  return 0LL;
}
