/*
 * XREFs of sub_1407968D0 @ 0x1407968D0
 * Callers:
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     sub_14065F10C @ 0x14065F10C (sub_14065F10C.c)
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_140792A4C @ 0x140792A4C (sub_140792A4C.c)
 *     sub_140796798 @ 0x140796798 (sub_140796798.c)
 *     sub_140883164 @ 0x140883164 (sub_140883164.c)
 *     sub_1409E448C @ 0x1409E448C (sub_1409E448C.c)
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 *     sub_1409EC340 @ 0x1409EC340 (sub_1409EC340.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140796BF4 @ 0x140796BF4 (sub_140796BF4.c)
 */

_QWORD *__fastcall sub_1407968D0(__int64 a1, _DWORD *a2, int a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v7; // rsi
  signed __int64 *v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rax

  v4 = 0LL;
  v5 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
  CurrentThread = KeGetCurrentThread();
  v7 = (_QWORD **)(v5 + 16LL * a3);
  --*((_WORD *)CurrentThread + 242);
  v8 = (signed __int64 *)(v5 + 48);
  ExAcquirePushLockSharedEx(v5 + 48, 0LL);
  v9 = *v7;
  if ( *v7 != v7 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)a2 - v9[5];
      if ( *(_QWORD *)a2 == v9[5] )
        v10 = *((_QWORD *)a2 + 1) - v9[6];
      if ( !v10 && (unsigned __int8)sub_140796BF4((ULONG_PTR)v9) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v7 )
        goto LABEL_9;
    }
    v4 = v9;
  }
LABEL_9:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  sub_1402AFC00((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  return v4;
}
