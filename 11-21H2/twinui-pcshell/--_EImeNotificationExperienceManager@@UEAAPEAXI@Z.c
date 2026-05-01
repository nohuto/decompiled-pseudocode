/*
 * XREFs of ??_EImeNotificationExperienceManager@@UEAAPEAXI@Z @ 0x180360100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1ImeNotificationExperienceManager@@UEAA@XZ @ 0x1803600C8 (--1ImeNotificationExperienceManager@@UEAA@XZ.c)
 */

ImeNotificationExperienceManager *__fastcall ImeNotificationExperienceManager::`vector deleting destructor'(
        ImeNotificationExperienceManager *this,
        char a2)
{
  ImeNotificationExperienceManager::~ImeNotificationExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
