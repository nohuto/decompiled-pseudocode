/*
 * XREFs of sub_1406F20E8 @ 0x1406F20E8
 * Callers:
 *     sub_1406F2000 @ 0x1406F2000 (sub_1406F2000.c)
 *     sub_140796530 @ 0x140796530 (sub_140796530.c)
 * Callees:
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 *     sub_1406F21DC @ 0x1406F21DC (sub_1406F21DC.c)
 *     sub_14078F0FC @ 0x14078F0FC (sub_14078F0FC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406F20E8(PRKQUEUE Queue, unsigned int *a2)
{
  int v3; // edi
  _LIST_ENTRY *Pool2; // rax

  v3 = sub_1406F21DC(a2[1], a2);
  if ( v3 < 0 )
  {
    _InterlockedIncrement(&Queue[1].Header.Lock);
  }
  else
  {
    Pool2 = (_LIST_ENTRY *)ExAllocatePool2(64LL, 56LL, 1920431173LL);
    if ( Pool2 )
    {
      Pool2[1].Flink = 0LL;
      KeInsertQueue(Queue, Pool2);
    }
    else
    {
      v3 = -1073741801;
      _InterlockedIncrement(&Queue[1].Header.Lock);
      sub_14078F0FC(0LL);
    }
  }
  return (unsigned int)v3;
}
