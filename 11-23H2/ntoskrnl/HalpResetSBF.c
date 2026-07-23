/*
 * XREFs of HalpResetSBF @ 0x140A90AF8
 * Callers:
 *     HalpEndOfBoot @ 0x1408496B0 (HalpEndOfBoot.c)
 *     HalpAcpiPostSleep @ 0x140A96470 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalReadBootRegister @ 0x140A90B34 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x140A90B7C (HalWriteBootRegister.c)
 */

void HalpResetSBF()
{
  __int64 v0; // rcx
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( HalpSimpleBootFlagTable )
  {
    if ( !(unsigned int)HalReadBootRegister(&v1) )
    {
      LOBYTE(v0) = v1 & 0xF9;
      HalWriteBootRegister(v0);
    }
  }
}
