/*
 * XREFs of ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x180515380
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F0DD4 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F1018 (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::OobeCompletedCallback(TouchKeyboardExperienceManager *this)
{
  TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability(this);
  TouchKeyboardExperienceManager::UpdateOobeRunningState(this);
  if ( *((_QWORD *)this + 120) )
  {
    UnregisterWaitUntilOOBECompleted();
    *((_QWORD *)this + 120) = 0LL;
  }
}
