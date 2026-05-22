/*
 * XREFs of ?CreateSurfaceFactory@CDevice@DirectComposition@@W7EAAJPEAUIUnknown@@PEAPEAUIDCompositionSurfaceFactory@@@Z @ 0x1800A8970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateSurfaceFactory(
        __int64 a1,
        struct IUnknown *a2,
        struct IDCompositionSurfaceFactory **a3)
{
  return DirectComposition::CDevice::CreateSurfaceFactory((DirectComposition::CDevice *)(a1 - 8), a2, a3);
}
