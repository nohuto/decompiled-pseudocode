/*
 * XREFs of sub_14020C530 @ 0x14020C530
 * Callers:
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     sub_1402A3EAC @ 0x1402A3EAC (sub_1402A3EAC.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 */

ULONG_PTR __fastcall sub_14020C530(__int64 a1, __int64 a2, int a3, char a4)
{
  KIRQL v8; // al
  ULONG_PTR v9; // rbx
  KIRQL v10; // r14
  __int16 v11; // cx

  v8 = KeAcquireQueuedSpinLock(9uLL);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = v8;
  v11 = 1;
  *(_WORD *)(v9 + 4) = 1;
  if ( a3 )
  {
    v11 = 17;
    *(_WORD *)(v9 + 4) = 17;
  }
  if ( a4 )
    *(_WORD *)(v9 + 4) = v11 | 0x20;
  *(_BYTE *)(*(_QWORD *)(v9 + 8) + 76LL) = *(_BYTE *)(a2 + 76) + 1;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 312LL) + 72LL) = v9;
  sub_1402A3EAC(v9);
  KeReleaseQueuedSpinLock(9uLL, v10);
  return v9;
}
