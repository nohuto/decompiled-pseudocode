/*
 * XREFs of ?IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A70
 * Callers:
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 *     ?SetColours@Mesh@Engine@Spectre@@QEAAXQEBI@Z @ 0x1800490B0 (-SetColours@Mesh@Engine@Spectre@@QEAAXQEBI@Z.c)
 *     ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z @ 0x180049208 (-SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z.c)
 *     ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBI@Z @ 0x1800492E0 (-SetIndices@Mesh@Engine@Spectre@@QEAAXQEBI@Z.c)
 *     ?SetJointData@Mesh@Engine@Spectre@@QEAAXQEBI0@Z @ 0x18004949C (-SetJointData@Mesh@Engine@Spectre@@QEAAXQEBI0@Z.c)
 *     ?SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z @ 0x180049628 (-SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z.c)
 *     ?SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z @ 0x180049778 (-SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z.c)
 *     ?SetTangents@Mesh@Engine@Spectre@@QEAAXQEBUVector4@Math@Utils@3@_N@Z @ 0x1800498B8 (-SetTangents@Mesh@Engine@Spectre@@QEAAXQEBUVector4@Math@Utils@3@_N@Z.c)
 *     ?SetTopology@Mesh@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z @ 0x180049A00 (-SetTopology@Mesh@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z.c)
 *     ?SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z @ 0x180049A94 (-SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z.c)
 *     ?SetUV1@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z @ 0x180049BD4 (-SetUV1@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::Mesh::IsMapped(Spectre::Engine::Mesh *this)
{
  return *((_BYTE *)this + 310);
}
