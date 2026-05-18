/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBDAEBV10@@Z @ 0x18001C6CC
 * Callers:
 *     ?AddExtension@ShaderManager@Engine@Spectre@@QEAAXV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@@Z @ 0x18004EF08 (-AddExtension@ShaderManager@Engine@Spectre@@QEAAXV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 *     ?AddShaderProgram@ShaderManager@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EShaderType@23@VShaderProgram@23@@Z @ 0x18004F42C (-AddShaderProgram@ShaderManager@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?CreateShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@5@@Z @ 0x18004F6E0 (-CreateShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spect.c)
 *     ?GetOptionGroup@ShaderManager@Engine@Spectre@@QEBA_KV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x18004FB58 (-GetOptionGroup@ShaderManager@Engine@Spectre@@QEBA_KV-$set@V-$basic_string@DU-$char_traits@D@std.c)
 *     ?GetShaderProgram@ShaderManager@Engine@Spectre@@QEBAAEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050334 (-GetShaderProgram@ShaderManager@Engine@Spectre@@QEBAAEBV-$shared_ptr@VShaderProgram@Engine@Spect.c)
 *     ?SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180061184 (-SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?Clone@Component@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180081190 (-Clone@Component@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$sha.c)
 *     ?AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@23@I@Z @ 0x1800820CC (-AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBV-$basic_str.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 *     ?FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C98 (-FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_.c)
 *     ?SetImportLayout@ShaderPropertyLayout@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x1800831BC (-SetImportLayout@ShaderPropertyLayout@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@E.c)
 * Callees:
 *     ?_Xlen_string@std@@YAXXZ @ 0x180011B60 (-_Xlen_string@std@@YAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBD_K23@Z @ 0x1800133F4 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@U_String_constructor_concat.c)
 */

char *__fastcall std::operator+<char>(char *a1, _BYTE *a2, _QWORD *Src)
{
  size_t Size; // r9
  size_t v5; // rcx

  Size = -1LL;
  do
    ++Size;
  while ( a2[Size] );
  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < Size )
    std::_Xlen_string();
  if ( Src[3] >= 0x10uLL )
    Src = (_QWORD *)*Src;
  std::string::string(a1, (__int64)a2, (__int64)Src, a2, Size, Src, v5);
  return a1;
}
