/*
 * XREFs of sub_140999060 @ 0x140999060
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1409A01C0 @ 0x1409A01C0 (sub_1409A01C0.c)
 */

void __fastcall sub_140999060(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 56);
  *(_BYTE *)(a1 + 64) = 1;
  *(_DWORD *)(v1 + 48) = -1073741667;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 1;
  KeInitializeEvent((PRKEVENT)(a1 + 416), NotificationEvent, 0);
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 384) = sub_140999A80;
  *(_QWORD *)(a1 + 392) = a1;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  sub_1409A01C0();
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 368), DelayedWorkQueue);
}
