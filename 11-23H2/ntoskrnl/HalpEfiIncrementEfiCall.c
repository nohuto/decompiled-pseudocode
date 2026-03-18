/*
 * XREFs of HalpEfiIncrementEfiCall @ 0x14035EB60
 * Callers:
 *     HalEfiGetEnvironmentVariable @ 0x14035EA6C (HalEfiGetEnvironmentVariable.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x14039C740 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalEfiGetTime @ 0x14050CE4C (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x14050D07C (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x14050D10C (HalEfiQueryVariableInfo.c)
 *     HalEfiResetSystem @ 0x14050D190 (HalEfiResetSystem.c)
 *     HalEfiSetEnvironmentVariable @ 0x14050D22C (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x14050D2E0 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14050D51C (HalEfiUpdateCapsule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpEfiIncrementEfiCall(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement(&HalpEfiCalls);
  if ( a1 )
    return (unsigned int)_InterlockedIncrement(a1);
  return result;
}
