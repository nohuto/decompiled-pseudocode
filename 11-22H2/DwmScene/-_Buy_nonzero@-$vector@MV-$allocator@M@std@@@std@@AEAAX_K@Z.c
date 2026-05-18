/*
 * XREFs of ?_Buy_nonzero@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x180047158
 * Callers:
 *     ??$_Construct_n@AEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAX_KAEBM@Z @ 0x180044BE0 (--$_Construct_n@AEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAX_KAEBM@Z.c)
 *     ??$_Construct_n@PEBMPEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K$$QEAPEBM1@Z @ 0x180044C64 (--$_Construct_n@PEBMPEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K$$QEAPEBM1@Z.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x180081D80 (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 */

char *__fastcall std::vector<float>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  return std::vector<float>::_Buy_raw(a1, a2);
}
