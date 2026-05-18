/*
 * XREFs of ?RecoverData@VertexBufferD3D11@D3D11@Engine@Spectre@@UEBA?AV?$shared_ptr@X@std@@XZ @ 0x1800D37A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?RecoverBufferData@D3DBufferUtils@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@X@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@6@V?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@I@Z @ 0x1800D86DC (-RecoverBufferData@D3DBufferUtils@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@X@std@@AEBV-$shared_pt.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::D3D11::VertexBufferD3D11::RecoverData(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 16LL);
  v5 = *(_QWORD *)(a1 + 104);
  v9 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v7);
  Spectre::Engine::D3D11::D3DBufferUtils::RecoverBufferData(a2, &v7, &v9, v4);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
