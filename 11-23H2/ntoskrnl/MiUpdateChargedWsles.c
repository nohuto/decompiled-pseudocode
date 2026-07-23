/*
 * XREFs of MiUpdateChargedWsles @ 0x140662414
 * Callers:
 *     MiComputeProcessUserVa @ 0x1406B3148 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x1406F9680 (MiCommitPageTablesForVad.c)
 *     MiDeleteVadBitmap @ 0x140706DC4 (MiDeleteVadBitmap.c)
 *     MiReturnPageTablePageCommitment @ 0x140764B80 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 */

volatile signed __int64 *__fastcall MiUpdateChargedWsles(__int64 a1)
{
  volatile signed __int64 *result; // rax
  unsigned __int64 v2; // rdx

  result = (volatile signed __int64 *)MiGetSharedVm(a1);
  _InterlockedExchangeAdd64(result + 6, v2);
  return result;
}
