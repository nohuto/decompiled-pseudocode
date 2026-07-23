/*
 * XREFs of sub_1407A501C @ 0x1407A501C
 * Callers:
 *     sub_1406C7C20 @ 0x1406C7C20 (sub_1406C7C20.c)
 *     sub_1406CC660 @ 0x1406CC660 (sub_1406CC660.c)
 *     sub_1406E0930 @ 0x1406E0930 (sub_1406E0930.c)
 *     sub_1407A7300 @ 0x1407A7300 (sub_1407A7300.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall sub_1407A501C(_QWORD *a1, int a2, __int64 a3)
{
  char v3; // di
  volatile signed __int64 *v7; // rbx
  unsigned __int64 v8; // rcx

  v3 = 0;
  if ( !a1 )
    return 0;
  v7 = a1 + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 1), 0LL);
  v8 = (unsigned int)(a2 - 16);
  if ( v8 < a1[2] && *(_QWORD *)(*a1 + 8 * v8) == a3 )
  {
    *(_QWORD *)(*a1 + 8 * v8) = 0LL;
    v3 = 1;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  return v3;
}
