/*
 * XREFs of ?Create@DepthBuffer@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@I@Z @ 0x18006F8B0
 * Callers:
 *     ?CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C92E0 (-CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18006F288 (-AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VDeviceDepthBuffer@Engin.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18006F640 (-Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::DepthBuffer::Create(__int64 *a1, _QWORD *a2, int a3)
{
  int v6; // r8d
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  std::_Ref_count_base *v13; // rcx

  Spectre::Engine::RendererResource::SetOption((__int64)a1, 1, 0);
  Spectre::Engine::RendererResource::SetOption(v7, v6 + 2, v6);
  Spectre::Engine::RendererResource::SetOption(v9, v8 + 4, v8);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  Spectre::Engine::DepthBuffer::Create(a1, v12, v11, v10, a3, 0LL);
  Spectre::Engine::DepthBuffer::AttachBufferInternal(a1, a2);
  v13 = (std::_Ref_count_base *)a2[1];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
}
