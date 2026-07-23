/*
 * XREFs of sub_1406B7650 @ 0x1406B7650
 * Callers:
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_1406B7650(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  int v5; // eax

  v2 = (volatile signed __int64 *)(a1 + 200);
  ExAcquirePushLockExclusiveEx(a1 + 200, 0LL);
  v5 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v5 & 0xFFFFFF84 | (4 * (*(_DWORD *)(a1 + 416) & 6 | 1));
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 216);
  *(_QWORD *)a2 = a1 + 208;
  **(_QWORD **)(a1 + 216) = a2;
  ++*(_DWORD *)(a1 + 460);
  *(_QWORD *)(a1 + 216) = a2;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return sub_1402AFC00((ULONG_PTR)v2);
}
