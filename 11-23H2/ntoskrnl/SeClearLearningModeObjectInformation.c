/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x1402322E0
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x1403ACF00 (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByName @ 0x1406C2C80 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1406ED010 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 */

void SeClearLearningModeObjectInformation()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ecx
  struct _LIST_ENTRY *Blink; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() )
    v1 = 2;
  else
    v1 = (KeGetCurrentThread()->ApcState.InProgressFlags & 1) != 0;
  Blink = CurrentThread[1].WaitBlock[1].WaitListEntry.Blink;
  if ( Blink )
  {
    if ( LODWORD(Blink->Blink) == v1 )
    {
      CurrentThread[1].WaitBlock[1].WaitListEntry.Blink = Blink->Flink;
      if ( Blink[2].Flink )
      {
        if ( Blink[3].Flink )
          RtlFreeUnicodeString((PUNICODE_STRING)&Blink[2].Blink);
      }
    }
  }
}
