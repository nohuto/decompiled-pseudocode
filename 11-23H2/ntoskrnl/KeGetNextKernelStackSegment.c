/*
 * XREFs of KeGetNextKernelStackSegment @ 0x140222C2C
 * Callers:
 *     KiInSwapKernelStacks @ 0x1402227B4 (KiInSwapKernelStacks.c)
 *     KeEnumerateKernelStackSegments @ 0x140222B70 (KeEnumerateKernelStackSegments.c)
 *     RtlpIsFrameInBoundsEx @ 0x1402A6840 (RtlpIsFrameInBoundsEx.c)
 *     IopMarkPagesForProcessorData @ 0x14055DCA8 (IopMarkPagesForProcessorData.c)
 * Callees:
 *     <none>
 */

char __fastcall KeGetNextKernelStackSegment(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax

  if ( a3 )
  {
    *a2 = a1[7];
    a2[1] = a1[6];
    a2[2] = a1[11];
    a2[3] = a1[5];
    a2[4] = a1[131];
    a2[5] = a1[132];
    a2[6] = a1[129];
    a2[7] = a1[130];
  }
  else
  {
    v3 = a2[3];
    if ( !*(_QWORD *)(v3 + 16) )
      return 0;
    *(_OWORD *)a2 = *(_OWORD *)(v3 + 16);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v3 + 32);
    *((_OWORD *)a2 + 2) = *(_OWORD *)(v3 + 48);
    *((_OWORD *)a2 + 3) = *(_OWORD *)(v3 + 64);
  }
  return 1;
}
