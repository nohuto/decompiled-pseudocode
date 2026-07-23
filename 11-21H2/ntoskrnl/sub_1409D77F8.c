/*
 * XREFs of sub_1409D77F8 @ 0x1409D77F8
 * Callers:
 *     sub_1409D4BC0 @ 0x1409D4BC0 (sub_1409D4BC0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_1409D77F8(__int64 a1, int *a2, int *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // esi
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v10; // ecx
  int v11; // ecx

  v3 = 0;
  v5 = 0;
  while ( 1 )
  {
    v8 = a1 + 32LL * v5;
    if ( !*(_QWORD *)v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
      if ( !*(_QWORD *)v8 )
      {
        *(_QWORD *)v8 = a2;
        do
        {
          v10 = *(_DWORD *)(v8 + 24) ^ (*(_DWORD *)(v8 + 24) ^ (*(_DWORD *)(v8 + 24) + 1)) & 0xFFF;
          *(_DWORD *)(v8 + 24) = v10;
          v11 = v5 | (16 * (v10 & 0xFFF));
          *a2 = v11;
        }
        while ( v11 == -1 );
        *a3 = v11;
        a2 = 0LL;
        _InterlockedExchange64((volatile __int64 *)(v8 + 8), 0LL);
        sub_140347810((struct _EX_RUNDOWN_REF *)(v8 + 8));
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8 + 16);
      sub_1402AFC00(v8 + 16);
      KeLeaveCriticalRegion();
      if ( !a2 )
        break;
    }
    if ( ++v5 >= 0x10 )
      return (unsigned int)-1073741671;
  }
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return v3;
}
