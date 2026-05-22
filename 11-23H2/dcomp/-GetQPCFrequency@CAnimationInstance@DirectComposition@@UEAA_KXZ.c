/*
 * XREFs of ?GetQPCFrequency@CAnimationInstance@DirectComposition@@UEAA_KXZ @ 0x18008E960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall DirectComposition::CAnimationInstance::GetQPCFrequency(
        DirectComposition::CAnimationInstance *this)
{
  return DirectComposition::CDevice::s_qpcFrequency;
}
