/*
 * XREFs of ?GetPoints@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1800BEA50
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA?A_TAEBUPointData3D@@@Z @ 0x1800B3FD0 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ??$MPCHandProcessor_PointDataChanged@AEAIAEAI@ISMTracing@@SAXAEAI0@Z @ 0x1800BDCC8 (--$MPCHandProcessor_PointDataChanged@AEAIAEAI@ISMTracing@@SAXAEAI0@Z.c)
 */

char *__fastcall MPCHandProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  bool v5; // zf
  int v6; // edx
  __int128 v7; // xmm1
  int v8; // r8d
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // ecx
  int v14; // eax
  __int64 v15; // xmm0_8
  int v16; // eax
  __int64 v17; // xmm0_8
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int128 v28; // [rsp+20h] [rbp-79h] BYREF
  __int128 v29; // [rsp+30h] [rbp-69h] BYREF
  __int128 v30; // [rsp+40h] [rbp-59h]
  __m256i v31; // [rsp+50h] [rbp-49h]
  __int128 v32; // [rsp+70h] [rbp-29h]
  __int128 v33; // [rsp+80h] [rbp-19h]
  __int128 v34; // [rsp+90h] [rbp-9h]
  __int128 v35; // [rsp+A0h] [rbp+7h]
  __int128 v36; // [rsp+B0h] [rbp+17h]
  __int128 v37; // [rsp+C0h] [rbp+27h]
  __int64 v38; // [rsp+D0h] [rbp+37h]

  memset_0(&v28, 0, 0xB8uLL);
  v5 = *(_BYTE *)(a1 + 1740) == 0;
  v6 = *(_DWORD *)(a1 + 1596);
  v7 = *(_OWORD *)(a1 + 120);
  v8 = *(_DWORD *)(a1 + 1748);
  v32 = *(_OWORD *)(a1 + 104);
  v9 = *(_OWORD *)(a1 + 136);
  HIDWORD(v28) = v6;
  v33 = v7;
  v10 = *(_OWORD *)(a1 + 152);
  LODWORD(v29) = 6;
  v34 = v9;
  v11 = *(_OWORD *)(a1 + 168);
  DWORD1(v29) = v8;
  v35 = v10;
  v12 = *(_OWORD *)(a1 + 184);
  v36 = v11;
  v37 = v12;
  if ( v5 )
  {
    HIDWORD(v38) = 0;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 1732);
    v14 = 1;
    if ( v13 == 2 )
    {
      HIDWORD(v38) = 5;
    }
    else
    {
      if ( v13 == 1 )
        v14 = 3;
      HIDWORD(v38) = v14;
    }
    v15 = *(_QWORD *)(a1 + 9912);
    v31.m256i_i8[28] = *(_BYTE *)(a1 + 9896);
    v31.m256i_i8[30] = v31.m256i_i8[28];
    v16 = *(_DWORD *)(a1 + 9920);
    *((_QWORD *)&v29 + 1) = v15;
    v17 = *(_QWORD *)(a1 + 9900);
    LODWORD(v30) = v16;
    v31.m256i_i32[5] = *(_DWORD *)(a1 + 9908);
    *(__int64 *)((char *)&v31.m256i_i64[1] + 4) = v17;
  }
  if ( *(_DWORD *)(a1 + 9732) != v8 || *(_DWORD *)(a1 + 9724) != v6 )
    ISMTracing::MPCHandProcessor_PointDataChanged<unsigned int &,unsigned int &>(
      (unsigned int *)&v28 + 3,
      (unsigned int *)&v29 + 1);
  v18 = v29;
  *(_OWORD *)(a1 + 9712) = v28;
  v19 = v30;
  *(_OWORD *)(a1 + 9728) = v18;
  v20 = *(_OWORD *)v31.m256i_i8;
  *(_OWORD *)(a1 + 9744) = v19;
  v21 = *(_OWORD *)&v31.m256i_u64[2];
  *(_OWORD *)(a1 + 9760) = v20;
  v22 = v32;
  *(_OWORD *)(a1 + 9776) = v21;
  v23 = v33;
  *(_OWORD *)(a1 + 9792) = v22;
  *(_OWORD *)(a1 + 9808) = v23;
  *(_OWORD *)(a1 + 9824) = v34;
  v24 = v36;
  *(_OWORD *)(a1 + 9840) = v35;
  v25 = v37;
  v26 = v38;
  *(_OWORD *)(a1 + 9856) = v24;
  *(_OWORD *)(a1 + 9872) = v25;
  *(_QWORD *)(a1 + 9888) = v26;
  return std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v28);
}
