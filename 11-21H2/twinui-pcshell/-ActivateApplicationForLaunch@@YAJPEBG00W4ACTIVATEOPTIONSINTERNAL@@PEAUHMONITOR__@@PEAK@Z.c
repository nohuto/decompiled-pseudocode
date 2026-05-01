/*
 * XREFs of ?ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z @ 0x1805EFFC8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::Run @ 0x1803B4210 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1805F0088 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 */

__int64 ActivateApplicationForLaunch(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 *ppv; // rbx
  HRESULT Instance; // ebx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, a4);
  v10 = a4;
  v9 = 0LL;
  ppv = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v9, (__int64 *)va);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(ppv);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               1u,
               &GUID_54e4c428_d1d4_47d4_ade6_46c829114a7d,
               (LPVOID *)ppv);
  if ( Instance >= 0 )
    Instance = ActivateApplicationForLaunchWithManager(v9, a1, &LocaleName, a3, 0, 0LL, 0LL, &v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  return (unsigned int)Instance;
}
