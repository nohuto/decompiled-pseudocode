/*
 * XREFs of ??$_Construct_n@$$V@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x180097124
 * Callers:
 *     ??0?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAA@_KAEBV?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@1@@Z @ 0x180097334 (--0-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VR.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@0@@Z @ 0x18001203C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YA.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x18003178C (--1-$_Tidy_guard@V-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator@V.c)
 *     ?_Buy_raw@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18007E584 (-_Buy_raw@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 */

void __fastcall std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::_Construct_n<>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  std::vector<Spectre::Utils::Math::Vector4>::_Buy_raw(a1, 0x10uLL);
  v3 = (_QWORD *)*a1;
  v4 = 16LL;
  do
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  std::_Destroy_range<std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>((__int64)v3, (__int64)v3);
  v5 = 0LL;
  a1[1] = v3;
  std::_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>>::~_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>>(&v5);
}
