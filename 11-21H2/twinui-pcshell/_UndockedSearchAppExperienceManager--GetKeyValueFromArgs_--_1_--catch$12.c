/*
 * XREFs of _UndockedSearchAppExperienceManager::GetKeyValueFromArgs_::_1_::catch$12 @ 0x18038ECD3
 * Callers:
 *     <none>
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800F2CB4 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::GetKeyValueFromArgs_::_1_::catch_12(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a2 + 104) = winrt::impl::duplicate_hstring(
                              **(winrt::impl ***)(a2 + 128),
                              (struct winrt::impl::hstring_header *)a2);
  return 0LL;
}
