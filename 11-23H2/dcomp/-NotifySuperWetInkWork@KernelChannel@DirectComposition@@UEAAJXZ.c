/*
 * XREFs of ?NotifySuperWetInkWork@KernelChannel@DirectComposition@@UEAAJXZ @ 0x180100430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::NotifySuperWetInkWork(DirectComposition::KernelChannel *this)
{
  int v1; // eax

  v1 = NtDCompositionNotifySuperWetInkWork(*((unsigned int *)this + 2));
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v1);
}
