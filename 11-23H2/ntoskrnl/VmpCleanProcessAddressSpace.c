/*
 * XREFs of VmpCleanProcessAddressSpace @ 0x1409DD2A4
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14071FC58 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExGetExtensionTable @ 0x1402FA6D0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA700 (ExReleaseExtensionTable.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

void __fastcall VmpCleanProcessAddressSpace(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // rdi
  unsigned __int64 ExtensionTable; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int64 *)(a2 + 88);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 88, 0LL);
  *(_WORD *)(a2 + 106) |= 1u;
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(__int64))(ExtensionTable + 8))(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 96));
}
