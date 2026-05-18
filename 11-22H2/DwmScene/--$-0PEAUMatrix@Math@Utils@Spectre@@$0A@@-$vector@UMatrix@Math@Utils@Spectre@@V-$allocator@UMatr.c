/*
 * XREFs of ??$?0PEAUMatrix@Math@Utils@Spectre@@$0A@@?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@QEAA@PEAUMatrix@Math@Utils@Spectre@@0AEBV?$allocator@UMatrix@Math@Utils@Spectre@@@1@@Z @ 0x18007C62C
 * Callers:
 *     ?OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18007DF80 (-OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engine@Spec.c)
 *     ?OnFrameRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180080C30 (-OnFrameRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engi.c)
 * Callees:
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Uninitialized_copy@PEAUMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@YAPEAUMatrix@Math@Utils@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UMatrix@Math@Utils@Spectre@@@0@@Z @ 0x18007C9D0 (--$_Uninitialized_copy@PEAUMatrix@Math@Utils@Spectre@@V-$allocator@UMatrix@Math@Utils@Spectre@@@.c)
 *     ??1?$_Tidy_guard@V?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x18007CB34 (--1-$_Tidy_guard@V-$vector@UMatrix@Math@Utils@Spectre@@V-$allocator@UMatrix@Math@Utils@Spectre@@.c)
 *     ?_Buy_raw@?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18007E540 (-_Buy_raw@-$vector@UMatrix@Math@Utils@Spectre@@V-$allocator@UMatrix@Math@Utils@Spectre@@@std@@@s.c)
 */

_QWORD *std::vector<Spectre::Utils::Math::Matrix>::vector<Spectre::Utils::Math::Matrix>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  unsigned __int64 v4; // rdx
  __int64 v7; // rax
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (a3 - a2) >> 6;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFLL )
      std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
    std::vector<Spectre::Utils::Math::Matrix>::_Buy_raw();
    v7 = std::_Uninitialized_copy<Spectre::Utils::Math::Matrix *>(a2, a3, *a1);
    v9 = 0LL;
    a1[1] = v7;
    std::_Tidy_guard<std::vector<Spectre::Utils::Math::Matrix>>::~_Tidy_guard<std::vector<Spectre::Utils::Math::Matrix>>((__int64 *)va);
  }
  return a1;
}
