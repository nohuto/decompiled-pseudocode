/*
 * XREFs of ?FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805B5F1C
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805B61D0 (-OnApplicationViewChanged@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationView@@W4APPLIC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180123BAC (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f3af541e54fed362ec31214e5f0f3de2___ @ 0x1805B594C (Windows--Internal--ComTaskPool--QueueTask__lambda_f3af541e54fed362ec31214e5f0f3de2___.c)
 *     _lambda_f3af541e54fed362ec31214e5f0f3de2_::__lambda_f3af541e54fed362ec31214e5f0f3de2_ @ 0x1805B5B14 (_lambda_f3af541e54fed362ec31214e5f0f3de2_--__lambda_f3af541e54fed362ec31214e5f0f3de2_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewFilteredCollection::FireApplicationViewChangeNotification(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  int CallbackArray; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  struct IObjectArray *v18; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IObjectArray *v20; // [rsp+70h] [rbp+20h] BYREF

  v20 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  CallbackArray = CGITRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 128), &v20);
  v9 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v14 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
    v13 = a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v15 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    v16 = a3;
    v17 = a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
    v18 = v20;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_f3af541e54fed362ec31214e5f0f3de2___(
           v11,
           v10,
           *(_DWORD *)(a1 + 176),
           (__int64)&v15);
    lambda_f3af541e54fed362ec31214e5f0f3de2_::__lambda_f3af541e54fed362ec31214e5f0f3de2_(&v15);
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC5,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  return (unsigned int)v9;
}
