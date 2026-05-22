/*
 * XREFs of ?TelemetrySetApplicationId@KernelChannel@DirectComposition@@UEAAJ_KPEBX@Z @ 0x18008BE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::TelemetrySetApplicationId(
        DirectComposition::KernelChannel *this,
        __int64 a2,
        const void *a3)
{
  int v3; // eax

  v3 = NtDCompositionTelemetrySetApplicationId(*((unsigned int *)this + 2), a2, a3);
  return DirectComposition::CDevice::HRESULTFromNTSTATUS(v3);
}
