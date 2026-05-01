/*
 * XREFs of ?OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18035A290
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18035CEA4 (-_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18035D158 (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnAllowForegroundRightsRequested(
        CortanaExperienceManagerNotification *this)
{
  __int64 v1; // rdx

  if ( CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)((char *)this - 8)) )
    CortanaSharedExperienceManager::_AllowForegroundRights(*(CortanaSharedExperienceManager **)(v1 + 48));
}
