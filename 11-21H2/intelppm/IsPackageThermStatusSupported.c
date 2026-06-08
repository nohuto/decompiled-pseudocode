/*
 * XREFs of IsPackageThermStatusSupported @ 0x1C002CDC0
 * Callers:
 *     InitMeasRegisters @ 0x1C002CA30 (InitMeasRegisters.c)
 *     GetHwDebugRegisters @ 0x1C002CB90 (GetHwDebugRegisters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00036D0 (GetCpuIdInfo.c)
 */

bool IsPackageThermStatusSupported()
{
  char v0; // bl
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v0 = 0;
  v3 = 0LL;
  GetCpuIdInfo(0, &v2);
  if ( (unsigned int)v2 >= 6 )
  {
    GetCpuIdInfo(6u, &v3);
    return (v3 & 0x40) != 0;
  }
  return v0;
}
