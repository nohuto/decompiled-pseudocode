/*
 * XREFs of ?GetResourceView@DepthBufferD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@XZ @ 0x1800D05E4
 * Callers:
 *     ?ClearDepthStencil@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@_N1ME@Z @ 0x1800CFBF0 (-ClearDepthStencil@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VDepthBuffer@Eng.c)
 *     ?SubmitRenderState@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@IUVector4@Math@Utils@4@E@Z @ 0x1800D1480 (-SubmitRenderState@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderState@Eng.c)
 *     ?SubmitRenderTargets@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$array@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@$07@std@@AEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@6@@Z @ 0x1800D15E0 (-SubmitRenderTargets@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$array@V-$shared_ptr@VFram.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Spectre::Engine::D3D11::DepthBufferD3D11::GetResourceView(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 112);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
