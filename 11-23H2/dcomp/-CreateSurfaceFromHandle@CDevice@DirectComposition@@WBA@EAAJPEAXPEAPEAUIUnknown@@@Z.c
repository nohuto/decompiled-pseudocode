/*
 * XREFs of ?CreateSurfaceFromHandle@CDevice@DirectComposition@@WBA@EAAJPEAXPEAPEAUIUnknown@@@Z @ 0x1800A8990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateSurfaceFromHandle(__int64 a1, void *a2, struct IUnknown **a3)
{
  return DirectComposition::CDevice::CreateSurfaceFromHandle((DirectComposition::CDevice *)(a1 - 16), a2, a3);
}
