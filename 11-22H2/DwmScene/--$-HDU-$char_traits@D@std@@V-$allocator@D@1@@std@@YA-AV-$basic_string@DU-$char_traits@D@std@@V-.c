/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@0@Z @ 0x18001338C
 * Callers:
 *     ?SetTexture@SpectreMaterial@@UEAAJV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUISpectreTexture@@PEAUISpectreSampler@@@Z @ 0x180013890 (-SetTexture@SpectreMaterial@@UEAAJV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@.c)
 *     ?LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ @ 0x18002C56C (-LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ.c)
 *     ?DefineMaterialPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180045F78 (-DefineMaterialPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamil.c)
 *     ?OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x18009AB60 (-OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV-$shared_ptr.c)
 * Callees:
 *     ?_Xlen_string@std@@YAXXZ @ 0x180011B60 (-_Xlen_string@std@@YAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBD_K23@Z @ 0x1800133F4 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@U_String_constructor_concat.c)
 */

void *__fastcall std::operator+<char>(void *a1, __int64 a2, _QWORD *Src)
{
  size_t v3; // r9
  size_t Size; // rcx

  v3 = Src[2];
  Size = *(_QWORD *)(a2 + 16);
  if ( 0x7FFFFFFFFFFFFFFFLL - Size < v3 )
    std::_Xlen_string();
  if ( Src[3] >= 0x10uLL )
    Src = (_QWORD *)*Src;
  std::string::string(a1, Size, Src, v3);
  return a1;
}
