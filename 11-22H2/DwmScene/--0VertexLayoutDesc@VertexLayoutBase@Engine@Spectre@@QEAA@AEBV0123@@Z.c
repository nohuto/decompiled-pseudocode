/*
 * XREFs of ??0VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEAA@AEBV0123@@Z @ 0x180086788
 * Callers:
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?AttachDevice@VertexLayout@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008BE40 (-AttachDevice@VertexLayout@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@.c)
 * Callees:
 *     ??0?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180086594 (--0-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexElementDesc@.c)
 */

Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *__fastcall Spectre::Engine::VertexLayoutBase::VertexLayoutDesc::VertexLayoutDesc(
        Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *this,
        const struct Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>(
    (__int64 *)this + 2,
    (__int64 *)a2 + 2);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  return this;
}
