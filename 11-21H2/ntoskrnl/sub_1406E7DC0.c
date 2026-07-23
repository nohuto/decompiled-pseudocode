/*
 * XREFs of sub_1406E7DC0 @ 0x1406E7DC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406E7E90 @ 0x1406E7E90 (sub_1406E7E90.c)
 *     sub_1409E52D0 @ 0x1409E52D0 (sub_1409E52D0.c)
 */

char __fastcall sub_1406E7DC0(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di

  *(_DWORD *)(qword_140C5B0F0 + 12) = 0;
  if ( (a1[9] & 1) != 0 )
    sub_1409E52D0(a1, 4LL);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D90, 0LL);
  qword_140C547C0 = (__int64)KeGetCurrentThread();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(*(_QWORD *)a1 + 16LL) >= a1[7] )
    sub_1406E7E90(a1);
  qword_140C547C0 = 0LL;
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D90, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C15D90);
  sub_1402AFC00((ULONG_PTR)&qword_140C15D90);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
