/*
 * XREFs of ?GetFrameIdFromBatchId@KernelChannel@DirectComposition@@UEAAJKPEA_K@Z @ 0x180100400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::GetFrameIdFromBatchId(
        DirectComposition::KernelChannel *this,
        __int64 a2,
        unsigned __int64 *a3)
{
  int FrameIdFromBatchId; // eax

  FrameIdFromBatchId = NtDCompositionGetFrameIdFromBatchId(*((unsigned int *)this + 2), a2, a3);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(FrameIdFromBatchId);
}
