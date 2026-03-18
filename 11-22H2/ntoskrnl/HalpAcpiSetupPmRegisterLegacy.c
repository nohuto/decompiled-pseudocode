/*
 * XREFs of HalpAcpiSetupPmRegisterLegacy @ 0x140B66C8C
 * Callers:
 *     HalpAcpiInitializePmRegisters @ 0x140B66AE4 (HalpAcpiInitializePmRegisters.c)
 * Callees:
 *     HalpAcpiSetupPmRegister @ 0x140B66CE8 (HalpAcpiSetupPmRegister.c)
 */

__int64 __fastcall HalpAcpiSetupPmRegisterLegacy(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned __int8 v4; // al

  v4 = *(_BYTE *)(a1 + 8);
  if ( v4 >= 5u || a2 )
    return HalpAcpiSetupPmRegister(a4);
  else
    return 3221225473LL;
}
