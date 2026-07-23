/*
 * XREFs of SeQuerySessionIdToken @ 0x14071A260
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     PnpGetCallerSessionId @ 0x140958BE0 (PnpGetCallerSessionId.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
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
