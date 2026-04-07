/*
 * XREFs of wistd::__function::__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_::operator() @ 0x1800A4F20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180041028 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 */

void wistd::__function::__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl_void__::operator()()
{
  CAnalogCompositorManager *Instance; // rax

  Instance = CAnalogCompositorManager::GetInstance();
  CAnalogCompositorManager::OnHolographicDisplayCalibrationDriverDetected(Instance);
}
