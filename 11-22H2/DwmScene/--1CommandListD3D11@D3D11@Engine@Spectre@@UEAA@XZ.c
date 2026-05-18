/*
 * XREFs of ??1CommandListD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800CFA9C
 * Callers:
 *     ??_GCommandListD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800CFB70 (--_GCommandListD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11ShaderResourceView@@@01@$$T@Z @ 0x18001070C (--$-9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11ShaderResourceView@@@01@.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?IsActive@RenderDevice@Engine@Spectre@@QEBA_NXZ @ 0x180026CE4 (-IsActive@RenderDevice@Engine@Spectre@@QEBA_NXZ.c)
 *     ?FinalizeFlush@CommandListD3D11@D3D11@Engine@Spectre@@MEAAX_N@Z @ 0x1800D0160 (-FinalizeFlush@CommandListD3D11@D3D11@Engine@Spectre@@MEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::CommandListD3D11::~CommandListD3D11(
        Spectre::Engine::D3D11::CommandListD3D11 *this)
{
  __int64 *v2; // rdi
  Spectre::Engine::RenderDevice *v3; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v4; // [rsp+28h] [rbp-10h]

  *(_QWORD *)this = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 72, &v3);
  if ( v3 && Spectre::Engine::RenderDevice::IsActive(v3) )
  {
    v2 = (__int64 *)((char *)this + 144);
    if ( Microsoft::WRL::operator!=<ID3D11ShaderResourceView>((_QWORD *)this + 18) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 880LL))(*v2);
      Spectre::Engine::D3D11::CommandListD3D11::FinalizeFlush(this, 0);
    }
  }
  else
  {
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsCommandListD3D11,
      3,
      "WARNING: CommandListD3D11 destroyed after RenderDeviceD3D11 has been shutdown.\n");
    v2 = (__int64 *)((char *)this + 144);
  }
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  Spectre::Engine::CommandList::~CommandList((std::_Ref_count_base **)this);
}
