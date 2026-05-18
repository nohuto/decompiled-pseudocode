/*
 * XREFs of ?HasPositions@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A34
 * Callers:
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::Mesh::HasPositions(Spectre::Engine::Mesh *this)
{
  return std::operator!=<Spectre::Engine::Scene>((_QWORD *)this + 18);
}
