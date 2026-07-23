/*
 * XREFs of sub_1407A6FD8 @ 0x1407A6FD8
 * Callers:
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_1406652DC @ 0x1406652DC (sub_1406652DC.c)
 *     sub_1406C9174 @ 0x1406C9174 (sub_1406C9174.c)
 *     sub_1407A6CE4 @ 0x1407A6CE4 (sub_1407A6CE4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_1407A6FD8(__int64 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v3; // rsi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = v1 + 176;
  ExAcquirePushLockExclusiveEx(v1 + 176, 0LL);
  --*(_DWORD *)(v1 + 456);
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a1 + 16) = 0LL;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  result = sub_1402AFC00(v3);
  --*(_WORD *)(a1 - 30);
  return result;
}
