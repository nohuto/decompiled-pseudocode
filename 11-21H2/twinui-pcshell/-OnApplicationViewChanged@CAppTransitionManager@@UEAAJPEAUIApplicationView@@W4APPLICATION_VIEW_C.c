/*
 * XREFs of ?OnApplicationViewChanged@CAppTransitionManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801597F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppTransitionManager::OnApplicationViewChanged(__int64 a1, __int64 a2, int a3)
{
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 == 7 && *(_QWORD *)(a1 + 112) != a2 )
  {
    v6[0] = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6);
    v6[0] = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = a2;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v6);
  }
  return 0LL;
}
