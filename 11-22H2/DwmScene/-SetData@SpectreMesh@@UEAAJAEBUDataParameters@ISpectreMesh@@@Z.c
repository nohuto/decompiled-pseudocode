/*
 * XREFs of ?SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z @ 0x180013AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateFromPoints@BoundingBox@DirectX@@SAXAEAU12@_KPEBUXMFLOAT3@2@1@Z @ 0x180013A18 (-CreateFromPoints@BoundingBox@DirectX@@SAXAEAU12@_KPEBUXMFLOAT3@2@1@Z.c)
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 *     ?SetColours@Mesh@Engine@Spectre@@QEAAXQEBI@Z @ 0x1800490B0 (-SetColours@Mesh@Engine@Spectre@@QEAAXQEBI@Z.c)
 *     ?SetIndexCount@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800491F4 (-SetIndexCount@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 *     ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z @ 0x180049208 (-SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z.c)
 *     ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBI@Z @ 0x1800492E0 (-SetIndices@Mesh@Engine@Spectre@@QEAAXQEBI@Z.c)
 *     ?SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z @ 0x180049628 (-SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z.c)
 *     ?SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z @ 0x180049778 (-SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z.c)
 *     ?SetTangents@Mesh@Engine@Spectre@@QEAAXQEBUVector4@Math@Utils@3@_N@Z @ 0x1800498B8 (-SetTangents@Mesh@Engine@Spectre@@QEAAXQEBUVector4@Math@Utils@3@_N@Z.c)
 *     ?SetTopology@Mesh@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z @ 0x180049A00 (-SetTopology@Mesh@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z.c)
 *     ?SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z @ 0x180049A94 (-SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z.c)
 *     ?SetUV1@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z @ 0x180049BD4 (-SetUV1@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z.c)
 *     ?SetVertexCount@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x180049D14 (-SetVertexCount@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 */

__int64 __fastcall SpectreMesh::SetData(SpectreMesh *this, const struct ISpectreMesh::DataParameters *a2)
{
  const struct Spectre::Utils::Math::Vector3 *v4; // rdx
  const struct Spectre::Utils::Math::Vector3 *v5; // rdx
  const struct Spectre::Utils::Math::Vector4 *v6; // rdx
  const unsigned int *v7; // rdx
  const struct Spectre::Utils::Math::Vector2 *v8; // rdx
  const struct Spectre::Utils::Math::Vector2 *v9; // rdx
  const unsigned __int16 *v10; // rdx
  const unsigned int *v11; // rdx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Spectre::Engine::Mesh::SetVertexCount(*((Spectre::Engine::Mesh **)this + 2), *(_DWORD *)a2);
  Spectre::Engine::Mesh::SetIndexCount(*((Spectre::Engine::Mesh **)this + 2), *((_DWORD *)a2 + 14));
  try
  {
    if ( *(_DWORD *)a2 )
    {
      v4 = (const struct Spectre::Utils::Math::Vector3 *)*((_QWORD *)a2 + 1);
      if ( v4 )
        Spectre::Engine::Mesh::SetPositions(*((Spectre::Engine::Mesh **)this + 2), v4);
      v5 = (const struct Spectre::Utils::Math::Vector3 *)*((_QWORD *)a2 + 2);
      if ( v5 )
        Spectre::Engine::Mesh::SetNormals(*((Spectre::Engine::Mesh **)this + 2), v5, 0);
      v6 = (const struct Spectre::Utils::Math::Vector4 *)*((_QWORD *)a2 + 3);
      if ( v6 )
        Spectre::Engine::Mesh::SetTangents(*((Spectre::Engine::Mesh **)this + 2), v6, 0);
      v7 = (const unsigned int *)*((_QWORD *)a2 + 4);
      if ( v7 )
        Spectre::Engine::Mesh::SetColours(*((Spectre::Engine::Mesh **)this + 2), v7);
      v8 = (const struct Spectre::Utils::Math::Vector2 *)*((_QWORD *)a2 + 5);
      if ( v8 )
        Spectre::Engine::Mesh::SetUV0(*((Spectre::Engine::Mesh **)this + 2), v8);
      v9 = (const struct Spectre::Utils::Math::Vector2 *)*((_QWORD *)a2 + 6);
      if ( v9 )
        Spectre::Engine::Mesh::SetUV1(*((Spectre::Engine::Mesh **)this + 2), v9);
      if ( *((_DWORD *)a2 + 14) )
      {
        v10 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
        if ( v10 )
        {
          Spectre::Engine::Mesh::SetIndices(*((Spectre::Engine::Mesh **)this + 2), v10);
        }
        else
        {
          v11 = (const unsigned int *)*((_QWORD *)a2 + 9);
          if ( v11 )
            Spectre::Engine::Mesh::SetIndices(*((Spectre::Engine::Mesh **)this + 2), v11);
        }
      }
      switch ( *((_DWORD *)a2 + 20) )
      {
        case 1:
          Spectre::Engine::Mesh::SetTopology(*((_QWORD *)this + 2), 2LL);
          goto LABEL_31;
        case 2:
          v12 = 1LL;
          break;
        case 3:
          v12 = 4LL;
          break;
        case 4:
          v12 = 0LL;
          break;
        case 5:
          v12 = 3LL;
          break;
        default:
LABEL_31:
          Spectre::Engine::Mesh::ComputeRequiredData(*((Spectre::Engine::Mesh **)this + 2), 3u);
          DirectX::BoundingBox::CreateFromPoints(
            (SpectreMesh *)((char *)this + 32),
            *(unsigned int *)a2,
            *((const struct DirectX::XMFLOAT3 **)a2 + 1));
          return 0LL;
      }
      Spectre::Engine::Mesh::SetTopology(*((_QWORD *)this + 2), v12);
      goto LABEL_31;
    }
    *((_QWORD *)this + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 10) = 0;
    *(_QWORD *)((char *)this + 44) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 13) = 0;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremesh.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  return 0LL;
}
