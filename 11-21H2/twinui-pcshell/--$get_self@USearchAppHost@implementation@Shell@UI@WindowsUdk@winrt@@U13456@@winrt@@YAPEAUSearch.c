/*
 * XREFs of ??$get_self@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@@winrt@@YAPEAUSearchAppHost@implementation@Shell@UI@WindowsUdk@0@AEBU13450@@Z @ 0x18019A344
 * Callers:
 *     ?WorkAreaMayHaveChanged@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18038FDD0 (-WorkAreaMayHaveChanged@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::get_self<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost>(
        _QWORD *a1)
{
  return (*a1 - 16LL) & -(__int64)(*a1 != 0LL);
}
