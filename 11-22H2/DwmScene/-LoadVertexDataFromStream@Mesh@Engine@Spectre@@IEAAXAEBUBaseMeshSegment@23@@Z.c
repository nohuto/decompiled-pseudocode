/*
 * XREFs of ?LoadVertexDataFromStream@Mesh@Engine@Spectre@@IEAAXAEBUBaseMeshSegment@23@@Z @ 0x180048B24
 * Callers:
 *     ?LoadFromBuffer@Mesh@Engine@Spectre@@QEAAXAEBUBaseMeshSegment@23@@Z @ 0x180048A80 (-LoadFromBuffer@Mesh@Engine@Spectre@@QEAAXAEBUBaseMeshSegment@23@@Z.c)
 * Callees:
 *     ?SetColours@Mesh@Engine@Spectre@@QEAAXQEBI@Z @ 0x1800490B0 (-SetColours@Mesh@Engine@Spectre@@QEAAXQEBI@Z.c)
 *     ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z @ 0x180049208 (-SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z.c)
 *     ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBI@Z @ 0x1800492E0 (-SetIndices@Mesh@Engine@Spectre@@QEAAXQEBI@Z.c)
 *     ?SetJointData@Mesh@Engine@Spectre@@QEAAXQEBI0@Z @ 0x18004949C (-SetJointData@Mesh@Engine@Spectre@@QEAAXQEBI0@Z.c)
 *     ?SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z @ 0x180049628 (-SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z.c)
 *     ?SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z @ 0x180049778 (-SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z.c)
 *     ?SetTangents@Mesh@Engine@Spectre@@QEAAXQEBUVector4@Math@Utils@3@_N@Z @ 0x1800498B8 (-SetTangents@Mesh@Engine@Spectre@@QEAAXQEBUVector4@Math@Utils@3@_N@Z.c)
 *     ?SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z @ 0x180049A94 (-SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z.c)
 *     ?SetUV1@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z @ 0x180049BD4 (-SetUV1@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z.c)
 */

void __fastcall Spectre::Engine::Mesh::LoadVertexDataFromStream(
        Spectre::Engine::Mesh *this,
        const struct Spectre::Engine::BaseMeshSegment *a2)
{
  int v2; // ebx

  v2 = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 73) = v2;
  *((_DWORD *)this + 74) = v2;
  if ( (v2 & 0x100) != 0 )
    Spectre::Engine::Mesh::SetPositions(this, *((const struct Spectre::Utils::Math::Vector3 *const *)a2 + 5));
  if ( (v2 & 0x80u) != 0 )
    Spectre::Engine::Mesh::SetColours(this, *((const unsigned int *const *)a2 + 9));
  if ( (v2 & 1) != 0 )
    Spectre::Engine::Mesh::SetUV0(this, *((const struct Spectre::Utils::Math::Vector2 *const *)a2 + 6));
  if ( (v2 & 2) != 0 )
    Spectre::Engine::Mesh::SetUV1(this, *((const struct Spectre::Utils::Math::Vector2 *const *)a2 + 7));
  if ( (v2 & 0x10000000) != 0 )
  {
    Spectre::Engine::Mesh::SetIndices(this, *((const unsigned int *const *)a2 + 11));
  }
  else if ( (v2 & 0x40) != 0 )
  {
    Spectre::Engine::Mesh::SetIndices(this, *((const unsigned __int16 *const *)a2 + 11));
  }
  if ( (v2 & 0x10) != 0 )
    Spectre::Engine::Mesh::SetNormals(this, *((const struct Spectre::Utils::Math::Vector3 *const *)a2 + 8), 0);
  if ( (v2 & 0x20) != 0 )
    Spectre::Engine::Mesh::SetTangents(this, *((const struct Spectre::Utils::Math::Vector4 *const *)a2 + 10), 0);
  if ( (v2 & 0x400) != 0 )
    Spectre::Engine::Mesh::SetJointData(
      this,
      *((const unsigned int *const *)a2 + 13),
      *((const unsigned int *const *)a2 + 12));
}
