/*
 * XREFs of sub_1407A6950 @ 0x1407A6950
 * Callers:
 *     sub_1406622B8 @ 0x1406622B8 (sub_1406622B8.c)
 *     sub_14066BC7C @ 0x14066BC7C (sub_14066BC7C.c)
 *     sub_1406CBB84 @ 0x1406CBB84 (sub_1406CBB84.c)
 *     sub_1407A66CC @ 0x1407A66CC (sub_1407A66CC.c)
 *     sub_1407A74A4 @ 0x1407A74A4 (sub_1407A74A4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_1407A6950(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax

  v2 = (volatile signed __int64 *)(a1 + 328);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  v5 = a1 + 336;
  v6 = (_QWORD *)(a2 - 48);
  v7 = *(_QWORD **)(v5 + 8);
  if ( *v7 != v5 )
    __fastfail(3u);
  v6[1] = v7;
  *v6 = v5;
  *v7 = v6;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return sub_1402AFC00((ULONG_PTR)v2);
}
