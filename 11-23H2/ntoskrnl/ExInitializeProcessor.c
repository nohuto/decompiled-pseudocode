/*
 * XREFs of ExInitializeProcessor @ 0x140381100
 * Callers:
 *     KiStartDynamicProcessor @ 0x140973A08 (KiStartDynamicProcessor.c)
 *     ExpInitSystemPhase1 @ 0x140B49FE4 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExpHotAddProcessorToWorkers @ 0x14060D398 (ExpHotAddProcessorToWorkers.c)
 *     ExInitializeSystemLookasideList @ 0x140A8B4A8 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExInitializeProcessor(__int64 a1, char a2)
{
  __int64 Pool2; // rdi

  Pool2 = ExAllocatePool2(64LL, 128LL, 1128888389LL);
  if ( Pool2 )
  {
    ExInitializeSystemLookasideList(Pool2, 512, 1264, 1128888389, 32, (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 2176) = Pool2;
  }
  if ( a2 )
  {
    ExpHotAddProcessorToWorkers(a1);
    *(_QWORD *)(a1 + 34480) = *(_QWORD *)(ExSaPageArrays + 8LL * *(unsigned int *)(a1 + 36));
  }
  return 0LL;
}
