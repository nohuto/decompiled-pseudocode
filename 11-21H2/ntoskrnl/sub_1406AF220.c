/*
 * XREFs of sub_1406AF220 @ 0x1406AF220
 * Callers:
 *     sub_1406AE11C @ 0x1406AE11C (sub_1406AE11C.c)
 *     sub_1407DC0D0 @ 0x1407DC0D0 (sub_1407DC0D0.c)
 *     sub_1409876B8 @ 0x1409876B8 (sub_1409876B8.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1406AF220(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = sub_140661EF0;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
