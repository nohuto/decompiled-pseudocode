/*
 * XREFs of FsRtlpOplockRHIrpCancelRoutine @ 0x140360D40
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelOplockRHIrp @ 0x140360D60 (FsRtlpCancelOplockRHIrp.c)
 */

__int64 __fastcall FsRtlpOplockRHIrpCancelRoutine(__int64 a1, __int64 a2)
{
  return FsRtlpCancelOplockRHIrp(a2, 0LL);
}
