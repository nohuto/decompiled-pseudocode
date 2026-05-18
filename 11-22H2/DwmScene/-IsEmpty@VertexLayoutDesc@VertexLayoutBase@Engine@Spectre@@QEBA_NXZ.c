/*
 * XREFs of ?IsEmpty@VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEBA_NXZ @ 0x180044438
 * Callers:
 *     ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18 (-ApplyState@Material@Engine@Spectre@@QEAA-AU-$pair@V-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 * Callees:
 *     <none>
 */

char __fastcall Spectre::Engine::VertexLayoutBase::VertexLayoutDesc::IsEmpty(
        Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *this)
{
  if ( !*(_DWORD *)this )
    return *((_QWORD *)this + 1) == 0LL;
  if ( *(_DWORD *)this != 1 )
    return 1;
  return *((_QWORD *)this + 2) == *((_QWORD *)this + 3);
}
