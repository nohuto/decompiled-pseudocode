/*
 * XREFs of ObpLockDirectoryExclusive @ 0x140697B24
 * Callers:
 *     NtSetInformationObject @ 0x140697640 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14069794C (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpCloseHandle @ 0x1406E76B0 (ObpCloseHandle.c)
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     ObpDeleteNameCheck @ 0x140740330 (ObpDeleteNameCheck.c)
 *     ObCreateObjectTypeEx @ 0x14081F4F0 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall ObpLockDirectoryExclusive(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 21) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 296, 0LL);
}
