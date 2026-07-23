/*
 * XREFs of sub_1403D7D9C @ 0x1403D7D9C
 * Callers:
 *     IoRegisterBootDriverReinitialization @ 0x1408554F0 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x140855570 (IoRegisterDriverReinitialization.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall sub_1403D7D9C(__int64 a1, _QWORD *a2)
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
