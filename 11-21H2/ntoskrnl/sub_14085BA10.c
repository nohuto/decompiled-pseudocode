/*
 * XREFs of sub_14085BA10 @ 0x14085BA10
 * Callers:
 *     sub_14085B72C @ 0x14085B72C (sub_14085B72C.c)
 *     sub_14085B800 @ 0x14085B800 (sub_14085B800.c)
 * Callees:
 *     PcwRegister @ 0x1408114C0 (PcwRegister.c)
 */

NTSTATUS __fastcall sub_14085BA10(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  NTSTATUS result; // eax

  result = PcwRegister(Registration, Info);
  if ( result == -1073741584 )
  {
    Info->Version = 256;
    return PcwRegister(Registration, Info);
  }
  return result;
}
