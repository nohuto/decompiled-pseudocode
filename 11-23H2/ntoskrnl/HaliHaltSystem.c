/*
 * XREFs of HaliHaltSystem @ 0x140506A00
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterRead @ 0x1403A1D30 (HalpAcpiPmRegisterRead.c)
 *     HalpShutdown @ 0x140506C48 (HalpShutdown.c)
 *     InbvCheckDisplayOwnership @ 0x14054E530 (InbvCheckDisplayOwnership.c)
 */

void __noreturn HaliHaltSystem()
{
  __int16 v0; // bx
  __int16 v1; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    do
    {
      do
        v1 = 0;
      while ( !(_DWORD)KiBugCheckData && !(unsigned __int8)InbvCheckDisplayOwnership() );
    }
    while ( !HalpShutdownContext || !PmRegisters[0] );
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v1, 2u, 0LL);
    v0 = v1;
    if ( byte_140C60530 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v1, 2u, 0LL);
      v0 |= v1;
    }
    if ( (v0 & 0x8100) == 0x100 )
      HalpShutdown();
  }
}
