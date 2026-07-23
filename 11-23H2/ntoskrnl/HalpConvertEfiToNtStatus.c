/*
 * XREFs of HalpConvertEfiToNtStatus @ 0x14035ECCC
 * Callers:
 *     HalEfiGetEnvironmentVariable @ 0x14035EC0C (HalEfiGetEnvironmentVariable.c)
 *     HalEfiGetTime @ 0x14050D39C (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x14050D5CC (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x14050D65C (HalEfiQueryVariableInfo.c)
 *     HalEfiSetEnvironmentVariable @ 0x14050D77C (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x14050D830 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14050DA6C (HalEfiUpdateCapsule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpConvertEfiToNtStatus(__int64 a1)
{
  __int64 v1; // rax
  __int64 *i; // rdx

  v1 = 0LL;
  for ( i = HalEfiToNtStatusMappings; *i != a1; i += 2 )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0x20 )
      return 3221225473LL;
  }
  return LODWORD(HalEfiToNtStatusMappings[2 * v1 + 1]);
}
