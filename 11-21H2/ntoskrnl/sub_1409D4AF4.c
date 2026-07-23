/*
 * XREFs of sub_1409D4AF4 @ 0x1409D4AF4
 * Callers:
 *     sub_1409D4BC0 @ 0x1409D4BC0 (sub_1409D4BC0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140861560 @ 0x140861560 (sub_140861560.c)
 *     sub_1409D7A90 @ 0x1409D7A90 (sub_1409D7A90.c)
 */

__int64 __fastcall sub_1409D4AF4(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // edi

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D321A0, 0LL);
  if ( (dword_140D32180 & 8) == 0 )
  {
    v2 = sub_140861560(&qword_140D32430);
    if ( v2 >= 0 )
      dword_140D32180 |= 8u;
  }
  if ( (dword_140D32180 & 4) == 0 && (dword_140D32180 & 8) != 0 )
  {
    v2 = sub_1409D7A90(a1, qword_140D32430);
    if ( v2 >= 0 )
      dword_140D32180 |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D321A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D321A0);
  sub_1402AFC00((ULONG_PTR)&qword_140D321A0);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
