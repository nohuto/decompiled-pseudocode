/*
 * XREFs of PspCreateSilo @ 0x1407E66D8
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PspUnlockJob @ 0x1406A3BFC (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406A3DF8 (PspLockJobExclusive.c)
 *     PspAllocStorage @ 0x1407E67C4 (PspAllocStorage.c)
 *     PspJobHasChildren @ 0x1407E6824 (PspJobHasChildren.c)
 *     PspFreeStorage @ 0x1409B7EA8 (PspFreeStorage.c)
 */

__int64 __fastcall PspCreateSilo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  PVOID v2; // rdi
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int v6; // esi
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  P = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  if ( !*(_QWORD *)(a1 + 1520) )
  {
    result = PspAllocStorage(&P);
    if ( (int)result < 0 )
      return result;
    v2 = P;
  }
  PspLockJobExclusive(a1, (__int64)CurrentThread);
  if ( (unsigned __int8)PspJobHasChildren(a1) )
  {
    v6 = -1073740529;
  }
  else if ( (*(_DWORD *)(a1 + 1536) & 0x40000000) != 0 )
  {
    v6 = -1073740536;
  }
  else if ( (*(_DWORD *)(a1 + 256) & 0x402000) != 0 )
  {
    v5 = -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1520), (signed __int64)v2, 0LL) != 0);
    P = (PVOID)(v5 & (unsigned __int64)P);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1536), 0x40000000u);
    v2 = P;
    v6 = 0;
  }
  else
  {
    v6 = -1073741811;
  }
  PspUnlockJob(a1, (__int64)CurrentThread);
  if ( v2 )
    PspFreeStorage(v2);
  return v6;
}
