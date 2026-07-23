/*
 * XREFs of HalpEfiDecrementEfiCall @ 0x14035ECA4
 * Callers:
 *     HalEfiGetEnvironmentVariable @ 0x14035EC0C (HalEfiGetEnvironmentVariable.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x14039C920 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalEfiGetTime @ 0x14050D39C (HalEfiGetTime.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x14050D5CC (HalEfiQueryCapsuleCapabilities.c)
 *     HalEfiQueryVariableInfo @ 0x14050D65C (HalEfiQueryVariableInfo.c)
 *     HalEfiResetSystem @ 0x14050D6E0 (HalEfiResetSystem.c)
 *     HalEfiSetEnvironmentVariable @ 0x14050D77C (HalEfiSetEnvironmentVariable.c)
 *     HalEfiSetTime @ 0x14050D830 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14050DA6C (HalEfiUpdateCapsule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpEfiDecrementEfiCall(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement(&HalpEfiCalls);
  if ( a1 )
    return (unsigned int)_InterlockedDecrement(a1);
  return result;
}
