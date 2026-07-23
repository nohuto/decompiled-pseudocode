/*
 * XREFs of MiUnmapVad @ 0x14071F4A4
 * Callers:
 *     MiDeletePartialVad @ 0x140309F64 (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 *     MiCleanVad @ 0x14071F590 (MiCleanVad.c)
 *     MiMapViewOfDataSection @ 0x140720480 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1402A2664 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1402A2770 (MiDereferenceControlAreaFile.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     PfCheckDeprioritizeFile @ 0x1407609A4 (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x1408AC292 (MiLogMapFileEvent.c)
 */

void __fastcall MiUnmapVad(unsigned int *P, __int64 a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  _KPROCESS *Process; // rcx

  if ( (P[16] & 0x2000000) != 0 )
  {
    v6 = **((_QWORD **)P + 9);
    v7 = MiReferenceControlAreaFile(v6);
    v8 = *(_QWORD *)(v7 + 24);
    MiDereferenceControlAreaFile(v6, v7);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
    {
      if ( (unsigned int)PfCheckDeprioritizeFile(
                           HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]),
                           v8,
                           (P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32))
                         - (P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
                         + 1) )
        a3 |= 0x80000000;
    }
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && *((_QWORD *)P + 9) )
    MiLogMapFileEvent(P, 1062LL);
  MiDeleteVad(P, a2, a3);
}
