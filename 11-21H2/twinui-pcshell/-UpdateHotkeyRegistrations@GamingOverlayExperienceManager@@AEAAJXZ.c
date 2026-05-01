/*
 * XREFs of ?UpdateHotkeyRegistrations@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18011EC20
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_97bd317dfbb19e24b4bfc3738a3f0e1d___::Run @ 0x180044580 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_97bd317dfbb19e24b4bfc3738a3f0e1d___--Run.c)
 *     ?RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18011EE80 (-RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     CreationThreadDispatcher::RunAsync__lambda_e92727e27818cbb1af971258cc43279a___ @ 0x18011EC50 (CreationThreadDispatcher--RunAsync__lambda_e92727e27818cbb1af971258cc43279a___.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::UpdateHotkeyRegistrations(GamingOverlayExperienceManager *this)
{
  if ( *((_QWORD *)this + 97) )
    CreationThreadDispatcher::RunAsync__lambda_e92727e27818cbb1af971258cc43279a___(*((_QWORD *)this + 97), this);
  return 0LL;
}
