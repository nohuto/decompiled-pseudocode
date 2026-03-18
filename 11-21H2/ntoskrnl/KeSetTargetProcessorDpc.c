/*
 * XREFs of KeSetTargetProcessorDpc @ 0x14056F980
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTargetProcessorDpcEx @ 0x14025ACA0 (KeSetTargetProcessorDpcEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 */

void __stdcall KeSetTargetProcessorDpc(PRKDPC Dpc, CCHAR Number)
{
  unsigned __int16 v4; // bx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF

  if ( KeForceGroupAwareness )
    v4 = KiActiveGroups - 1;
  else
    v4 = 0;
  if ( Number < KeQueryActiveProcessorCountEx(v4) )
  {
    ProcNumber.Group = v4;
    ProcNumber.Number = Number;
    ProcNumber.Reserved = 0;
    KeSetTargetProcessorDpcEx(Dpc, &ProcNumber);
  }
}
