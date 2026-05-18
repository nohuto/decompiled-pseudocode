/*
 * XREFs of Spectre::Engine::_anonymous_namespace_::CreateMesh @ 0x18008CF38
 * Callers:
 *     ?CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@MM_NI1@Z @ 0x18008CFFC (-CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@st.c)
 * Callees:
 *     ??$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ @ 0x1800160D8 (--$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VM_ea_1800160D8.c)
 *     ?SetIndexCount@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800491F4 (-SetIndexCount@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 *     ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z @ 0x180049208 (-SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z.c)
 *     ?SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z @ 0x180049628 (-SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z.c)
 *     ?SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z @ 0x180049778 (-SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z.c)
 *     ?SetTopology@Mesh@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z @ 0x180049A00 (-SetTopology@Mesh@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z.c)
 *     ?SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z @ 0x180049A94 (-SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z.c)
 *     ?SetVertexCount@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x180049D14 (-SetVertexCount@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 */

Spectre::Engine::Mesh **__fastcall Spectre::Engine::_anonymous_namespace_::CreateMesh(
        Spectre::Engine::Mesh **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        const struct Spectre::Utils::Math::Vector3 *const *a6,
        const struct Spectre::Utils::Math::Vector2 *const *a7)
{
  const unsigned __int16 *const *v9; // r8

  Spectre::Engine::Engine::CreateResource<Spectre::Engine::Mesh,>(a2, a1);
  Spectre::Engine::Mesh::SetIndexCount(*a1, (__int64)(a5[1] - *a5) >> 1);
  Spectre::Engine::Mesh::SetIndices(*a1, *v9);
  Spectre::Engine::Mesh::SetTopology(*a1);
  Spectre::Engine::Mesh::SetVertexCount(*a1, -1431655765 * ((__int64)(*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) >> 2));
  Spectre::Engine::Mesh::SetPositions(*a1, *(const struct Spectre::Utils::Math::Vector3 *const *)a4);
  Spectre::Engine::Mesh::SetNormals(*a1, *a6);
  Spectre::Engine::Mesh::SetUV0(*a1, *a7);
  return a1;
}
