/*
 * XREFs of ??1CommandList@Engine@Spectre@@UEAA@XZ @ 0x18003905C
 * Callers:
 *     ??_GCommandList@Engine@Spectre@@UEAAPEAXI@Z @ 0x180039100 (--_GCommandList@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1CommandListD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800CFA9C (--1CommandListD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VCommandListState@Engine@Spectre@@U?$default_delete@VCommandListState@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003903C (--1-$unique_ptr@VCommandListState@Engine@Spectre@@U-$default_delete@VCommandListState@Engine@Spe.c)
 *     ?Reset@CommandList@Engine@Spectre@@UEAAXXZ @ 0x1800395B0 (-Reset@CommandList@Engine@Spectre@@UEAAXXZ.c)
 */

void __fastcall Spectre::Engine::CommandList::~CommandList(std::_Ref_count_base **this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  *this = (std::_Ref_count_base *)&Spectre::Engine::CommandList::`vftable';
  if ( this[12] )
    Spectre::Engine::CommandList::Reset((Spectre::Engine::CommandList *)this);
  v2 = this[17];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  v3 = this[15];
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
  std::unique_ptr<Spectre::Engine::CommandListState>::~unique_ptr<Spectre::Engine::CommandListState>(this + 12);
  Spectre::Engine::DeviceResource::~DeviceResource((Spectre::Engine::DeviceResource *)this);
}
