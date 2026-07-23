/*
 * XREFs of sub_1409D9F0C @ 0x1409D9F0C
 * Callers:
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1409D9F0C(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = (volatile signed __int64 *)(a2 + 88);
  ExAcquirePushLockExclusiveEx(a2 + 88, 0LL);
  *(_WORD *)(a2 + 106) |= 1u;
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  sub_1402AFC00((ULONG_PTR)v5);
  KeLeaveCriticalRegion();
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C18EA8) )
  {
    sub_14042A5E0(a1, v6);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140C18EA8);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 96));
}
