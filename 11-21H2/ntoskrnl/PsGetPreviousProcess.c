/*
 * XREFs of PsGetPreviousProcess @ 0x1409B49A0
 * Callers:
 *     NtGetNextProcess @ 0x1406D2920 (NtGetNextProcess.c)
 * Callees:
 *     PspUnlockProcessListShared @ 0x14020C7B0 (PspUnlockProcessListShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 */

unsigned __int64 __fastcall PsGetPreviousProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v2; // r14
  int v3; // esi
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
  v5 = (__int64 *)qword_140C1BF88;
  if ( Object )
    v5 = (__int64 *)Object[138];
  while ( v5 != &PsActiveProcessHead )
  {
    v2 = v5 - 137;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 137)) )
    {
      v3 = 1;
      break;
    }
    v5 = (__int64 *)v5[1];
  }
  PspUnlockProcessListShared((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return (unsigned __int64)v2 & -(__int64)(v3 != 0);
}
