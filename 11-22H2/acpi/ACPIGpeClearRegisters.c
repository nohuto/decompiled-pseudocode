/*
 * XREFs of ACPIGpeClearRegisters @ 0x1C002C260
 * Callers:
 *     ACPIGpeClearEventMasks @ 0x1C002C0F8 (ACPIGpeClearEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C0036910 (ACPIEnableInitializeACPI.c)
 *     ACPILoadProcessFADT @ 0x1C00A99AC (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIReadGpeStatusRegister @ 0x1C0038A6C (ACPIReadGpeStatusRegister.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0038BA4 (ACPIWriteGpeStatusRegister.c)
 */

void *ACPIGpeClearRegisters()
{
  void *result; // rax
  unsigned int i; // ebx

  result = AcpiInformation;
  for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); ++i )
  {
    ACPIReadGpeStatusRegister(i);
    ACPIWriteGpeStatusRegister(i);
    result = AcpiInformation;
  }
  return result;
}
