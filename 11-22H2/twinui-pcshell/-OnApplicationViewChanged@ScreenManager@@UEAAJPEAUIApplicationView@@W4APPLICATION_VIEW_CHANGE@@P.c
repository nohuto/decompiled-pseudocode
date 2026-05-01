/*
 * XREFs of ?OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180181CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1801402AC (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___ @ 0x1805C53E8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___.c)
 */

__int64 __fastcall ScreenManager::OnApplicationViewChanged(__int64 a1, __int64 a2, int a3)
{
  volatile int *v6; // rdx
  __int64 v7; // r8
  volatile int *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h] BYREF

  if ( (unsigned int)(a3 - 1) <= 1 && *(_QWORD *)(a1 + 296) )
  {
    v12 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v13 = a1 - 24;
    if ( a1 == 24 )
    {
      v14 = 0LL;
    }
    else
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 - 24 + 44), v6);
      v14 = v7;
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 20), v8);
    }
    v15 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___(v10, v9, v11, &v14);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  }
  return 0LL;
}
