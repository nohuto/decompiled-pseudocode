/*
 * XREFs of PsGetProcessMachine @ 0x1406B6B40
 * Callers:
 *     PspSelectMachineForProcess @ 0x1406B7B88 (PspSelectMachineForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessMachine(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 2412);
}
