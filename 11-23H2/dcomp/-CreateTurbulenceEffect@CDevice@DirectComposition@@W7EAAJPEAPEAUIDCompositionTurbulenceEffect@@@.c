/*
 * XREFs of ?CreateTurbulenceEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionTurbulenceEffect@@@Z @ 0x1800A8B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateTurbulenceEffect(
        __int64 a1,
        struct IDCompositionTurbulenceEffect **a2)
{
  return DirectComposition::CDevice::CreateTurbulenceEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
