/*
 * XREFs of ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18001E6B0
 * Callers:
 *     ??1ShaderProgram@Engine@Spectre@@QEAA@XZ @ 0x18001E4E8 (--1ShaderProgram@Engine@Spectre@@QEAA@XZ.c)
 *     ?AddShaderProgram@ShaderManager@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EShaderType@23@VShaderProgram@23@@Z @ 0x18004F42C (-AddShaderProgram@ShaderManager@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?_Destroy@?$_Ref_count_obj2@VShaderProgram@Engine@Spectre@@@std@@EEAAXXZ @ 0x180050B50 (-_Destroy@-$_Ref_count_obj2@VShaderProgram@Engine@Spectre@@@std@@EEAAXXZ.c)
 *     ??1LightProbe@Engine@Spectre@@UEAA@XZ @ 0x1800512BC (--1LightProbe@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ConstantBufferGeneric@Engine@Spectre@@UEAA@XZ @ 0x18008B6B8 (--1ConstantBufferGeneric@Engine@Spectre@@UEAA@XZ.c)
 *     ?ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090A38 (-ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned char>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
