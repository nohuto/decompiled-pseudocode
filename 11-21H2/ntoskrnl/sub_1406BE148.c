/*
 * XREFs of sub_1406BE148 @ 0x1406BE148
 * Callers:
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1402A6980 @ 0x1402A6980 (sub_1402A6980.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_1406BE148()
{
  __int64 v0; // rax
  __int64 Pool2; // [rsp+20h] [rbp-18h]

  Pool2 = ExAllocatePool2(288LL, 160LL, 1869763398LL);
  v0 = ExAllocatePool2(96LL, 56LL, 1869763398LL);
  *(_QWORD *)(Pool2 + 152) = v0;
  *(_DWORD *)v0 = 1;
  *(_QWORD *)(v0 + 8) = 0LL;
  *(_DWORD *)(v0 + 16) = 0;
  KeInitializeEvent((PRKEVENT)(v0 + 24), SynchronizationEvent, 0);
  *(_QWORD *)(Pool2 + 48) = Pool2 + 40;
  *(_QWORD *)(Pool2 + 40) = Pool2 + 40;
  *(_QWORD *)(Pool2 + 64) = Pool2 + 56;
  *(_QWORD *)(Pool2 + 56) = Pool2 + 56;
  *(_QWORD *)(Pool2 + 80) = Pool2 + 72;
  *(_QWORD *)(Pool2 + 72) = Pool2 + 72;
  *(_QWORD *)(Pool2 + 96) = Pool2 + 88;
  *(_QWORD *)(Pool2 + 88) = Pool2 + 88;
  *(_QWORD *)(Pool2 + 112) = Pool2 + 104;
  *(_QWORD *)(Pool2 + 104) = Pool2 + 104;
  *(_QWORD *)(Pool2 + 128) = Pool2 + 120;
  *(_QWORD *)(Pool2 + 120) = Pool2 + 120;
  *(_DWORD *)(Pool2 + 144) = 1;
  return Pool2;
}
