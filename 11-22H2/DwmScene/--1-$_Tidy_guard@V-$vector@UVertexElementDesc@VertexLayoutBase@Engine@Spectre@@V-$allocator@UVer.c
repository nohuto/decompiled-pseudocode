/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x1800867D0
 * Callers:
 *     ??0?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180086594 (--0-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexElementDesc@.c)
 *     _std::vector_Spectre::Engine::VertexLayoutBase::VertexElementDesc_std::allocator_Spectre::Engine::VertexLayoutBase::VertexElementDesc___::vector_Spectre::Engine::VertexLayoutBase::VertexElementDesc_std::allocator_Spectre::Engine::VertexLayoutBase::VertexElementDesc____::_1_::dtor$0 @ 0x1800EA47F (_std--vector_Spectre--Engine--VertexLayoutBase--VertexElementDesc_std--allocator_Spectre--Engine.c)
 * Callees:
 *     ?_Tidy@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18007E75C (-_Tidy@-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexElementD.c)
 */

void __fastcall std::_Tidy_guard<std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>>::~_Tidy_guard<std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Tidy(v1);
}
