/*
 * XREFs of SeCreateAccessState @ 0x1406C2E90
 * Callers:
 *     SepCreateTokenEx @ 0x140229820 (SepCreateTokenEx.c)
 *     SeSubProcessToken @ 0x1406B722C (SeSubProcessToken.c)
 *     ObReferenceObjectByName @ 0x1406C2C80 (ObReferenceObjectByName.c)
 *     WmipCreateGuidObject @ 0x1406C5060 (WmipCreateGuidObject.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 *     PsOpenThread @ 0x1407BBAB0 (PsOpenThread.c)
 *     NtGetNextProcess @ 0x1407D4930 (NtGetNextProcess.c)
 *     NtGetNextThread @ 0x1407DF2E0 (NtGetNextThread.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1409B1834 (PspReferenceCpuPartitionByHandle.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9560 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140A01B74 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x1406C2ED0 (SeCreateAccessStateEx.c)
 */

__int64 __fastcall SeCreateAccessState(int a1, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r10

  CurrentThread = KeGetCurrentThread();
  return SeCreateAccessStateEx((_DWORD)CurrentThread, CurrentThread->ApcState.Process, a1, a2, a3, a4);
}
