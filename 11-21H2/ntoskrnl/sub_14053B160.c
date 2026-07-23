/*
 * XREFs of sub_14053B160 @ 0x14053B160
 * Callers:
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 * Callees:
 *     sub_140285868 @ 0x140285868 (sub_140285868.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_14053B200 @ 0x14053B200 (sub_14053B200.c)
 *     RtlRandom @ 0x1406E2E20 (RtlRandom.c)
 */

_DWORD *sub_14053B160()
{
  ULONG v0; // ebx
  KIRQL v1; // di
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  while ( 1 )
  {
    do
      v0 = RtlRandom(&Seed) % (dword_140C548D4 + 1);
    while ( !*(_QWORD *)(qword_140C49AC0 + 8LL * v0) );
    v1 = KeAcquireQueuedSpinLock(4uLL);
    v2 = sub_140285868(v0);
    v3 = v2;
    if ( v2 )
      break;
    KeReleaseQueuedSpinLock(4uLL, v1);
  }
  sub_14053B200(v2);
  KeReleaseQueuedSpinLock(4uLL, v1);
  return v3;
}
