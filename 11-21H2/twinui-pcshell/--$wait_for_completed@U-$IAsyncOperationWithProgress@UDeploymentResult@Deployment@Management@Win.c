/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@1@I@Z @ 0x1801C39F0
 * Callers:
 *     ??$wait_get@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUDeploymentResult@Deployment@Management@Windows@1@AEBU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@51@@Z @ 0x1801C3CF8 (--$wait_get@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??$check_pointer@X@winrt@@YAPEAXPEAX@Z @ 0x180043EF8 (--$check_pointer@X@winrt@@YAPEAXPEAX@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     WaitForSingleObject_0 @ 0x1801892F0 (WaitForSingleObject_0.c)
 *     WINRT_IMPL_CreateEventW @ 0x18018A087 (WINRT_IMPL_CreateEventW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>(
        _QWORD *a1)
{
  HANDLE EventW; // rax
  unsigned int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+38h] [rbp-10h]
  char *v9; // [rsp+50h] [rbp+8h]

  EventW = WINRT_IMPL_CreateEventW(0LL, 1, 0, 0LL);
  v7 = winrt::check_pointer<void>((__int64)EventW);
  v8 = 0;
  v9 = (char *)operator new(0x20uLL);
  *((_QWORD *)v9 + 1) = v7;
  *((_DWORD *)v9 + 4) = 0;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v9 + 6) = 1;
  *(_QWORD *)v9 = ___7__delegate_U__AsyncOperationWithProgressCompletedHandler_UDeploymentResult_Deployment_Management_Windows_winrt__UDeploymentProgress_2345__Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperationWithProgress_UDeploymentResult_Deployment_Management_Windows_winrt__UDeploymentProgress_2345__Foundation_Windows_winrt___impl_4_YA_AEBU__IAsyncOperationWithProgress_UDeploymentResult_Deployment_Management_Windows_winrt__UDeploymentProgress_2345__234_I_Z__impl_winrt__6B_;
  v6[0] = v9;
  v6[1] = v9 + 8;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  winrt::check_hresult(v3);
  WaitForSingleObject_0(*((HANDLE *)v9 + 1), 0xFFFFFFFF);
  v4 = *((_DWORD *)v9 + 4);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)v6);
  return v4;
}
