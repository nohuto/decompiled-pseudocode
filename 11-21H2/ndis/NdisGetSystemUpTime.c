/*
 * XREFs of NdisGetSystemUpTime @ 0x1C00BF140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisGetSystemUpTime(PULONG pSystemUpTime)
{
  *pSystemUpTime = MEMORY[0xFFFFF78000000320] * (int)ndisTimeIncrement / 10000LL;
}
