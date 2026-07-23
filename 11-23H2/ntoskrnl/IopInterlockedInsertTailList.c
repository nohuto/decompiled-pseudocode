/*
 * XREFs of IopInterlockedInsertTailList @ 0x1403A911C
 * Callers:
 *     IoRegisterBootDriverReinitialization @ 0x14084FCF0 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x14084FD70 (IoRegisterDriverReinitialization.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall IopInterlockedInsertTailList(__int64 a1, _QWORD *a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rcx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *(_QWORD **)(a1 + 8);
  if ( *v5 != a1 )
    __fastfail(3u);
  a2[1] = v5;
  *a2 = a1;
  *v5 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  KeReleaseQueuedSpinLock(0xAuLL, v4);
}
