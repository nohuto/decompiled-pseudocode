/*
 * XREFs of ?ReleaseAllResources@KernelChannel@DirectComposition@@UEAAJPEAE@Z @ 0x18008DA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::ReleaseAllResources(
        DirectComposition::KernelChannel *this,
        unsigned __int8 *a2)
{
  int v2; // eax

  v2 = NtDCompositionReleaseAllResources(*((unsigned int *)this + 2), a2);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v2);
}
