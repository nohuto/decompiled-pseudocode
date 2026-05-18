/*
 * XREFs of ?ComputeTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z @ 0x180048514
 * Callers:
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Test_callable__lambda_ab41f81ca63d3d4c36433f589e0aa9fa___ @ 0x1800478C8 (std--_Test_callable__lambda_ab41f81ca63d3d4c36433f589e0aa9fa___.c)
 *     ?GetIndexCount@Mesh@Engine@Spectre@@QEBAIXZ @ 0x1800488F4 (-GetIndexCount@Mesh@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetIndexFormat@Mesh@Engine@Spectre@@QEBA?AW4IndexFormat@123@XZ @ 0x180048900 (-GetIndexFormat@Mesh@Engine@Spectre@@QEBA-AW4IndexFormat@123@XZ.c)
 *     ?GetIndices16@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@G@std@@W4EBufferGetDataOption@23@@Z @ 0x180048910 (-GetIndices16@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@G@std@@W4EBufferGetDataOption@23@@Z.c)
 *     ?GetNormals@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBufferGetDataOption@23@@Z @ 0x180048948 (-GetNormals@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBuffe.c)
 *     ?GetPositions@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBufferGetDataOption@23@@Z @ 0x180048980 (-GetPositions@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBuf.c)
 *     ?GetTopology@Mesh@Engine@Spectre@@QEBA?AW4MeshTopology@23@XZ @ 0x1800489B8 (-GetTopology@Mesh@Engine@Spectre@@QEBA-AW4MeshTopology@23@XZ.c)
 *     ?GetUV0@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@UVector2@Math@Utils@Spectre@@@std@@W4EBufferGetDataOption@23@@Z @ 0x1800489C8 (-GetUV0@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@UVector2@Math@Utils@Spectre@@@std@@W4EBufferGet.c)
 *     ?GetVertexCount@Mesh@Engine@Spectre@@QEBAIXZ @ 0x180048A00 (-GetVertexCount@Mesh@Engine@Spectre@@QEBAIXZ.c)
 *     ?ComputeTangents@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@V?$shared_ptr@UVector2@Math@Utils@Spectre@@@5@0IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@3V?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E23E0 (-ComputeTangents@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils@Spectre@@.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall Spectre::Engine::Mesh::ComputeTangents(
        Spectre::Engine::Mesh *this,
        struct Spectre::Engine::Engine *a2,
        char a3)
{
  int v4; // eax
  char v5; // bl
  BOOL v6; // r12d
  __int64 v7; // rcx
  char v8; // r13
  __int64 Indices16; // rax
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rax
  std::_Ref_count_base *v13; // rsi
  unsigned int IndexCount; // r14d
  Spectre::Engine::Mesh *v15; // rcx
  unsigned int VertexCount; // esi
  __int64 v17; // rcx
  __int64 Normals; // rdi
  __int64 UV0; // rbx
  __int64 Positions; // rax
  char v21; // [rsp+30h] [rbp-D0h]
  char v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  std::_Ref_count_base *v24; // [rsp+68h] [rbp-98h]
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v26; // [rsp+78h] [rbp-88h]
  std::_Ref_count_base *v27[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v28; // [rsp+90h] [rbp-70h] BYREF
  std::_Ref_count_base *v29; // [rsp+98h] [rbp-68h]
  _BYTE v30[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v31[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v32[16]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v33[7]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v34; // [rsp+108h] [rbp+8h]
  __int128 v35; // [rsp+110h] [rbp+10h]

  v4 = *((_DWORD *)this + 75);
  v5 = 3;
  if ( !v4 || v4 == 3 )
  {
    v6 = Spectre::Engine::Mesh::GetTopology(this, a2) == 3;
    if ( (unsigned int)Spectre::Engine::Mesh::GetIndexFormat() == 1 )
    {
      v8 = 1;
      Indices16 = Spectre::Engine::Mesh::GetIndices16(v7, &v28, 0LL);
      v10 = *(_QWORD *)Indices16;
      v25 = *(_QWORD *)Indices16;
      v26 = *(std::_Ref_count_base **)(Indices16 + 8);
      *(_QWORD *)Indices16 = 0LL;
      *(_QWORD *)(Indices16 + 8) = 0LL;
      v11 = &v25;
    }
    else
    {
      v8 = 0;
      v12 = Spectre::Engine::Mesh::GetIndices16(v7, v27, 0LL);
      v10 = *(_QWORD *)v12;
      v24 = *(std::_Ref_count_base **)(v12 + 8);
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      v11 = &v23;
      v5 = 12;
    }
    v13 = (std::_Ref_count_base *)v11[1];
    *v11 = 0LL;
    v11[1] = 0LL;
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      if ( v27[1] )
        std::_Ref_count_base::_Decref(v27[1]);
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      if ( v26 )
        std::_Ref_count_base::_Decref(v26);
    }
    if ( (v5 & 1) != 0 && v29 )
      std::_Ref_count_base::_Decref(v29);
    *(_OWORD *)v27 = 0LL;
    v34 = 0LL;
    if ( std::_Test_callable__lambda_ab41f81ca63d3d4c36433f589e0aa9fa___() )
    {
      v33[0] = &std::_Func_impl_no_alloc<_lambda_ab41f81ca63d3d4c36433f589e0aa9fa_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,void *>::`vftable';
      v33[1] = this;
      v34 = v33;
    }
    IndexCount = Spectre::Engine::Mesh::GetIndexCount(this);
    v23 = v10;
    v24 = v13;
    v35 = 0LL;
    VertexCount = Spectre::Engine::Mesh::GetVertexCount(v15);
    Normals = Spectre::Engine::Mesh::GetNormals(v17, v30, 0LL);
    v28 = v31;
    UV0 = Spectre::Engine::Mesh::GetUV0(this, v31, 0LL);
    Positions = Spectre::Engine::Mesh::GetPositions(this, v32, 0LL);
    v22 = a3;
    v21 = v8;
    Spectre::Framework::GeometryUtils::ComputeTangents(
      Positions,
      UV0,
      Normals,
      VertexCount,
      &v23,
      IndexCount,
      v21,
      v6,
      v22,
      v33);
    if ( v27[1] )
      std::_Ref_count_base::_Decref(v27[1]);
  }
}
