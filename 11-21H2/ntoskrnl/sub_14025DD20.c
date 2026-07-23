/*
 * XREFs of sub_14025DD20 @ 0x14025DD20
 * Callers:
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall sub_14025DD20(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v3; // al

  v1 = *(_QWORD *)(a1 + 8);
  v3 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (*(_DWORD *)(a1 + 16) & 1) == 0 && v1 && (*(_DWORD *)(*(_QWORD *)(v1 + 312) + 32LL) & 1) != 0 )
  {
    do
    {
      *(_DWORD *)(*(_QWORD *)(v1 + 312) + 32LL) &= ~1u;
      v1 = *(_QWORD *)(v1 + 16);
    }
    while ( v1 );
    KeReleaseQueuedSpinLock(0xAuLL, v3);
    return 0LL;
  }
  else
  {
    KeReleaseQueuedSpinLock(0xAuLL, v3);
    return 3221225742LL;
  }
}
