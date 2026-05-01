/*
 * XREFs of ?CheckFallbackTriggerCondition@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1806F9E64
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18025CD20 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::CheckFallbackTriggerCondition(
        const SYSTEMTIME *this)
{
  struct _FILETIME FileTime; // [rsp+20h] [rbp-38h] BYREF
  struct _FILETIME v4; // [rsp+28h] [rbp-30h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+30h] [rbp-28h] BYREF

  GetSystemTime(&SystemTime);
  SystemTimeToFileTime(&SystemTime, &FileTime);
  SystemTimeToFileTime(this + 32, &v4);
  return *(_QWORD *)&FileTime - *(_QWORD *)&v4 >= 51840000000000LL;
}
