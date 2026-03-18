/*
 * XREFs of VfDisableHalVerifier @ 0x1405FE548
 * Callers:
 *     IoWriteCrashDump @ 0x140553244 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1405554B0 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     VfAllocateCrashDumpRegisters @ 0x140A84950 (VfAllocateCrashDumpRegisters.c)
 *     VfNotifyOfHibernate @ 0x140A8682C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *VfDisableHalVerifier()
{
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *result; // rax

  if ( ViVerifyDma )
  {
    ViVerifyDma = 0;
    for ( i = ViAdapterList.Flink; &ViAdapterList != i; i = i->Flink )
    {
      Flink = i[1].Flink;
      if ( Flink )
      {
        result = i[3].Flink;
        Flink->Blink = result;
      }
    }
  }
  return result;
}
