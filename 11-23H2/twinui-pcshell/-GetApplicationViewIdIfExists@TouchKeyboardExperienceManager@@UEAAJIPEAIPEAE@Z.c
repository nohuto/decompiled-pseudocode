/*
 * XREFs of ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@UEAAJIPEAIPEAE@Z @ 0x18050FB20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z @ 0x1802096BC (-GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetApplicationViewIdIfExists(
        TouchKeyboardExperienceManager *this,
        int a2,
        unsigned int *a3,
        char *a4)
{
  *a4 = TouchKeyboardExperienceManager::GetApplicationViewIdIfExists(
          (TouchKeyboardExperienceManager *)((char *)this - 200),
          a2,
          a3);
  return 0LL;
}
