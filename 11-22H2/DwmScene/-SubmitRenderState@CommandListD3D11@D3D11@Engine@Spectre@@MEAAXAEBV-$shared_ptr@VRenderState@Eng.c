/*
 * XREFs of ?SubmitRenderState@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@IUVector4@Math@Utils@4@E@Z @ 0x1800D1480
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetDeviceRenderState@RenderState@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceRenderState@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180054A8C (-GetDeviceRenderState@RenderState@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceRenderState@Engine@.c)
 *     ?IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z @ 0x180070AF0 (-IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 *     ?GetResourceView@RenderTargetD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@XZ @ 0x1800CC108 (-GetResourceView@RenderTargetD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11RenderTargetView.c)
 *     ?GetBlendState@RenderStateD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11BlendState@@@WRL@Microsoft@@XZ @ 0x1800D038C (-GetBlendState@RenderStateD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11BlendState@@@WRL@Mi.c)
 *     ?GetResourceView@DepthBufferD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@XZ @ 0x1800D05E4 (-GetResourceView@DepthBufferD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11DepthStencilView@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

volatile signed __int64 *__fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitRenderState(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int128 *a4,
        unsigned __int8 a5)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v11; // rbx
  __int64 v12; // rcx
  struct Spectre::Engine::PerformanceManager *v13; // rax
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v19; // [rsp+50h] [rbp-20h]
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *a2 )
  {
    Spectre::Engine::RenderState::GetDeviceRenderState(*a2, &v18, *(_DWORD *)(a1 + 88));
    v11 = v18;
    v6 = *Spectre::Engine::D3D11::DepthBufferD3D11::GetResourceView(v18, &v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    v7 = *Spectre::Engine::D3D11::RenderTargetD3D11::GetResourceView(v11, &v16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    v8 = *Spectre::Engine::D3D11::RenderStateD3D11::GetBlendState(v11, &v17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
  }
  v12 = *(_QWORD *)(a1 + 144);
  v20 = *a4;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 344LL))(v12, v6);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 288LL))(*(_QWORD *)(a1 + 144), v7, a5);
  (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(**(_QWORD **)(a1 + 144) + 280LL))(
    *(_QWORD *)(a1 + 144),
    v8,
    &v20,
    a3);
  v13 = Spectre::Engine::PerformanceManager::Instance();
  return Spectre::Engine::PerformanceManager::IncrementCounter((__int64)v13, 4, 1);
}
