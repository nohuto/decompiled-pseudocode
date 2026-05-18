/*
 * XREFs of ?GetResourceView@RenderTargetD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@XZ @ 0x1800CC108
 * Callers:
 *     ?ClearRenderTarget@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@QEBM@Z @ 0x1800CFDC0 (-ClearRenderTarget@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VFr_ea_1800CFDC0.c)
 *     ?SubmitRenderState@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@IUVector4@Math@Utils@4@E@Z @ 0x1800D1480 (-SubmitRenderState@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderState@Eng.c)
 *     ?SubmitRenderTargets@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$array@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@$07@std@@AEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@6@@Z @ 0x1800D15E0 (-SubmitRenderTargets@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$array@V-$shared_ptr@VFram.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Spectre::Engine::D3D11::RenderTargetD3D11::GetResourceView(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 128);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
