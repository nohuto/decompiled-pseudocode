/*
 * XREFs of ?GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800D040C
 * Callers:
 *     ?CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@@Z @ 0x1800C4CE0 (-CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRe.c)
 *     ?CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@AEAVFrameBuffer@34@@Z @ 0x1800C5080 (-CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVI.c)
 *     ?ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800C9120 (-ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?FinalizeSubmit@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800D01E0 (-FinalizeSubmit@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VCommandList@Engine.c)
 *     ?Begin@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800D7C80 (-Begin@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXV-$shared_ptr@VCommandList@Engine@Spectre@@@std@.c)
 *     ?End@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z @ 0x1800D7E20 (-End@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@0.c)
 *     ?GetData@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA?AUGetDataResult@GpuQuery@34@W4FlushOption@634@@Z @ 0x1800D7F10 (-GetData@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA-AUGetDataResult@GpuQuery@34@W4FlushOption@634@.c)
 *     ?GetStatistics@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA?AUGetStatisticsResult@GpuQuery@34@W4FlushOption@634@@Z @ 0x1800D8130 (-GetStatistics@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA-AUGetStatisticsResult@GpuQuery@34@W4Flus.c)
 *     ?ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D8F80 (-ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Engine::D3D11::CommandListD3D11::GetContext(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v7; // [rsp+30h] [rbp-18h]

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v6);
  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(v6 + 24));
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v4 = *(_QWORD *)(a1 + 144);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
