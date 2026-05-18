/*
 * XREFs of ?Create@CommandList@Engine@Spectre@@UEAA_NAEBVState@23@@Z @ 0x1800391E0
 * Callers:
 *     ?Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z @ 0x1800CFED0 (-Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$make_unique@VCommandListState@Engine@Spectre@@PEAVRenderDevice@23@AEBVState@23@$0A@@std@@YA?AV?$unique_ptr@VCommandListState@Engine@Spectre@@U?$default_delete@VCommandListState@Engine@Spectre@@@std@@@0@$$QEAPEAVRenderDevice@Engine@Spectre@@AEBVState@34@@Z @ 0x180038F80 (--$make_unique@VCommandListState@Engine@Spectre@@PEAVRenderDevice@23@AEBVState@23@$0A@@std@@YA-A.c)
 *     ??1?$unique_ptr@VCommandListState@Engine@Spectre@@U?$default_delete@VCommandListState@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003903C (--1-$unique_ptr@VCommandListState@Engine@Spectre@@U-$default_delete@VCommandListState@Engine@Spe.c)
 *     ??R?$default_delete@VCommandListState@Engine@Spectre@@@std@@QEBAXPEAVCommandListState@Engine@Spectre@@@Z @ 0x1800390C0 (--R-$default_delete@VCommandListState@Engine@Spectre@@@std@@QEBAXPEAVCommandListState@Engine@Spe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Spectre::Engine::CommandList::Create(
        Spectre::Engine::CommandList *this,
        const struct Spectre::Engine::State *a2)
{
  const struct Spectre::Engine::State *v3; // r11
  Spectre::Engine::CommandList *v4; // rax
  __int64 *v5; // r8
  __int64 v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rdx
  struct Spectre::Engine::RenderDevice *v9; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]
  struct Spectre::Engine::RenderDevice *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 72, &v9);
  v11 = v9;
  v4 = (Spectre::Engine::CommandList *)std::make_unique<Spectre::Engine::CommandListState,Spectre::Engine::RenderDevice *,Spectre::Engine::State const &,0>(
                                         &v12,
                                         &v11,
                                         v3);
  v5 = (__int64 *)((char *)this + 96);
  if ( (Spectre::Engine::CommandList *)((char *)this + 96) != v4 )
  {
    v6 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0LL;
    v7 = (__int64 (__fastcall ***)(_QWORD, __int64))*v5;
    *v5 = v6;
    if ( v7 )
      std::default_delete<Spectre::Engine::CommandListState>::operator()(v6, v7);
  }
  std::unique_ptr<Spectre::Engine::CommandListState>::~unique_ptr<Spectre::Engine::CommandListState>(&v12);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  (*(void (__fastcall **)(Spectre::Engine::CommandList *))(*(_QWORD *)this + 48LL))(this);
  return 1;
}
