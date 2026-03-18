/*
 * XREFs of ExpExTimerAttributesAreValid @ 0x140358884
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x1402D5B80 (ExAllocateTimerInternal2.c)
 *     NtCreateTimer2 @ 0x1407D53D0 (NtCreateTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpExTimerAttributesAreValid(int a1)
{
  return (a1 & 0x8000000E) == a1 && ((a1 & 6) == 0 || (a1 & 8) == 0);
}
