/*
 * XREFs of ?StartStream@CSystemAudioDeviceSharedBase@@WBI@EAAJ_K@Z @ 0x14002FE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::StartStream(__int64 a1)
{
  return CAudioDeviceGraph::StartStream((CAudioDeviceGraph *)(a1 - 24));
}
