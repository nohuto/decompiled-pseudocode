/*
 * XREFs of sub_14085D710 @ 0x14085D710
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403DA7FC @ 0x1403DA7FC (sub_1403DA7FC.c)
 *     sub_1405F4304 @ 0x1405F4304 (sub_1405F4304.c)
 */

char __fastcall sub_14085D710(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v4; // ebp
  struct _KTHREAD *v5; // rcx
  volatile signed __int64 *v6; // rsi
  char v7; // bl
  char result; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 44);
  v10 = 0LL;
  v4 = sub_1403DA7FC(v2, &v10);
  if ( v4 < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1B308, 0LL);
    byte_140C1B311 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1B308, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C1B308);
    sub_1402AFC00((ULONG_PTR)&qword_140C1B308);
    result = sub_1402F9540((__int64)KeGetCurrentThread());
  }
  else
  {
    if ( v10 )
      *(_QWORD *)(v10 + 40) = 1LL;
    v5 = KeGetCurrentThread();
    --*((_WORD *)v5 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1B308, 0LL);
    v6 = (volatile signed __int64 *)HashTable;
    HashTable = (PRTL_DYNAMIC_HASH_TABLE)v10;
    byte_140C1B311 = v10 != 0;
    if ( v10 && (_DWORD)InitSafeBootMode == 1 )
    {
      sub_1405F4304((volatile signed __int64 *)HashTable);
      HashTable = 0LL;
      *(_QWORD *)(*(_QWORD *)(qword_140D3B0F8 + 64) + 32LL) = qword_140D3CC38;
    }
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1B308, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C1B308);
    sub_1402AFC00((ULONG_PTR)&qword_140C1B308);
    result = sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v6 )
      result = sub_1405F4304(v6);
  }
  *(_DWORD *)(a2 + 40) = v4;
  return result;
}
