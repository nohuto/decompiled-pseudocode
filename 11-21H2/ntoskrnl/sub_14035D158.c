/*
 * XREFs of sub_14035D158 @ 0x14035D158
 * Callers:
 *     sub_1407D6FA0 @ 0x1407D6FA0 (sub_1407D6FA0.c)
 *     sub_1407D80F0 @ 0x1407D80F0 (sub_1407D80F0.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     sub_14042ABE0 @ 0x14042ABE0 (sub_14042ABE0.c)
 */

__int64 __fastcall sub_14035D158(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, int a6)
{
  PSLIST_ENTRY v10; // rax
  struct _WORK_QUEUE_ITEM *v11; // rbx
  __int64 v12; // rcx
  KPRIORITY PriorityThread; // eax
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0;
  if ( a2 <= 0x7FFFFFFF0000LL )
    return sub_14042ABE0(a2, a3, a4, a5, (__int64)&v15);
  if ( a4 <= 0x7FFFFFFF0000LL )
    return sub_14042ABE0(a2, a3, a4, a5, (__int64)&v15);
  if ( (__int64)(a3 - a2) < a6 )
    return sub_14042ABE0(a2, a3, a4, a5, (__int64)&v15);
  v10 = sub_140202234((__int64)&unk_140CE1D40);
  v11 = (struct _WORK_QUEUE_ITEM *)v10;
  if ( !v10 )
    return sub_14042ABE0(a2, a3, a4, a5, (__int64)&v15);
  v10->Next = 0LL;
  v12 = a5;
  v10[1].Next = (_SLIST_ENTRY *)sub_1402035C0;
  *((_QWORD *)&v10[1].Next + 1) = v10;
  *((_QWORD *)&v10[3].Next + 1) = v12;
  v10[4].Next = (PSLIST_ENTRY)((char *)v10 + 72);
  v10[2].Next = (_SLIST_ENTRY *)a2;
  *((_QWORD *)&v10[2].Next + 1) = a3;
  v10[3].Next = (_SLIST_ENTRY *)a4;
  v10[5].Next = (_SLIST_ENTRY *)a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  ExQueueWorkItem(v11, (WORK_QUEUE_TYPE)(PriorityThread + 32));
  return 0LL;
}
