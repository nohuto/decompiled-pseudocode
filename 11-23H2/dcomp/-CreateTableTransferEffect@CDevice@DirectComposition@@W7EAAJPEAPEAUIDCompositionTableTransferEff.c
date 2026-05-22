/*
 * XREFs of ?CreateTableTransferEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionTableTransferEffect@@@Z @ 0x1800A89D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateTableTransferEffect(
        __int64 a1,
        struct IDCompositionTableTransferEffect **a2)
{
  return DirectComposition::CDevice::CreateTableTransferEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
