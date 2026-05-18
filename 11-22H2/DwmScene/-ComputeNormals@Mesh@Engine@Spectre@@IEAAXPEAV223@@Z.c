/*
 * XREFs of ?ComputeNormals@Mesh@Engine@Spectre@@IEAAXPEAV223@@Z @ 0x180047FEC
 * Callers:
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Test_callable__lambda_7334b5a9a3bbefa9324c75fdace13832___ @ 0x1800478BC (std--_Test_callable__lambda_7334b5a9a3bbefa9324c75fdace13832___.c)
 *     ?GetIndexCount@Mesh@Engine@Spectre@@QEBAIXZ @ 0x1800488F4 (-GetIndexCount@Mesh@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetIndexFormat@Mesh@Engine@Spectre@@QEBA?AW4IndexFormat@123@XZ @ 0x180048900 (-GetIndexFormat@Mesh@Engine@Spectre@@QEBA-AW4IndexFormat@123@XZ.c)
 *     ?GetIndices16@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@G@std@@W4EBufferGetDataOption@23@@Z @ 0x180048910 (-GetIndices16@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@G@std@@W4EBufferGetDataOption@23@@Z.c)
 *     ?GetPositions@Mesh@Engine@Spectre@@QEBA?AV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBufferGetDataOption@23@@Z @ 0x180048980 (-GetPositions@Mesh@Engine@Spectre@@QEBA-AV-$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@W4EBuf.c)
 *     ?GetTopology@Mesh@Engine@Spectre@@QEBA?AW4MeshTopology@23@XZ @ 0x1800489B8 (-GetTopology@Mesh@Engine@Spectre@@QEBA-AW4MeshTopology@23@XZ.c)
 *     ?GetVertexCount@Mesh@Engine@Spectre@@QEBAIXZ @ 0x180048A00 (-GetVertexCount@Mesh@Engine@Spectre@@QEBAIXZ.c)
 *     ?ComputeNormals@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@V?$function@$$A6AXAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E2070 (-ComputeNormals@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils@Spectre@@@.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Spectre::Engine::Mesh::ComputeNormals(Spectre::Engine::Mesh *this, struct Spectre::Engine::Engine *a2)
{
  int v3; // eax
  char v4; // bl
  BOOL v5; // r15d
  __int64 v6; // rcx
  char v7; // r12
  __int64 Indices16; // rax
  __int64 v9; // r14
  std::_Ref_count_base **v10; // rax
  __int64 v11; // rax
  std::_Ref_count_base *v12; // r13
  unsigned int IndexCount; // edi
  Spectre::Engine::Mesh *v14; // rcx
  unsigned int VertexCount; // ebx
  __int64 v16; // rcx
  int Positions; // eax
  __int64 v18; // [rsp+50h] [rbp-59h] BYREF
  std::_Ref_count_base *v19; // [rsp+58h] [rbp-51h]
  std::_Ref_count_base *v20[2]; // [rsp+60h] [rbp-49h] BYREF
  std::_Ref_count_base *v21[2]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v22[8]; // [rsp+80h] [rbp-29h] BYREF
  std::_Ref_count_base *v23; // [rsp+88h] [rbp-21h]
  _QWORD v24[7]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD *v25; // [rsp+C8h] [rbp+1Fh]

  v3 = *((_DWORD *)this + 75);
  v4 = 3;
  if ( !v3 || v3 == 3 )
  {
    v5 = Spectre::Engine::Mesh::GetTopology(this, a2) == 3;
    if ( (unsigned int)Spectre::Engine::Mesh::GetIndexFormat() == 1 )
    {
      v7 = 1;
      Indices16 = Spectre::Engine::Mesh::GetIndices16(v6, v22, 0LL);
      v9 = *(_QWORD *)Indices16;
      v18 = *(_QWORD *)Indices16;
      v19 = *(std::_Ref_count_base **)(Indices16 + 8);
      *(_QWORD *)Indices16 = 0LL;
      *(_QWORD *)(Indices16 + 8) = 0LL;
      v10 = (std::_Ref_count_base **)&v18;
    }
    else
    {
      v7 = 0;
      v11 = Spectre::Engine::Mesh::GetIndices16(v6, v21, 0LL);
      v9 = *(_QWORD *)v11;
      v20[1] = *(std::_Ref_count_base **)(v11 + 8);
      *(_QWORD *)v11 = 0LL;
      *(_QWORD *)(v11 + 8) = 0LL;
      v10 = v20;
      v4 = 12;
    }
    v12 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    if ( (v4 & 8) != 0 )
    {
      v4 &= ~8u;
      if ( v20[1] )
        std::_Ref_count_base::_Decref(v20[1]);
    }
    if ( (v4 & 4) != 0 )
    {
      v4 &= ~4u;
      if ( v21[1] )
        std::_Ref_count_base::_Decref(v21[1]);
    }
    if ( (v4 & 2) != 0 )
    {
      v4 &= ~2u;
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
    }
    if ( (v4 & 1) != 0 && v23 )
      std::_Ref_count_base::_Decref(v23);
    *(_OWORD *)v20 = 0LL;
    v25 = 0LL;
    if ( std::_Test_callable__lambda_7334b5a9a3bbefa9324c75fdace13832___() )
    {
      v24[0] = &std::_Func_impl_no_alloc<_lambda_7334b5a9a3bbefa9324c75fdace13832_,void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
      v24[1] = this;
      v25 = v24;
    }
    IndexCount = Spectre::Engine::Mesh::GetIndexCount(this);
    v18 = v9;
    v19 = v12;
    *(_OWORD *)v21 = 0LL;
    VertexCount = Spectre::Engine::Mesh::GetVertexCount(v14);
    Positions = Spectre::Engine::Mesh::GetPositions(v16, v22, 0LL);
    Spectre::Framework::GeometryUtils::ComputeNormals(
      Positions,
      VertexCount,
      (unsigned int)&v18,
      IndexCount,
      v7,
      v5,
      (__int64)v24);
    if ( v20[1] )
      std::_Ref_count_base::_Decref(v20[1]);
  }
}
