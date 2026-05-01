/*
 * XREFs of _anonymous_namespace_::IsWebExperiencePackageSupportedOnProduct @ 0x1801C908C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::IsWebExperiencePackageSupportedOnProduct(unsigned int a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // eax

  if ( a1 > 0x65 )
  {
    if ( a1 > 0xA2 )
      return a1 >= 0xA4 && (a1 <= 0xA5 || a1 - 171 <= 1);
    if ( a1 >= 0xA1 )
      return 1;
    a1 -= 121;
    if ( a1 > 9 )
      return 0;
    v3 = 819;
  }
  else
  {
    v1 = a1 - 47;
    if ( (unsigned int)v1 <= 0x36 )
    {
      v2 = 0x48002002000007LL;
      if ( _bittest64(&v2, v1) )
        return 1;
    }
    if ( a1 > 0x1B )
      return 0;
    v3 = 134219792;
  }
  return _bittest(&v3, a1) != 0;
}
