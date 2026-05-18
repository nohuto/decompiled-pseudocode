/*
 * XREFs of ??$?0PEAUVector4@Math@Utils@Spectre@@$0A@@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@QEAA@PEAUVector4@Math@Utils@Spectre@@0AEBV?$allocator@UVector4@Math@Utils@Spectre@@@1@@Z @ 0x18007C6BC
 * Callers:
 *     ?OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18007DF80 (-OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engine@Spec.c)
 *     ?OnFrameRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180080C30 (-OnFrameRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engi.c)
 * Callees:
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??1?$_Tidy_guard@V?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x18007CB54 (--1-$_Tidy_guard@V-$vector@UColor@Math@Utils@Spectre@@V-$allocator@UColor@Math@Utils@Spectre@@@s.c)
 *     ?_Buy_raw@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18007E584 (-_Buy_raw@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 */

_QWORD *std::vector<Spectre::Utils::Math::Vector4>::vector<Spectre::Utils::Math::Vector4>(
        _QWORD *a1,
        _OWORD *a2,
        _OWORD *a3,
        ...)
{
  _OWORD *v3; // rdi
  unsigned __int64 v4; // rdx
  _OWORD *v7; // rax
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  v3 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a3 - a2;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
    std::vector<Spectre::Utils::Math::Vector4>::_Buy_raw();
    v7 = (_OWORD *)*a1;
    while ( v3 != a3 )
      *v7++ = *v3++;
    v9 = 0LL;
    a1[1] = v7;
    std::_Tidy_guard<std::vector<Spectre::Utils::Math::Color>>::~_Tidy_guard<std::vector<Spectre::Utils::Math::Color>>((__int64 *)va);
  }
  return a1;
}
