/*
 * XREFs of ?GetPoints@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1800CF130
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA?A_TAEBUPointData3D@@@Z @ 0x1800C56D8 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ?MPCHandProcessor_PointDataChanged_@ISMTracing@@QEAAXII@Z @ 0x1800CF87C (-MPCHandProcessor_PointDataChanged_@ISMTracing@@QEAAXII@Z.c)
 */

char *__fastcall MPCHandProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // edi
  __int128 v8; // xmm1
  unsigned int v9; // esi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // eax
  __int64 v15; // xmm0_8
  int v16; // eax
  __int64 v17; // xmm0_8
  __int64 v18; // rcx
  ISMTracing *v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int128 v30; // [rsp+20h] [rbp-89h] BYREF
  __int128 v31; // [rsp+30h] [rbp-79h]
  __int128 v32; // [rsp+40h] [rbp-69h]
  __m256i v33; // [rsp+50h] [rbp-59h]
  __int128 v34; // [rsp+70h] [rbp-39h]
  __int128 v35; // [rsp+80h] [rbp-29h]
  __int128 v36; // [rsp+90h] [rbp-19h]
  __int128 v37; // [rsp+A0h] [rbp-9h]
  __int128 v38; // [rsp+B0h] [rbp+7h]
  __int128 v39; // [rsp+C0h] [rbp+17h]
  __int64 v40; // [rsp+D0h] [rbp+27h]

  memset_0(&v30, 0, 0xB8uLL);
  v6 = *(_BYTE *)(a1 + 1740) == 0;
  v7 = *(_DWORD *)(a1 + 1596);
  v8 = *(_OWORD *)(a1 + 120);
  v9 = *(_DWORD *)(a1 + 1748);
  v34 = *(_OWORD *)(a1 + 104);
  v10 = *(_OWORD *)(a1 + 136);
  HIDWORD(v30) = v7;
  v35 = v8;
  v11 = *(_OWORD *)(a1 + 152);
  LODWORD(v31) = 6;
  v36 = v10;
  v12 = *(_OWORD *)(a1 + 168);
  DWORD1(v31) = v9;
  v37 = v11;
  v13 = *(_OWORD *)(a1 + 184);
  v38 = v12;
  v39 = v13;
  if ( v6 )
  {
    HIDWORD(v40) = 0;
  }
  else
  {
    v5 = *(unsigned int *)(a1 + 1732);
    v14 = 1;
    if ( (_DWORD)v5 == 2 )
    {
      HIDWORD(v40) = 5;
    }
    else
    {
      if ( (_DWORD)v5 == 1 )
        v14 = 3;
      HIDWORD(v40) = v14;
    }
    v15 = *(_QWORD *)(a1 + 9912);
    v33.m256i_i8[28] = *(_BYTE *)(a1 + 9896);
    v33.m256i_i8[30] = v33.m256i_i8[28];
    v16 = *(_DWORD *)(a1 + 9920);
    *((_QWORD *)&v31 + 1) = v15;
    v17 = *(_QWORD *)(a1 + 9900);
    LODWORD(v32) = v16;
    v33.m256i_i32[5] = *(_DWORD *)(a1 + 9908);
    *(__int64 *)((char *)&v33.m256i_i64[1] + 4) = v17;
  }
  if ( (*(_DWORD *)(a1 + 9732) != v9 || *(_DWORD *)(a1 + 9724) != v7) && ISMTracing::IsEnabled(v5) )
  {
    wil::details::static_lazy<ISMTracing>::get(v18, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHandProcessor_PointDataChanged_(v19, v7, v9);
  }
  v20 = v31;
  *(_OWORD *)(a1 + 9712) = v30;
  v21 = v32;
  *(_OWORD *)(a1 + 9728) = v20;
  v22 = *(_OWORD *)v33.m256i_i8;
  *(_OWORD *)(a1 + 9744) = v21;
  v23 = *(_OWORD *)&v33.m256i_u64[2];
  *(_OWORD *)(a1 + 9760) = v22;
  v24 = v34;
  *(_OWORD *)(a1 + 9776) = v23;
  v25 = v35;
  *(_OWORD *)(a1 + 9792) = v24;
  *(_OWORD *)(a1 + 9808) = v25;
  *(_OWORD *)(a1 + 9824) = v36;
  v26 = v38;
  *(_OWORD *)(a1 + 9840) = v37;
  v27 = v39;
  v28 = v40;
  *(_OWORD *)(a1 + 9856) = v26;
  *(_OWORD *)(a1 + 9872) = v27;
  *(_QWORD *)(a1 + 9888) = v28;
  return std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v30);
}
