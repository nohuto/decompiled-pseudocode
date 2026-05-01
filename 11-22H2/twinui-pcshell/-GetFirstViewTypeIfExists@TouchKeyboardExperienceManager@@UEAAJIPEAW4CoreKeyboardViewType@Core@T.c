/*
 * XREFs of ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@UEAAJIPEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE@Z @ 0x1805100E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18020A46C (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
        TouchKeyboardExperienceManager *this,
        int a2,
        enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *a3,
        char *a4)
{
  *a4 = TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
          (TouchKeyboardExperienceManager *)((char *)this - 200),
          a2,
          a3);
  return 0LL;
}
