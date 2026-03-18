/*
 * XREFs of HalpAcpiIBMVigilMatch @ 0x140B92B30
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14031FADC (HalpInterruptModel.c)
 */

__int64 HalpAcpiIBMVigilMatch()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
    HalpInterruptPhysicalModeOnly = 1;
  return result;
}
