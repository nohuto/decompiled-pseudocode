/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x140791480
 * Callers:
 *     sub_14062D370 @ 0x14062D370 (sub_14062D370.c)
 *     sub_1409BE97C @ 0x1409BE97C (sub_1409BE97C.c)
 *     sub_140B03360 @ 0x140B03360 (sub_140B03360.c)
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14079240C @ 0x14079240C (sub_14079240C.c)
 */

char __fastcall ExUnsubscribeWnfStateChange(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  sub_14079240C(a1);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
