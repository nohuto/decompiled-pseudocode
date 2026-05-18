/*
 * XREFs of ?Reset@CommandList@Engine@Spectre@@UEAAXXZ @ 0x1800395B0
 * Callers:
 *     ??1CommandList@Engine@Spectre@@UEAA@XZ @ 0x18003905C (--1CommandList@Engine@Spectre@@UEAA@XZ.c)
 *     ?Reset@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D0820 (-Reset@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetShaderModelActive@RenderDevice@Engine@Spectre@@QEBA?AW4EShaderModel@23@XZ @ 0x18002684C (-GetShaderModelActive@RenderDevice@Engine@Spectre@@QEBA-AW4EShaderModel@23@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::CommandList::Reset(Spectre::Engine::CommandList *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v4; // [rsp+28h] [rbp-10h]

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 72, &v3);
  if ( v3 )
    *((_DWORD *)this + 26) = Spectre::Engine::RenderDevice::GetShaderModelActive(v3);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
