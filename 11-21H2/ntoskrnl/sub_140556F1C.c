/*
 * XREFs of sub_140556F1C @ 0x140556F1C
 * Callers:
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     sub_1402A3EAC @ 0x1402A3EAC (sub_1402A3EAC.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 */

char __fastcall sub_140556F1C(__int64 a1, ULONG_PTR *a2, _QWORD *a3)
{
  char v4; // di
  KIRQL v7; // al
  ULONG_PTR v8; // rcx
  KIRQL v9; // bp

  v4 = 0;
  v7 = KeAcquireQueuedSpinLock(9uLL);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = v7;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v8 && (*(_BYTE *)(v8 + 4) & 1) != 0 )
  {
    *a3 = *(_QWORD *)(v8 + 8);
    v4 = 1;
    *a2 = v8;
    sub_1402A3EAC(v8, 0);
  }
  KeReleaseQueuedSpinLock(9uLL, v9);
  return v4;
}
