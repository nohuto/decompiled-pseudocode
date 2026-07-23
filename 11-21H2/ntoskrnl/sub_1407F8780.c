/*
 * XREFs of sub_1407F8780 @ 0x1407F8780
 * Callers:
 *     sub_1407F8750 @ 0x1407F8750 (sub_1407F8750.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 */

char sub_1407F8780()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48D20, 0LL);
  if ( !--dword_140C4EFCC )
    CmUnRegisterCallback(Cookie);
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48D20, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C48D20);
  sub_1402AFC00((ULONG_PTR)&qword_140C48D20);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
