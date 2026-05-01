/*
 * XREFs of ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x180463F90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BC7F0 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BCA90 (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::OobeCompletedCallback(TouchKeyboardExperienceManager *this)
{
  TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability(this);
  TouchKeyboardExperienceManager::UpdateOobeRunningState(this);
  if ( *((_QWORD *)this + 145) )
  {
    UnregisterWaitUntilOOBECompleted();
    *((_QWORD *)this + 145) = 0LL;
  }
}
