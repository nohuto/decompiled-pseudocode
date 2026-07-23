/*
 * XREFs of IoGetAffinityInterrupt @ 0x1403DEAB0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1402949F0 (KeGetProcessorNumberFromIndex.c)
 */

NTSTATUS __stdcall IoGetAffinityInterrupt(PKINTERRUPT InterruptObject, PGROUP_AFFINITY GroupAffinity)
{
  NTSTATUS result; // eax
  WORD Group; // ax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = 0;
  result = KeGetProcessorNumberFromIndex(*((_DWORD *)InterruptObject + 24), &ProcNumber);
  if ( result >= 0 )
  {
    Group = ProcNumber.Group;
    *GroupAffinity = 0LL;
    GroupAffinity->Group = Group;
    GroupAffinity->Mask = *((_QWORD *)InterruptObject - 13);
    return 0;
  }
  return result;
}
