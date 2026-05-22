/*
 * XREFs of ??$?4VInputConfigContextProvider@@@?$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x1800355EC
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180035300 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ @ 0x180152AE8 (-Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x1801B1900 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?Initialize@GazeProcessor@@IEAAJXZ @ 0x1801E6C24 (-Initialize@GazeProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ISystemContextProvider>::operator=<InputConfigContextProvider>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v5);
  v5 = *a1;
  *a1 = a2;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v5);
  return a1;
}
