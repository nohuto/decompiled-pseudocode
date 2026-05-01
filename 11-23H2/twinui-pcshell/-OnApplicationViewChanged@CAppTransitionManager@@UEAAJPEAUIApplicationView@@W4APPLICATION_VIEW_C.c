/*
 * XREFs of ?OnApplicationViewChanged@CAppTransitionManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180189610
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::OnApplicationViewChanged(__int64 a1, __int64 a2, int a3)
{
  if ( a3 == 7 )
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 112), a2);
  return 0LL;
}
