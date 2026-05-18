/*
 * XREFs of ?GetBlendState@RenderStateD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11BlendState@@@WRL@Microsoft@@XZ @ 0x1800D038C
 * Callers:
 *     ?SubmitRenderState@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@IUVector4@Math@Utils@4@E@Z @ 0x1800D1480 (-SubmitRenderState@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderState@Eng.c)
 *     ?SubmitShaderConstantBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800D19A0 (-SubmitShaderConstantBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV-$s.c)
 *     ?SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2900 (-SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VConstantBuffer.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::D3D11::RenderStateD3D11::GetBlendState(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 120);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
