/*
 * XREFs of sub_14079D270 @ 0x14079D270
 * Callers:
 *     PsSetProcessPriorityByClass @ 0x14079D240 (PsSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402EBB00 @ 0x1402EBB00 (sub_1402EBB00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall sub_14079D270(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v7; // r14d
  BOOL v8; // r12d
  volatile signed __int64 *v9; // rbp
  int v11; // ecx

  CurrentThread = KeGetCurrentThread();
  v7 = a3 != 0 ? 0x20000 : 0x10000;
  v8 = 1;
  --*((_WORD *)CurrentThread + 242);
  v9 = (volatile signed __int64 *)(a1 + 1080);
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2172), v7);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 2172);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2172), ~v7);
    v8 = (v11 & (a3 != 0 ? 0x10000 : 0x20000)) != 0;
  }
  sub_1402EBB00(a1, v8);
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  sub_1402AFC00((ULONG_PTR)v9);
  return sub_1402AC800((__int64)CurrentThread);
}
