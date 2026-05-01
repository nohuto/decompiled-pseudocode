/*
 * XREFs of ??1TouchKeyboardThemeInfo@TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18050CD34
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$34 @ 0x1802B6E5E (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$34.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$35 @ 0x1802B6E77 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$35.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18050C644 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::TouchKeyboardThemeInfo::~TouchKeyboardThemeInfo(
        TouchKeyboardExperienceManager::TouchKeyboardThemeInfo *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 480);
  std::wstring::_Tidy_deallocate((__int64)this + 448);
  std::wstring::_Tidy_deallocate((__int64)this + 416);
  std::wstring::_Tidy_deallocate((__int64)this + 384);
  std::wstring::_Tidy_deallocate((__int64)this + 352);
  std::wstring::_Tidy_deallocate((__int64)this + 320);
  std::wstring::_Tidy_deallocate((__int64)this + 288);
  std::wstring::_Tidy_deallocate((__int64)this + 256);
  std::wstring::_Tidy_deallocate((__int64)this + 224);
  std::wstring::_Tidy_deallocate((__int64)this + 192);
  std::wstring::_Tidy_deallocate((__int64)this + 160);
  std::wstring::_Tidy_deallocate((__int64)this + 128);
  std::wstring::_Tidy_deallocate((__int64)this + 96);
  std::wstring::_Tidy_deallocate((__int64)this + 64);
  std::wstring::_Tidy_deallocate((__int64)this + 32);
  std::wstring::_Tidy_deallocate((__int64)this);
}
