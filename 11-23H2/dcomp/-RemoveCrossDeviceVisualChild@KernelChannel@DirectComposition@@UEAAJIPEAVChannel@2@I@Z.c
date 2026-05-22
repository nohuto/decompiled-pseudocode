/*
 * XREFs of ?RemoveCrossDeviceVisualChild@KernelChannel@DirectComposition@@UEAAJIPEAVChannel@2@I@Z @ 0x180100460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::RemoveCrossDeviceVisualChild(
        DirectComposition::KernelChannel *this,
        __int64 a2,
        struct DirectComposition::Channel *a3)
{
  unsigned int v3; // eax
  int v4; // eax

  v3 = 0;
  if ( a3 )
    v3 = *((_DWORD *)a3 + 2);
  v4 = NtDCompositionRemoveCrossDeviceVisualChild(*((unsigned int *)this + 2), a2, v3);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v4);
}
