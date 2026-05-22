/*
 * XREFs of DCompositionGetFrameId @ 0x1800FF670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DCompositionGetFrameId(__int64 a1, __int64 a2)
{
  int FrameId; // eax

  FrameId = NtDCompositionGetFrameId(a1, a2);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(FrameId);
}
