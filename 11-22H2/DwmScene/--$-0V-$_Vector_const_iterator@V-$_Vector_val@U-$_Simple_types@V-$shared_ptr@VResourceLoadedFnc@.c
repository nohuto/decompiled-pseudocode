/*
 * XREFs of ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@std@@@std@@@std@@$0A@@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@std@@@std@@@1@0AEBV?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@1@@Z @ 0x180096FAC
 * Callers:
 *     ??0ResourceData@Engine@Spectre@@QEAA@AEBV012@@Z @ 0x180097360 (--0ResourceData@Engine@Spectre@@QEAA@AEBV012@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@0@@Z @ 0x18001203C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YA.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x18003178C (--1-$_Tidy_guard@V-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator@V.c)
 *     ?_Buy_raw@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18007E584 (-_Buy_raw@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 */

_QWORD *std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>(
        _QWORD *a1,
        char *a2,
        char *a3,
        ...)
{
  char *v3; // rbp
  unsigned __int64 v4; // rdx
  _QWORD *v7; // rdi
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
  v4 = (a3 - a2) >> 4;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
    std::vector<Spectre::Utils::Math::Vector4>::_Buy_raw(a1, v4);
    v7 = (_QWORD *)*a1;
    while ( v3 != a3 )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v7, v3);
      v7 += 2;
      v3 += 16;
    }
    std::_Destroy_range<std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>((__int64)v7, (__int64)v7);
    v9 = 0LL;
    a1[1] = v7;
    std::_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>>::~_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>>((__int64 *)va);
  }
  return a1;
}
