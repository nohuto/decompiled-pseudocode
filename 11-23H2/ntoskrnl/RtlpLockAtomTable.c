/*
 * XREFs of RtlpLockAtomTable @ 0x1407180D0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140297790 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1403645AC (RtlDestroyLowBoxAtoms.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14069EA50 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14069EB40 (RtlDestroyAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1407150C0 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x140717E10 (RtlLookupAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1407D0A90 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1409BBD10 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1409BBE18 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 2), 0LL);
  return 1;
}
