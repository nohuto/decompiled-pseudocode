/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1800A2E90
 * Callers:
 *     <none>
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x1800A3A68 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x1800A3B94 (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@.c)
 *     ??$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAVAgileRef@01@@Z @ 0x1800A44EC (--$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIAct.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_>::Run(
        __int64 a1)
{
  __int64 *v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(__int64 **)(a1 + 16);
  v8 = 0LL;
  v3 = v1[1];
  v4 = *v1;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v8);
  **(_DWORD **)(a1 + 32) = Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ *,HSTRING__ *>(
                             &v8,
                             v4,
                             v3);
  if ( **(int **)(a1 + 32) >= 0 )
  {
    v5 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(*(_QWORD *)(a1 + 24), &v9);
    v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(v5);
    **(_DWORD **)(a1 + 32) = Microsoft::WRL::AsAgile<Windows::ApplicationModel::Activation::IActivatedEventArgs>(v8, v6);
  }
  return Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v8);
}
