/*
 * XREFs of RtlpLockAtomTable @ 0x1407182D0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140297A20 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14036474C (RtlDestroyLowBoxAtoms.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14069EA50 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14069EB40 (RtlDestroyAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1407152D0 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x140718010 (RtlLookupAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1407D0D60 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1409BBF10 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1409BC018 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
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
