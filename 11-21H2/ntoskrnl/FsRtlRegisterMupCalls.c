/*
 * XREFs of FsRtlRegisterMupCalls @ 0x140865560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FsRtlRegisterMupCalls(__int64 a1)
{
  _InterlockedExchange64(&pFsRtlpMupCalls, a1);
}
