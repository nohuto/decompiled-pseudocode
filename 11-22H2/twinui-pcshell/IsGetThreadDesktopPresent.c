/*
 * XREFs of IsGetThreadDesktopPresent @ 0x1801CEAA0
 * Callers:
 *     ?GetLaunchRequirementForActiveBand@ApiPolicyChecker@CallerIdentity@@YA?AW4LaunchRequirement@12@W4ZBID@@@Z @ 0x18073C898 (-GetLaunchRequirementForActiveBand@ApiPolicyChecker@CallerIdentity@@YA-AW4LaunchRequirement@12@W.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1801CE030 (ApiSetQueryApiSetPresence_0.c)
 */

char IsGetThreadDesktopPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18098CF40 == 1 )
    return 1;
  if ( dword_18098CF40 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"LN", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_18098CF40 = 2 - (v1 != 0);
  return result;
}
