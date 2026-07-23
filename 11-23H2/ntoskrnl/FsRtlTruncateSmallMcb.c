/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x14066D4E0
 * Callers:
 *     KiInterruptThunk @ 0x14042BD60 (KiInterruptThunk.c)
 *     $$1 @ 0x14042BD70 ($$1.c)
 *     $$2 @ 0x14042BD80 ($$2.c)
 *     $$3 @ 0x14042BD90 ($$3.c)
 *     $$4 @ 0x14042BDA0 ($$4.c)
 *     $$5 @ 0x14042BDB0 ($$5.c)
 *     $$6 @ 0x14042BDC0 ($$6.c)
 *     $$7 @ 0x14042BDD0 ($$7.c)
 *     $$8 @ 0x14042BDE0 ($$8.c)
 *     $$9 @ 0x14042BDF0 ($$9.c)
 *     $$a @ 0x14042BE00 ($$a.c)
 *     $$b @ 0x14042BE10 ($$b.c)
 *     $$c @ 0x14042BE20 ($$c.c)
 *     $$d @ 0x14042BE30 ($$d.c)
 *     $$e @ 0x14042BE40 ($$e.c)
 *     $$f @ 0x14042BE50 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x14034C27C (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1403F3408 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x14042BB20 (KiCustomAccessRoutine0.c)
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
