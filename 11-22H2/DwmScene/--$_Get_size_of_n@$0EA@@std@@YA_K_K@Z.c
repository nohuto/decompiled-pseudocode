/*
 * XREFs of ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x180024DE0
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAAPEAV?$function@$$A6AXXZ@1@QEAV21@AEBV21@@Z @ 0x180024B9C (--$_Emplace_reallocate@AEBV-$function@$$A6AXXZ@std@@@-$vector@V-$function@$$A6AXXZ@std@@V-$alloc.c)
 *     ?_Buy_raw@?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18007E540 (-_Buy_raw@-$vector@UMatrix@Math@Utils@Spectre@@V-$allocator@UMatrix@Math@Utils@Spectre@@@std@@@s.c)
 *     ?_Buy_nonzero@?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18009B6A0 (-_Buy_nonzero@-$vector@UShaderPropertyDefinition@Engine@Spectre@@V-$allocator@UShaderPropertyDef.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180011AC4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Get_size_of_n<64>(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return a1 << 6;
}
