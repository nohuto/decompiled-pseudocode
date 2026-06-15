/*
 * XREFs of ?DestroyStream@CSystemAudioDeviceBase@@WBI@EAAJ_K@Z @ 0x14002FB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::DestroyStream(__int64 a1)
{
  return CAudioDeviceGraph::DestroyStream((CAudioDeviceGraph *)(a1 - 24));
}
