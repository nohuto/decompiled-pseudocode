/*
 * XREFs of sub_140293BA0 @ 0x140293BA0
 * Callers:
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     sub_140293B50 @ 0x140293B50 (sub_140293B50.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

BOOLEAN __fastcall sub_140293BA0(PRKDPC Dpc, __int64 a2)
{
  __int64 v4; // rdx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 32);
  v6 = 0;
  if ( (int)KeEnumerateNextProcessor(&v6, v4) < 0 )
    return KeSetEvent(*(PRKEVENT *)(a2 + 24), 0, 0);
  Dpc->TargetInfoAsUlong = 787;
  Dpc->DeferredRoutine = (PKDEFERRED_ROUTINE)sub_140293B50;
  Dpc->DeferredContext = (PVOID)a2;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  if ( !Dpc->DpcData )
    Dpc->Number = v6 + 2048;
  return KeInsertQueueDpc(Dpc, 0LL, 0LL);
}
