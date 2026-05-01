/*
 * XREFs of ?IsLaptop@@YAHXZ @ 0x1806CDB84
 * Callers:
 *     ?IsMobilityCenterEnabledWithOverride@@YAHH@Z @ 0x1806CDBFC (-IsMobilityCenterEnabledWithOverride@@YAHH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 IsLaptop(void)
{
  unsigned int v0; // ebx
  POWER_PLATFORM_ROLE v1; // eax
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+20h] [rbp-68h] BYREF

  v0 = 0;
  v1 = PowerDeterminePlatformRole();
  if ( v1 == PlatformRoleMobile
    || v1 == PlatformRoleDesktop && GetPwrCapabilities(&spc) && spc.SystemBatteriesPresent && !spc.BatteriesAreShortTerm )
  {
    return 1;
  }
  return v0;
}
