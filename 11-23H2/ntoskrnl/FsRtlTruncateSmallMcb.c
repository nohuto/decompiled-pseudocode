/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x14066CF90
 * Callers:
 *     KiInterruptThunk @ 0x14042B9D0 (KiInterruptThunk.c)
 *     $$1 @ 0x14042B9E0 ($$1.c)
 *     $$2 @ 0x14042B9F0 ($$2.c)
 *     $$3 @ 0x14042BA00 ($$3.c)
 *     $$4 @ 0x14042BA10 ($$4.c)
 *     $$5 @ 0x14042BA20 ($$5.c)
 *     $$6 @ 0x14042BA30 ($$6.c)
 *     $$7 @ 0x14042BA40 ($$7.c)
 *     $$8 @ 0x14042BA50 ($$8.c)
 *     $$9 @ 0x14042BA60 ($$9.c)
 *     $$a @ 0x14042BA70 ($$a.c)
 *     $$b @ 0x14042BA80 ($$b.c)
 *     $$c @ 0x14042BA90 ($$c.c)
 *     $$d @ 0x14042BAA0 ($$d.c)
 *     $$e @ 0x14042BAB0 ($$e.c)
 *     $$f @ 0x14042BAC0 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x14034C0DC (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1403F3228 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x14042B790 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax

  KeExitRetpoline(a1, a2, a3);
  result = ((__int64)a2 >> 47) + 1;
  if ( (__int64)a2 >> 47 != -1 && result != 1 )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    return KiCustomAccessRoutine0(a2);
  }
  return result;
}
