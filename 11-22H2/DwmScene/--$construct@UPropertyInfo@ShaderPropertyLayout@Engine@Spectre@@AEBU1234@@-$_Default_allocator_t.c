/*
 * XREFs of ??$construct@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBU1234@@?$_Default_allocator_traits@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@SAXAEAV?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@1@QEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBU3456@@Z @ 0x180081C64
 * Callers:
 *     ??$_Emplace_reallocate@AEBUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAPEAUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180081608 (--$_Emplace_reallocate@AEBUPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@@-$vector@UProperty.c)
 *     ?AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@23@I@Z @ 0x1800820CC (-AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBV-$basic_str.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<Spectre::Engine::ShaderPropertyLayout::PropertyInfo>>::construct<Spectre::Engine::ShaderPropertyLayout::PropertyInfo,Spectre::Engine::ShaderPropertyLayout::PropertyInfo const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  std::string::string((_QWORD *)a2, a3);
  *(_WORD *)(a2 + 32) = *(_WORD *)(a3 + 32);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a3 + 44);
  result = *(unsigned int *)(a3 + 48);
  *(_DWORD *)(a2 + 48) = result;
  return result;
}
