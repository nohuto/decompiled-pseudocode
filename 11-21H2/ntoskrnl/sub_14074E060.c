/*
 * XREFs of sub_14074E060 @ 0x14074E060
 * Callers:
 *     sub_14074DD38 @ 0x14074DD38 (sub_14074DD38.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 */

__int64 __fastcall sub_14074E060(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  _QWORD **v5; // rsi
  _QWORD *v6; // rbx
  _QWORD **v8; // r8
  ULONG_PTR v9; // rcx

  v2 = (volatile signed __int64 *)(a1 + 136);
  v5 = (_QWORD **)(a1 + 384);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  v6 = *v5;
  while ( v6 != v5 )
  {
    v8 = (_QWORD **)v6;
    v9 = (ULONG_PTR)(v6 - 10);
    v6 = (_QWORD *)*v6;
    if ( !a2 || *(_QWORD *)(v9 + 56) == a2 )
    {
      *(_DWORD *)(v9 + 40) &= ~0x10000u;
      *v8[1] = *v8;
      (*v8)[1] = v8[1];
      --*(_DWORD *)(a1 + 464);
      *(_QWORD *)(v9 + 56) = 0LL;
      *(_QWORD *)(v9 + 64) = 0LL;
      sub_1407A5A54(v9);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return sub_1402AFC00((ULONG_PTR)v2);
}
