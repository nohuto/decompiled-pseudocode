/*
 * XREFs of ?_Tidy@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAXXZ @ 0x180051E80
 * Callers:
 *     ??1?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800512B0 (--1-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator@UTextureImageDesc@Engine@Spectre@@@st.c)
 *     ??1TextureImageSetView@Engine@Spectre@@UEAA@XZ @ 0x180051324 (--1TextureImageSetView@Engine@Spectre@@UEAA@XZ.c)
 *     ??0TextureImageSet@Engine@Spectre@@QEAA@V?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@V?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@4@_K@Z @ 0x180055404 (--0TextureImageSet@Engine@Spectre@@QEAA@V-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator.c)
 *     ??0TextureImageSetView@Engine@Spectre@@QEAA@V?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@PEBX_K@Z @ 0x1800554E0 (--0TextureImageSetView@Engine@Spectre@@QEAA@V-$vector@UTextureImageDesc@Engine@Spectre@@V-$alloc.c)
 *     ??1?$_Tidy_guard@V?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180055694 (--1-$_Tidy_guard@V-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator@UTextureImageDesc@Engi.c)
 *     ??1TextureImageSet@Engine@Spectre@@UEAA@XZ @ 0x1800557C8 (--1TextureImageSet@Engine@Spectre@@UEAA@XZ.c)
 *     ??_ETextureImageSetView@Engine@Spectre@@UEAAPEAXI@Z @ 0x180055900 (--_ETextureImageSetView@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ?Create@DeviceTexture@Engine@Spectre@@QEAAXAEBUTextureDesc@23@@Z @ 0x180055CFC (-Create@DeviceTexture@Engine@Spectre@@QEAAXAEBUTextureDesc@23@@Z.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     ??1?$pair@V?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@std@@QEAA@XZ @ 0x1800D39F0 (--1-$pair@V-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@st.c)
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription_0 @ 0x1800D4170 (Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription_0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<D3D11_INPUT_ELEMENT_DESC>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
