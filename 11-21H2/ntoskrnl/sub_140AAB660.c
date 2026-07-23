/*
 * XREFs of sub_140AAB660 @ 0x140AAB660
 * Callers:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_140A4E794 @ 0x140A4E794 (sub_140A4E794.c)
 *     sub_140B56D04 @ 0x140B56D04 (sub_140B56D04.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MmLockPagableImageSection @ 0x1406F5E50 (MmLockPagableImageSection.c)
 */

char sub_140AAB660()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C5A8F0, 0LL);
  v1 = dword_140C54D3C;
  if ( !dword_140C54D3C )
  {
    qword_140C54D20 = (PVOID)MmLockPagableImageSection((ULONG_PTR)sub_140AAB660);
    v1 = dword_140C54D3C;
  }
  dword_140C54D3C = v1 + 1;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C5A8F0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C5A8F0);
  sub_1402AFC00((ULONG_PTR)&qword_140C5A8F0);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
