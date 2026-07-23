/*
 * XREFs of WmipUnregisterEtwProvider @ 0x1409E1DA0
 * Callers:
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x1408829A4 (WmipUnlinkInstanceSetFromGuidEntry.c)
 * Callees:
 *     WmipQueueLegacyEtwWork @ 0x140853010 (WmipQueueLegacyEtwWork.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall WmipUnregisterEtwProvider(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 Pool2; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_DWORD *)(v1 + 152))-- == 1 )
  {
    *(_QWORD *)(v1 + 112) = 0LL;
    *(_QWORD *)(v1 + 120) = 0LL;
    Pool2 = ExAllocatePool2(256LL, 24LL, 1885957463LL);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 16) = 1;
      WmipQueueLegacyEtwWork((_QWORD *)Pool2, v1, 0LL);
    }
  }
}
