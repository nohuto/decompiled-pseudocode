/*
 * XREFs of sub_14085E9A0 @ 0x14085E9A0
 * Callers:
 *     sub_14085E8F4 @ 0x14085E8F4 (sub_14085E8F4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14085EA64 @ 0x14085EA64 (sub_14085EA64.c)
 *     sub_140861560 @ 0x140861560 (sub_140861560.c)
 */

__int64 __fastcall sub_14085E9A0(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D321A0, 0LL);
  if ( (dword_140D32180 & 8) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = sub_140861560(&qword_140D32430);
    if ( v5 >= 0 )
      dword_140D32180 |= 8u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D321A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D321A0);
  sub_1402AFC00((ULONG_PTR)&qword_140D321A0);
  KeLeaveCriticalRegion();
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = a1;
    v5 = sub_14085EA64(&qword_140D32430, v6, a2 + 8);
    if ( v5 >= 0 )
      return 0;
  }
  return (unsigned int)v5;
}
