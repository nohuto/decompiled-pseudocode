/*
 * XREFs of SeQuerySessionIdToken @ 0x14071A060
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     SeQueryInformationToken @ 0x1407196A0 (SeQueryInformationToken.c)
 *     PnpGetCallerSessionId @ 0x1409589E0 (PnpGetCallerSessionId.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 */

NTSTATUS __stdcall SeQuerySessionIdToken(PACCESS_TOKEN Token, PULONG SessionId)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  *SessionId = *((_DWORD *)Token + 30);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  return 0;
}
