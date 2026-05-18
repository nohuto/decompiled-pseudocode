/*
 * XREFs of ??0VertexLayoutBase@Engine@Spectre@@QEAA@XZ @ 0x18008BD68
 * Callers:
 *     ??0DeviceVertexLayout@Engine@Spectre@@IEAA@XZ @ 0x18008BCA4 (--0DeviceVertexLayout@Engine@Spectre@@IEAA@XZ.c)
 *     ??0VertexLayout@Engine@Spectre@@QEAA@XZ @ 0x18008BCDC (--0VertexLayout@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

Spectre::Engine::VertexLayoutBase *__fastcall Spectre::Engine::VertexLayoutBase::VertexLayoutBase(
        Spectre::Engine::VertexLayoutBase *this)
{
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return this;
}
