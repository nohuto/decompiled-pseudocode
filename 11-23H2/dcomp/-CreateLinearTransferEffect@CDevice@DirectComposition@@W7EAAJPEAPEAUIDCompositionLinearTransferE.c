/*
 * XREFs of ?CreateLinearTransferEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionLinearTransferEffect@@@Z @ 0x1800A86D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateLinearTransferEffect(
        __int64 a1,
        struct IDCompositionLinearTransferEffect **a2)
{
  return DirectComposition::CDevice::CreateLinearTransferEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
