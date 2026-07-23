/*
 * XREFs of sub_14053B0B8 @ 0x14053B0B8
 * Callers:
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14053B2E4 @ 0x14053B2E4 (sub_14053B2E4.c)
 *     sub_14090BAE4 @ 0x14090BAE4 (sub_14090BAE4.c)
 */

void __fastcall sub_14053B0B8(__int64 a1, char a2)
{
  KIRQL v2; // di
  int v5; // eax
  int v6; // eax

  v2 = 0;
  if ( !a2 )
    v2 = KeAcquireQueuedSpinLock(4uLL);
  v5 = *(_DWORD *)(a1 + 4);
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x16EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = v5 - 1;
  *(_DWORD *)(a1 + 4) = v6;
  if ( !a2 )
  {
    if ( v6 )
    {
      KeReleaseQueuedSpinLock(4uLL, v2);
    }
    else
    {
      sub_14053B2E4(a1);
      KeReleaseQueuedSpinLock(4uLL, v2);
      sub_14090BAE4(a1);
    }
  }
}
