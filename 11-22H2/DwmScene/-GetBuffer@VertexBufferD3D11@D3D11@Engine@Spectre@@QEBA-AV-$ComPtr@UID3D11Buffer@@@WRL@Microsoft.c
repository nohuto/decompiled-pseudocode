/*
 * XREFs of ?GetBuffer@VertexBufferD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@XZ @ 0x1800D03CC
 * Callers:
 *     ?SubmitIndexBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VIndexBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800D0FC0 (-SubmitIndexBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VIndexBuffer@Eng.c)
 *     ?SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VArrayBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D27D0 (-SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VArrayBuffer@En.c)
 *     ?SubmitVertexBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@III@Z @ 0x1800D3260 (-SubmitVertexBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VVertexBuffer@E.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Spectre::Engine::D3D11::VertexBufferD3D11::GetBuffer(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 104);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
