/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18001DDE0
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@AEBV10@@Z @ 0x18001E840 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001E840.c)
 *     ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x1800275B4 (-_Makestr@_System_error@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@Verr.c)
 *     ?ShaderOptionNamesToDescription@Engine@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z @ 0x180050870 (-ShaderOptionNamesToDescription@Engine@Spectre@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$al.c)
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 *     ?GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@II@Z @ 0x1800CEC40 (-GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11Texture2.c)
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription @ 0x1800D3BF8 (Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription.c)
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription_0 @ 0x1800D4170 (Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription_0.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@Z @ 0x18001CAF0 (--$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@-$basic_string@DU-$cha.c)
 */

void **__fastcall std::string::append(void **Src, const void *a2, unsigned __int64 Size)
{
  _BYTE *v5; // rcx
  bool v6; // cf
  void *v7; // rax
  char *v8; // rbx
  void **result; // rax

  v5 = Src[2];
  if ( Size > (_BYTE *)Src[3] - v5 )
    return std::string::_Reallocate_grow_by<_lambda_65e615be2a453ca0576c979606f46740_,char const *,unsigned __int64>(
             Src,
             Size,
             Size,
             a2,
             Size);
  v6 = (unsigned __int64)Src[3] < 0x10;
  Src[2] = &v5[Size];
  v7 = Src;
  if ( !v6 )
    v7 = *Src;
  v8 = &v5[(_QWORD)v7];
  memmove_0(&v5[(_QWORD)v7], a2, Size);
  result = Src;
  v8[Size] = 0;
  return result;
}
