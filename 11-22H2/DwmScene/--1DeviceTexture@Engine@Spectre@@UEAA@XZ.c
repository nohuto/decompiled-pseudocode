/*
 * XREFs of ??1DeviceTexture@Engine@Spectre@@UEAA@XZ @ 0x180055718
 * Callers:
 *     ??_GTextureGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052E20 (--_GTextureGeneric@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1TextureD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800CC9F8 (--1TextureD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556B4 (--1-$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U-$default_delete@UDeviceTextureDesc@Engine@S.c)
 */

void __fastcall Spectre::Engine::DeviceTexture::~DeviceTexture(Spectre::Engine::DeviceTexture *this)
{
  std::_Ref_count_base *v2; // rcx

  *(_QWORD *)this = &Spectre::Engine::DeviceTexture::`vftable';
  std::string::_Tidy_deallocate((__int64)this + 120);
  std::unique_ptr<Spectre::Engine::DeviceTextureDesc>::~unique_ptr<Spectre::Engine::DeviceTextureDesc>((_QWORD *)this + 14);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  Spectre::Engine::DeviceResource::~DeviceResource(this);
}
