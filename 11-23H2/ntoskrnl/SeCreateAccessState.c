/*
 * XREFs of SeCreateAccessState @ 0x1406C2E60
 * Callers:
 *     SepCreateTokenEx @ 0x140229710 (SepCreateTokenEx.c)
 *     SeSubProcessToken @ 0x1406B71F8 (SeSubProcessToken.c)
 *     ObReferenceObjectByName @ 0x1406C2C50 (ObReferenceObjectByName.c)
 *     WmipCreateGuidObject @ 0x1406C5030 (WmipCreateGuidObject.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     ObReferenceObjectByNameEx @ 0x14071535C (ObReferenceObjectByNameEx.c)
 *     PsOpenThread @ 0x1407BB7E0 (PsOpenThread.c)
 *     NtGetNextProcess @ 0x1407D4660 (NtGetNextProcess.c)
 *     NtGetNextThread @ 0x1407DF010 (NtGetNextThread.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1409B1634 (PspReferenceCpuPartitionByHandle.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9360 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140A018E4 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x1406C2EA0 (SeCreateAccessStateEx.c)
 */

__int64 __fastcall SeCreateAccessState(int a1, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r10

  CurrentThread = KeGetCurrentThread();
  return SeCreateAccessStateEx((_DWORD)CurrentThread, CurrentThread->ApcState.Process, a1, a2, a3, a4);
}
