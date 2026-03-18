/*
 * XREFs of KiComputeWaitLimit @ 0x1402104E4
 * Callers:
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeWaitLimit(char a1)
{
  if ( a1 )
    return (unsigned int)(MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks);
  else
    return (unsigned int)(MEMORY[0xFFFFF78000000320] - 300);
}
