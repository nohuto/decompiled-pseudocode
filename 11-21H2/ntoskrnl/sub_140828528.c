/*
 * XREFs of sub_140828528 @ 0x140828528
 * Callers:
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_140828528()
{
  struct _KTHREAD *CurrentThread; // rsi
  PVOID v1; // rdi
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3B0A8, 0LL);
  v1 = qword_140D3B0D8;
  qword_140D3B0D8 = (PVOID)-1LL;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3B0A8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140D3B0A8);
  sub_1402AFC00((ULONG_PTR)&qword_140D3B0A8);
  sub_1402F9540((__int64)CurrentThread);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x54425057u);
}
