/*
 * XREFs of ?SubmitRenderTargets@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$array@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@$07@std@@AEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@6@@Z @ 0x1800D15E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800CB668 (--4-$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetResourceView@RenderTargetD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@XZ @ 0x1800CC108 (-GetResourceView@RenderTargetD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11RenderTargetView.c)
 *     ??$dynamic_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@std@@YA?AV?$shared_ptr@VDepthBufferD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@0@@Z @ 0x1800CF54C (--$dynamic_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@std@@YA-A.c)
 *     ??$dynamic_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@std@@YA?AV?$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@0@@Z @ 0x1800CF7B4 (--$dynamic_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@std@@YA-.c)
 *     ?GetDeviceDepthBuffer@DepthBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x1800D04E8 (-GetDeviceDepthBuffer@DepthBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceDepthBuffer@Engine@.c)
 *     ?GetDeviceRenderTarget@FrameBuffer@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x1800D0540 (-GetDeviceRenderTarget@FrameBuffer@Engine@Spectre@@QEAA-AV-$shared_ptr@VDeviceFrameBuffer@Engine.c)
 *     ?GetResourceView@DepthBufferD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@XZ @ 0x1800D05E4 (-GetResourceView@DepthBufferD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11DepthStencilView@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitRenderTargets(__int64 a1, _QWORD *a2, __int64 *a3)
{
  int v5; // ebx
  __int64 v6; // r12
  __int64 *v7; // r15
  __int64 v8; // rsi
  __int64 *DeviceRenderTarget; // rax
  int v10; // ebx
  __int64 v11; // rcx
  std::_Ref_count_base *v12; // rdi
  __int64 *ResourceView; // rax
  int v14; // ecx
  __int64 v15; // r14
  __int64 *DeviceDepthBuffer; // rax
  __int64 v17; // rcx
  char v18; // dl
  char v19; // bl
  std::_Ref_count_base *v20; // rsi
  __int64 *v21; // rax
  char v22; // di
  char v23; // di
  __int64 v24; // rbx
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v28; // [rsp+48h] [rbp-B8h]
  __int64 *v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  std::_Ref_count_base *v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v34; // [rsp+78h] [rbp-88h]
  char v35; // [rsp+80h] [rbp-80h] BYREF
  std::_Ref_count_base *v36; // [rsp+88h] [rbp-78h]
  _QWORD v37[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v38[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v39[64]; // [rsp+E0h] [rbp-20h] BYREF

  v29 = a3;
  v26 = a1;
  v5 = 0;
  LODWORD(v25) = 0;
  v6 = 8LL;
  `eh vector constructor iterator'(
    v39,
    8LL,
    8LL,
    (void (*)(void *))Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::ComPtr<ID3D11RenderTargetView>);
  v7 = (__int64 *)v39;
  v8 = 0LL;
  do
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v27, a2);
    if ( v27 )
    {
      DeviceRenderTarget = Spectre::Engine::FrameBuffer::GetDeviceRenderTarget(v27, &v33, *(_DWORD *)(a1 + 88));
      v10 = v5 | 1;
      v11 = *DeviceRenderTarget;
    }
    else
    {
      v36 = 0LL;
      DeviceRenderTarget = (__int64 *)&v35;
      v10 = v5 | 2;
      v11 = 0LL;
    }
    v37[0] = v11;
    v12 = (std::_Ref_count_base *)DeviceRenderTarget[1];
    v37[1] = v12;
    *DeviceRenderTarget = 0LL;
    DeviceRenderTarget[1] = 0LL;
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      if ( v36 )
        std::_Ref_count_base::_Decref(v36);
    }
    if ( (v10 & 1) != 0 )
    {
      v10 &= ~1u;
      if ( v34 )
        std::_Ref_count_base::_Decref(v34);
    }
    std::dynamic_pointer_cast<Spectre::Engine::D3D11::RenderTargetD3D11,Spectre::Engine::DeviceFrameBuffer>(&v30, v37);
    if ( v30 )
    {
      ResourceView = Spectre::Engine::D3D11::RenderTargetD3D11::GetResourceView(v30, &v32);
      v14 = 4;
    }
    else
    {
      v25 = 0LL;
      ResourceView = &v25;
      v14 = 8;
    }
    v5 = v14 | v10;
    Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=(v7, ResourceView);
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
    }
    v38[v8] = *(_QWORD *)&v39[v8 * 8];
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    a2 += 2;
    ++v7;
    ++v8;
    --v6;
  }
  while ( v6 );
  v15 = v26;
  if ( *v29 )
  {
    DeviceDepthBuffer = Spectre::Engine::DepthBuffer::GetDeviceDepthBuffer(*v29, &v33, *(_DWORD *)(v26 + 88));
    v17 = *DeviceDepthBuffer;
    v18 = 16;
  }
  else
  {
    v28 = 0LL;
    DeviceDepthBuffer = &v27;
    v17 = 0LL;
    v18 = 32;
  }
  v19 = v18 | v5;
  v30 = v17;
  v20 = (std::_Ref_count_base *)DeviceDepthBuffer[1];
  v31 = v20;
  *DeviceDepthBuffer = 0LL;
  DeviceDepthBuffer[1] = 0LL;
  if ( (v19 & 0x20) != 0 )
  {
    v19 &= ~0x20u;
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
  }
  if ( (v19 & 0x10) != 0 )
  {
    v19 &= ~0x10u;
    if ( v34 )
      std::_Ref_count_base::_Decref(v34);
  }
  std::dynamic_pointer_cast<Spectre::Engine::D3D11::DepthBufferD3D11,Spectre::Engine::DeviceDepthBuffer>(&v27, &v30);
  if ( v27 )
  {
    v21 = Spectre::Engine::D3D11::DepthBufferD3D11::GetResourceView(v27, &v29);
    v22 = 64;
  }
  else
  {
    v26 = 0LL;
    v21 = &v26;
    v22 = 0x80;
  }
  v23 = v19 | v22;
  v24 = 0LL;
  v25 = 0LL;
  if ( &v25 != v21 )
  {
    v24 = *v21;
    v25 = *v21;
    *v21 = 0LL;
  }
  if ( v23 < 0 )
  {
    v23 &= ~0x80u;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  }
  if ( (v23 & 0x40) != 0 )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64, void (__fastcall *)(void *)))(**(_QWORD **)(v15 + 144)
                                                                                          + 264LL))(
    *(_QWORD *)(v15 + 144),
    8LL,
    v38,
    v24,
    Microsoft::WRL::ComPtr<ID3D11DeviceContext1>::~ComPtr<ID3D11DeviceContext1>);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  `eh vector destructor iterator'(
    v39,
    8LL,
    8LL,
    (void (*)(void *))Microsoft::WRL::ComPtr<ID3D11DeviceContext1>::~ComPtr<ID3D11DeviceContext1>);
}
