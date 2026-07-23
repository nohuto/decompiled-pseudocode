/*
 * XREFs of KeEnableProfiling @ 0x140974FD8
 * Callers:
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 * Callees:
 *     KeUpdateTotalCyclesCurrentThread @ 0x14032A0D8 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiBeginCounterAccumulation @ 0x140574630 (KiBeginCounterAccumulation.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeEnableProfiling(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 360) )
    return 3221226243LL;
  Pool2 = ExAllocatePool2(65LL, 424LL, 1718579792LL);
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(Pool2 + 8) = a4;
  *(_DWORD *)(Pool2 + 16) = a2;
  *(_QWORD *)(Pool2 + 32) = a3;
  *(_QWORD *)(a1 + 360) = Pool2;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x10u);
  *(_QWORD *)(Pool2 + 24) = KeUpdateTotalCyclesCurrentThread(a1, 0LL);
  if ( (a2 & 1) != 0 || a3 )
  {
    KiBeginCounterAccumulation(a1, 0);
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x11u);
  }
  return 0LL;
}
