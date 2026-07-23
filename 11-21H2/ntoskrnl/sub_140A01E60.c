/*
 * XREFs of sub_140A01E60 @ 0x140A01E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1405E2D20 @ 0x1405E2D20 (sub_1405E2D20.c)
 *     sub_1406C3EEC @ 0x1406C3EEC (sub_1406C3EEC.c)
 *     sub_140851D00 @ 0x140851D00 (sub_140851D00.c)
 */

void __fastcall sub_140A01E60(unsigned __int16 *a1)
{
  void *v2; // rcx
  int v3; // eax
  void *v4; // rax
  int v5; // r8d
  void *v6; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  sub_1406C3EEC();
  v2 = 0LL;
  while ( 1 )
  {
    v4 = sub_140236710(v2);
    v6 = v4;
    if ( !v4 )
      break;
    v3 = sub_140851D00(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL) + 8LL * *a1), *a1, v5);
    v2 = v6;
    if ( v3 < 0 )
    {
      sub_1405E2D20(v6);
      Interval.QuadPart = -500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      *((_QWORD *)a1 + 35) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 140), DelayedWorkQueue);
      return;
    }
  }
}
