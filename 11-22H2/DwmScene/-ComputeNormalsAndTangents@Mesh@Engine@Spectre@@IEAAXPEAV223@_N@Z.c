/*
 * XREFs of ?ComputeNormalsAndTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z @ 0x1800481C0
 * Callers:
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Test_callable__lambda_0c82bcc1497f3afd643663d7c3bef72a___ @ 0x1800478B0 (std--_Test_callable__lambda_0c82bcc1497f3afd643663d7c3bef72a___.c)
 *     ?GetIndexCount@Mesh@Engine@Spectre@@QEBAIXZ @ 0x1800488F4 (-GetIndexCount@Mesh@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetIndexFormat@Mesh@Engine@Spectre@@QEBA?AW4IndexFormat@123@XZ @ 0x180048900 (-GetIndexFormat@Mesh@Engine@Spectre@@QEBA-AW4IndexFormat@123@XZ.c)
 *     ?GetIndices16@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@G@std@@W4EBufferGetDataOption@23@@Z @ 0x180048910 (-GetIndices16@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@G@std@@W4EBufferGetDataOption@23@@Z.c)
 *     ?GetPositions@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBufferGetDataOption@23@@Z @ 0x180048980 (-GetPositions@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBuf.c)
 *     ?GetTopology@Mesh@Engine@Spectre@@QEBA?AW4MeshTopology@23@XZ @ 0x1800489B8 (-GetTopology@Mesh@Engine@Spectre@@QEBA-AW4MeshTopology@23@XZ.c)
 *     ?GetUV0@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@UVector2@Math@Utils@Spectre@@@std@@W4EBufferGetDataOption@23@@Z @ 0x1800489C8 (-GetUV0@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@UVector2@Math@Utils@Spectre@@@std@@W4EBufferGet.c)
 *     ?GetVertexCount@Mesh@Engine@Spectre@@QEBAIXZ @ 0x180048A00 (-GetVertexCount@Mesh@Engine@Spectre@@QEBAIXZ.c)
 *     ?ComputeTangentsAndNormals@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@V?$shared_ptr@UVector2@Math@Utils@Spectre@@@5@IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@3V?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@2@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E2910 (-ComputeTangentsAndNormals@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Spectre::Engine::Mesh::ComputeNormalsAndTangents(
        Spectre::Engine::Mesh *this,
        struct Spectre::Engine::Engine *a2,
        char a3)
{
  int v4; // eax
  char v5; // bl
  BOOL v6; // r15d
  __int64 v7; // rcx
  char v8; // r12
  __int64 Indices16; // rax
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rax
  std::_Ref_count_base *v13; // r13
  unsigned int IndexCount; // esi
  Spectre::Engine::Mesh *v15; // rcx
  unsigned int VertexCount; // edi
  __int64 v17; // rcx
  __int64 UV0; // rbx
  __int64 Positions; // rax
  char v20; // [rsp+28h] [rbp-D8h]
  char v21; // [rsp+38h] [rbp-C8h]
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  std::_Ref_count_base *v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v25; // [rsp+78h] [rbp-88h]
  std::_Ref_count_base *v26[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v27[8]; // [rsp+90h] [rbp-70h] BYREF
  std::_Ref_count_base *v28; // [rsp+98h] [rbp-68h]
  _BYTE v29[16]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v30[7]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v31; // [rsp+E8h] [rbp-18h]
  __int128 v32; // [rsp+F0h] [rbp-10h]

  v4 = *((_DWORD *)this + 75);
  v5 = 3;
  if ( !v4 || v4 == 3 )
  {
    v6 = Spectre::Engine::Mesh::GetTopology(this, a2) == 3;
    if ( (unsigned int)Spectre::Engine::Mesh::GetIndexFormat() == 1 )
    {
      v8 = 1;
      Indices16 = Spectre::Engine::Mesh::GetIndices16(v7, v27, 0LL);
      v10 = *(_QWORD *)Indices16;
      v24 = *(_QWORD *)Indices16;
      v25 = *(std::_Ref_count_base **)(Indices16 + 8);
      *(_QWORD *)Indices16 = 0LL;
      *(_QWORD *)(Indices16 + 8) = 0LL;
      v11 = &v24;
    }
    else
    {
      v8 = 0;
      v12 = Spectre::Engine::Mesh::GetIndices16(v7, v26, 0LL);
      v10 = *(_QWORD *)v12;
      v23 = *(std::_Ref_count_base **)(v12 + 8);
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      v11 = &v22;
      v5 = 12;
    }
    v13 = (std::_Ref_count_base *)v11[1];
    *v11 = 0LL;
    v11[1] = 0LL;
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      if ( v26[1] )
        std::_Ref_count_base::_Decref(v26[1]);
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
    }
    if ( (v5 & 1) != 0 && v28 )
      std::_Ref_count_base::_Decref(v28);
    *(_OWORD *)v26 = 0LL;
    v31 = 0LL;
    if ( std::_Test_callable__lambda_0c82bcc1497f3afd643663d7c3bef72a___() )
    {
      v30[0] = &std::_Func_impl_no_alloc<_lambda_0c82bcc1497f3afd643663d7c3bef72a_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
      v30[1] = this;
      v31 = v30;
    }
    IndexCount = Spectre::Engine::Mesh::GetIndexCount(this);
    v22 = v10;
    v23 = v13;
    v32 = 0LL;
    VertexCount = Spectre::Engine::Mesh::GetVertexCount(v15);
    UV0 = Spectre::Engine::Mesh::GetUV0(v17, v27, 0LL);
    Positions = Spectre::Engine::Mesh::GetPositions(this, v29, 0LL);
    v21 = a3;
    v20 = v8;
    Spectre::Framework::GeometryUtils::ComputeTangentsAndNormals(
      Positions,
      UV0,
      VertexCount,
      &v22,
      IndexCount,
      v20,
      v6,
      v21,
      v30);
    if ( v26[1] )
      std::_Ref_count_base::_Decref(v26[1]);
  }
}
