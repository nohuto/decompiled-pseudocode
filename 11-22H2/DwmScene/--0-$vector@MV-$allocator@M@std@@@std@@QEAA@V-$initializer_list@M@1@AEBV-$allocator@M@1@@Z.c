/*
 * XREFs of ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@V?$initializer_list@M@1@AEBV?$allocator@M@1@@Z @ 0x180044D4C
 * Callers:
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@AEBUColor@Math@Utils@2@@Z @ 0x180044E2C (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@_ea_180044E2C.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@AEBUVector4@Math@Utils@2@@Z @ 0x180044EDC (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@_ea_180044EDC.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@M@Z @ 0x1800450A0 (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@_ea_1800450A0.c)
 *     ?GetDefaultValuesForType@Engine@Spectre@@YA?AV?$vector@MV?$allocator@M@std@@@std@@W4ShaderPropertyType@12@@Z @ 0x180082D50 (-GetDefaultValuesForType@Engine@Spectre@@YA-AV-$vector@MV-$allocator@M@std@@@std@@W4ShaderProper.c)
 * Callees:
 *     ??$_Construct_n@PEBMPEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K$$QEAPEBM1@Z @ 0x180044C64 (--$_Construct_n@PEBMPEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K$$QEAPEBM1@Z.c)
 *     ?size@?$initializer_list@M@std@@QEBA_KXZ @ 0x180047180 (-size@-$initializer_list@M@std@@QEBA_KXZ.c)
 */

__int64 *__fastcall std::vector<float>::vector<float>(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v7 = *(_QWORD *)(a2 + 8);
  v6 = *(void **)a2;
  v4 = std::initializer_list<float>::size(a2);
  std::vector<float>::_Construct_n<float const *,float const *>(a1, v4, &v6, &v7);
  return a1;
}
