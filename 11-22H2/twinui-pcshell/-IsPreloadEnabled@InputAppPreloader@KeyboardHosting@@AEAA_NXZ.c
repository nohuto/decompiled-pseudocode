/*
 * XREFs of ?IsPreloadEnabled@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x1800AD380
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     GetPreferenceFromRegistry @ 0x1800AD410 (GetPreferenceFromRegistry.c)
 *     ?IsPreloadEnabledByIme@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x1800AD544 (-IsPreloadEnabledByIme@InputAppPreloader@KeyboardHosting@@AEAA_NXZ.c)
 */

char __fastcall KeyboardHosting::InputAppPreloader::IsPreloadEnabled(KeyboardHosting::InputAppPreloader *this)
{
  char v2; // di

  if ( *((_DWORD *)this + 6) == 2 || *((_DWORD *)this + 7) == 2 || *((_DWORD *)this + 8) == 2 )
    return 1;
  v2 = 0;
  if ( !*((_DWORD *)this + 6) )
    _InterlockedExchange((volatile __int32 *)this + 6, GetPreferenceFromRegistry(-2147483647LL));
  if ( *((_DWORD *)this + 6) == 2 )
    return 1;
  if ( !*((_DWORD *)this + 7) )
    _InterlockedExchange((volatile __int32 *)this + 7, GetPreferenceFromRegistry(-2147483646LL));
  if ( *((_DWORD *)this + 7) == 2 || KeyboardHosting::InputAppPreloader::IsPreloadEnabledByIme(this) )
    return 1;
  return v2;
}
