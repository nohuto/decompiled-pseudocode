/*
 * XREFs of ??$GetConditionOperationResult@N@DeviceCapabilitiesW@Internal@Windows@@YA_NNNW4tagCONDITION_OPERATION@@@Z @ 0x1805B205C
 * Callers:
 *     ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z @ 0x1801AF260 (-IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::DeviceCapabilitiesW::GetConditionOperationResult<double>(
        double a1,
        double a2,
        int a3)
{
  char v3; // cl
  int v4; // r8d

  v3 = 0;
  v4 = a3 - 4;
  if ( !v4 )
    return a1 > a2;
  if ( v4 == 1 )
    return a2 >= a1;
  return v3;
}
