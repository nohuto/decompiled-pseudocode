/*
 * XREFs of sub_14085B454 @ 0x14085B454
 * Callers:
 *     sub_1405CD5BC @ 0x1405CD5BC (sub_1405CD5BC.c)
 *     sub_140B28250 @ 0x140B28250 (sub_140B28250.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x1402A4940 (KeInitializeSemaphore.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14085B500 @ 0x14085B500 (sub_14085B500.c)
 */

__int64 __fastcall sub_14085B454(struct _KSEMAPHORE *a1, __int64 a2)
{
  __int64 v4; // rsi
  struct _KSEMAPHORE *v5; // rbx
  LIST_ENTRY *p_WaitListHead; // rcx
  __int64 v7; // rdx

  memset(&a1->Limit, 0, 0x118uLL);
  a1->Header.WaitListHead.Flink = 0LL;
  *(_QWORD *)&a1->Header.Lock = a2;
  v4 = 2LL;
  *(_QWORD *)&a1->Limit = &a1->Header.WaitListHead.Blink;
  v5 = a1 + 1;
  a1->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&a1->Header.WaitListHead.Blink;
  do
  {
    KeInitializeSemaphore(v5++, 0, 0x7FFFFFFF);
    --v4;
  }
  while ( v4 );
  p_WaitListHead = &a1[4].Header.WaitListHead;
  v7 = 4LL;
  do
  {
    p_WaitListHead[-2].Flink = (struct _LIST_ENTRY *)a1;
    p_WaitListHead[-2].Blink = 0LL;
    p_WaitListHead[-1].Blink = (struct _LIST_ENTRY *)sub_1406A6E90;
    p_WaitListHead->Flink = p_WaitListHead - 2;
    p_WaitListHead = (LIST_ENTRY *)((char *)p_WaitListHead + 40);
    --v7;
  }
  while ( v7 );
  return sub_14085B500(a1);
}
