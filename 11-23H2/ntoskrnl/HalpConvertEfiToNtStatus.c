/*
 * XREFs of HalpConvertEfiToNtStatus @ 0x14035EB2C
 * Callers:
 *     HalEfiGetEnvironmentVariable @ 0x14035EA6C (HalEfiGetEnvironmentVariable.c)
 *     HalEfiGetTime @ 0x14050CE4C (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x14050D07C (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x14050D10C (HalEfiQueryVariableInfo.c)
 *     HalEfiSetEnvironmentVariable @ 0x14050D22C (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x14050D2E0 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14050D51C (HalEfiUpdateCapsule.c)
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
