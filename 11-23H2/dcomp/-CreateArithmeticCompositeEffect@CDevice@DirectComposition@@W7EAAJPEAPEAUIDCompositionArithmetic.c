/*
 * XREFs of ?CreateArithmeticCompositeEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionArithmeticCompositeEffect@@@Z @ 0x1800A85B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateArithmeticCompositeEffect(
        __int64 a1,
        struct IDCompositionArithmeticCompositeEffect **a2)
{
  return DirectComposition::CDevice::CreateArithmeticCompositeEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
