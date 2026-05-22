/*
 * XREFs of ?AddCrossDeviceVisualChild@KernelChannel@DirectComposition@@UEAAJIPEAVChannel@2@IH0I@Z @ 0x180100370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::AddCrossDeviceVisualChild(
        DirectComposition::KernelChannel *this,
        __int64 a2,
        struct DirectComposition::Channel *a3)
{
  __int64 v4; // r8
  int v5; // eax

  v4 = 0LL;
  if ( a3 )
    v4 = *((unsigned int *)a3 + 2);
  v5 = NtDCompositionAddCrossDeviceVisualChild(*((unsigned int *)this + 2), a2, v4);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v5);
}
