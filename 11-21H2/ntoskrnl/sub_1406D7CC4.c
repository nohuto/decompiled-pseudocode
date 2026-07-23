/*
 * XREFs of sub_1406D7CC4 @ 0x1406D7CC4
 * Callers:
 *     sub_1407927AC @ 0x1407927AC (sub_1407927AC.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1406D7D74 @ 0x1406D7D74 (sub_1406D7D74.c)
 */

void __fastcall sub_1406D7CC4(int a1)
{
  if ( a1 )
  {
    sub_1406D7D74();
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(qword_140CE1A80 + 40), 2u);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(qword_140CE1A80 + 40), 3, 2) == 2 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(qword_140CE1A80 + 8), DelayedWorkQueue);
  }
}
