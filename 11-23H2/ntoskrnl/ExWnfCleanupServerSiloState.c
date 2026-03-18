/*
 * XREFs of ExWnfCleanupServerSiloState @ 0x140A06070
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1409ACE90 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ExpWnfDeleteScopeInstances @ 0x140A07438 (ExpWnfDeleteScopeInstances.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

int __fastcall ExWnfCleanupServerSiloState(PVOID *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID v3; // rax

  if ( *a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExpWnfDeleteScopeInstances(*a1, 2LL);
    ExpWnfDeleteScopeInstances(*a1, 0LL);
    ExFreePoolWithTag(*a1, 0x20666E57u);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a1[1] )
    ZwClose(a1[1]);
  v3 = a1[2];
  if ( v3 )
    LODWORD(v3) = ZwClose(a1[2]);
  return (int)v3;
}
