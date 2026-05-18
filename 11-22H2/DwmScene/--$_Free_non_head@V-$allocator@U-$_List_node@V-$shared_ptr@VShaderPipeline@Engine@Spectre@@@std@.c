/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18005F270
 * Callers:
 *     ??1?$list@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18005FB9C (--1-$list@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VShader.c)
 *     ??1ShaderPipelineCollection@ShaderFamily@Engine@Spectre@@QEAA@XZ @ 0x18005FD1C (--1ShaderPipelineCollection@ShaderFamily@Engine@Spectre@@QEAA@XZ.c)
 *     ?ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060FAC (-ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z @ 0x1800325D0 (--_G-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'((__int64)(v2 + 2));
      std::_Deallocate<16,0>(v2, 0x20uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
