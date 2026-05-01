/*
 * XREFs of ??1TouchKeyboardThemeInfo@TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18045B50C
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$36 @ 0x180217CC2 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$36.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$37 @ 0x180217CDB (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$37.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18045B060 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::TouchKeyboardThemeInfo::~TouchKeyboardThemeInfo(
        TouchKeyboardExperienceManager::TouchKeyboardThemeInfo *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 408);
  std::wstring::_Tidy_deallocate((__int64)this + 376);
  std::wstring::_Tidy_deallocate((__int64)this + 344);
  std::wstring::_Tidy_deallocate((__int64)this + 304);
  std::wstring::_Tidy_deallocate((__int64)this + 272);
  std::wstring::_Tidy_deallocate((__int64)this + 232);
  std::wstring::_Tidy_deallocate((__int64)this + 200);
  std::wstring::_Tidy_deallocate((__int64)this + 168);
  std::wstring::_Tidy_deallocate((__int64)this + 136);
  std::wstring::_Tidy_deallocate((__int64)this + 96);
  std::wstring::_Tidy_deallocate((__int64)this + 64);
  std::wstring::_Tidy_deallocate((__int64)this + 32);
  std::wstring::_Tidy_deallocate((__int64)this);
}
