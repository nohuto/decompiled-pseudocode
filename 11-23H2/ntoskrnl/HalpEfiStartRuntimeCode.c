/*
 * XREFs of HalpEfiStartRuntimeCode @ 0x14035EB88
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

__int64 __fastcall HalpEfiStartRuntimeCode(unsigned int a1)
{
  unsigned int *HalReserved; // rdx
  __int64 result; // rax

  HalReserved = KeGetPcr()->HalReserved;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result >= 2u )
  {
    _InterlockedOr((volatile signed __int32 *)HalReserved + 8, a1);
  }
  else
  {
    while ( 1 )
    {
      while ( (HalReserved[8] & 0x80000000) != 0 )
        _mm_pause();
      _m_prefetchw(HalReserved + 8);
      result = (unsigned int)_InterlockedOr((volatile signed __int32 *)HalReserved + 8, a1);
      if ( (int)result >= 0 )
        break;
      _InterlockedAnd((volatile signed __int32 *)HalReserved + 8, ~a1);
    }
  }
  return result;
}
