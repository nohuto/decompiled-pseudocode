/*
 * XREFs of sub_1409CE7E8 @ 0x1409CE7E8
 * Callers:
 *     sub_1402493D4 @ 0x1402493D4 (sub_1402493D4.c)
 * Callees:
 *     RtlRemoveEntryHashTable @ 0x1402069A0 (RtlRemoveEntryHashTable.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1409CECAC @ 0x1409CECAC (sub_1409CECAC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409CE7E8(PSID *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  void *v7; // rsi
  __int64 v8; // rcx
  ULONG_PTR v9; // rdi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(off_140D3B088, 0LL);
  if ( a2 )
  {
    v5 = a2;
    do
    {
      v6 = sub_1409CECAC(*a1);
      v7 = (void *)v6;
      v8 = _InterlockedDecrement64((volatile signed __int64 *)(v6 + 24));
      if ( v8 <= 0 )
      {
        if ( v8 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(
               *(PRTL_DYNAMIC_HASH_TABLE *)(off_140D3B088 + 8),
               (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v6,
               0LL) )
        {
          ExFreePoolWithTag(v7, 0);
        }
      }
      a1 += 2;
      --v5;
    }
    while ( v5 );
  }
  v9 = off_140D3B088;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)off_140D3B088, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  sub_1402AFC00(v9);
  KeLeaveCriticalRegion();
}
