/*
 * XREFs of sub_140AAB6EC @ 0x140AAB6EC
 * Callers:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_140A4E360 @ 0x140A4E360 (sub_140A4E360.c)
 *     sub_140A4E794 @ 0x140A4E794 (sub_140A4E794.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char sub_140AAB6EC()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C5A8F0, 0LL);
  if ( !--dword_140C54D3C )
  {
    MmUnlockPagableImageSection(qword_140C54D20);
    qword_140C54D20 = 0LL;
  }
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C5A8F0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C5A8F0);
  sub_1402AFC00((ULONG_PTR)&qword_140C5A8F0);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
