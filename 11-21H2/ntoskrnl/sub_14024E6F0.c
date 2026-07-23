/*
 * XREFs of sub_14024E6F0 @ 0x14024E6F0
 * Callers:
 *     sub_14024E6D0 @ 0x14024E6D0 (sub_14024E6D0.c)
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 * Callees:
 *     sub_14024E7F8 @ 0x14024E7F8 (sub_14024E7F8.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_1402A2DE8 @ 0x1402A2DE8 (sub_1402A2DE8.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1404173E4 @ 0x1404173E4 (sub_1404173E4.c)
 */

void __fastcall sub_14024E6F0(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  char v6; // r14
  _QWORD *v7; // rsi
  _QWORD *i; // rbx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v6 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  v7 = (_QWORD *)(v5 + 56);
  for ( i = *(_QWORD **)(v5 + 56); i != v7; i = (_QWORD *)*i )
  {
    if ( !i[7] )
    {
      if ( *(_BYTE *)(i[2] + 68LL) )
      {
        i = (_QWORD *)i[1];
        sub_1404173E4((PVOID)*i, 0, 0, 0);
        v6 = 1;
      }
    }
  }
  if ( v6 )
  {
    if ( a3 )
      sub_14024E7F8(v5);
    if ( (_QWORD *)*v7 == v7 )
      sub_1402A2DE8(v5);
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
}
