/*
 * XREFs of ??0?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180086594
 * Callers:
 *     ??0VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEAA@AEBV0123@@Z @ 0x180086788 (--0VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEAA@AEBV0123@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Uninitialized_copy@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@YAPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@0@@Z @ 0x180086298 (--$_Uninitialized_copy@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVert.c)
 *     ??1?$_Tidy_guard@V?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x1800867D0 (--1-$_Tidy_guard@V-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVer.c)
 *     ?_Buy_raw@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x180087E14 (-_Buy_raw@-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexEleme.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned __int64 v4; // rdx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a2[1] - *a2) >> 4);
  if ( v4 )
  {
    if ( v4 > 0x555555555555555LL )
      std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
    std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Buy_raw();
    v6 = a1;
    a1[1] = std::_Uninitialized_copy<Spectre::Engine::VertexLayoutBase::VertexElementDesc *>(*a2, a2[1], *a1);
    v6 = 0LL;
    std::_Tidy_guard<std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>>::~_Tidy_guard<std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>>(&v6);
  }
  return a1;
}
