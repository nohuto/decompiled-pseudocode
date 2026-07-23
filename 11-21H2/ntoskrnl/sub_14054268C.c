/*
 * XREFs of sub_14054268C @ 0x14054268C
 * Callers:
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_140542458 @ 0x140542458 (sub_140542458.c)
 *     sub_140542AD0 @ 0x140542AD0 (sub_140542AD0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_1402A2DE8 @ 0x1402A2DE8 (sub_1402A2DE8.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140542AEC @ 0x140542AEC (sub_140542AEC.c)
 */

void __fastcall sub_14054268C(__int64 a1, char a2)
{
  __int64 v3; // rdi
  char v4; // r14
  _QWORD *i; // rbx

  v3 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v4 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v3 + 152));
  for ( i = *(_QWORD **)(v3 + 40); i != (_QWORD *)(v3 + 40); i = (_QWORD *)*i )
  {
    if ( *((_BYTE *)i - 100) )
    {
      i = (_QWORD *)i[1];
      sub_140542AEC(*i, 3221225760LL, 0LL);
      v4 = 1;
    }
  }
  if ( v4 )
    sub_1402A2DE8(v3);
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
}
