/*
 * XREFs of ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x180025A6C
 * Callers:
 *     ?CreateDeviceTextureConstantColor@LightProbe@Engine@Spectre@@AEAAXUColor@Math@Utils@3@@Z @ 0x1800518C8 (-CreateDeviceTextureConstantColor@LightProbe@Engine@Spectre@@AEAAXUColor@Math@Utils@3@@Z.c)
 *     ??0TextureImageSet@Engine@Spectre@@QEAA@$$QEAUTextureImageSetView@12@V?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@_K@Z @ 0x1800553C0 (--0TextureImageSet@Engine@Spectre@@QEAA@$$QEAUTextureImageSetView@12@V-$unique_ptr@$$BY0A@EU-$de.c)
 *     ??0TextureImageSet@Engine@Spectre@@QEAA@V?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@V?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@4@_K@Z @ 0x180055404 (--0TextureImageSet@Engine@Spectre@@QEAA@V-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator.c)
 *     ??1TextureImageSet@Engine@Spectre@@UEAA@XZ @ 0x1800557C8 (--1TextureImageSet@Engine@Spectre@@UEAA@XZ.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 *     ?RecoverBufferData@D3DBufferUtils@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@X@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@6@V?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@I@Z @ 0x1800D86DC (-RecoverBufferData@D3DBufferUtils@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@X@std@@AEBV-$shared_pt.c)
 *     _Spectre::Engine::LightProbe::CreateDeviceTextureConstantColor_::_1_::dtor$0 @ 0x1800E74BA (_Spectre--Engine--LightProbe--CreateDeviceTextureConstantColor_--_1_--dtor$0.c)
 *     _Spectre::Engine::TextureImageSet::TextureImageSet_::_1_::dtor$0 @ 0x1800E7518 (_Spectre--Engine--TextureImageSet--TextureImageSet_--_1_--dtor$0.c)
 *     _Spectre::Engine::D3D11::TextureD3D11::GetDeviceBuffer_::_1_::dtor$20 @ 0x1800F198E (_Spectre--Engine--D3D11--TextureD3D11--GetDeviceBuffer_--_1_--dtor$20.c)
 *     _Spectre::Engine::D3D11::TextureD3D11::GetDeviceBuffer_::_1_::dtor$21 @ 0x1800F19A0 (_Spectre--Engine--D3D11--TextureD3D11--GetDeviceBuffer_--_1_--dtor$21.c)
 *     _Spectre::Engine::D3D11::D3DBufferUtils::RecoverBufferData_::_1_::dtor$5 @ 0x1800F1B47 (_Spectre--Engine--D3D11--D3DBufferUtils--RecoverBufferData_--_1_--dtor$5.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001C144 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<unsigned int [0]>::~unique_ptr<unsigned int [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
