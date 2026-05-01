/*
 * XREFs of ?_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1806659BC
 * Callers:
 *     ?SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x180663530 (-SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z.c)
 *     ?_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x180665B0C (-_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180055F54 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_24ec9e02e088ddd9b3320f3956162b55___ @ 0x18065D0CC (Windows--Internal--ComTaskPool--QueueTask__lambda_24ec9e02e088ddd9b3320f3956162b55___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShellSnapComponent::_FireWindowSnappingEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  struct IObjectArray *v10; // [rsp+28h] [rbp-18h] BYREF
  int v11; // [rsp+30h] [rbp-10h]
  struct IObjectArray *v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF

  v13 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  if ( (int)CGITRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 312), &v12) >= 0 )
  {
    v9 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    v10 = v12;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v11 = a3;
    Windows::Internal::ComTaskPool::QueueTask__lambda_24ec9e02e088ddd9b3320f3956162b55___(
      v7,
      v6,
      *(_DWORD *)(a1 + 360),
      (__int64)&v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
}
