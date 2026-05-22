/*
 * XREFs of ?GetPoints@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1801BC7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x18009CA4C (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800A1F48 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 */

void __fastcall MPCVoiceProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v6; // rax
  __int64 v7; // xmm0_8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  int v15; // [rsp+28h] [rbp-D8h]
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h]
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  __m256i v19; // [rsp+50h] [rbp-B0h]
  __int128 v20; // [rsp+70h] [rbp-90h]
  __int128 v21; // [rsp+80h] [rbp-80h] BYREF
  __int128 v22; // [rsp+90h] [rbp-70h]
  __m256i v23; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v24; // [rsp+C0h] [rbp-40h]
  __int128 v25; // [rsp+D0h] [rbp-30h]
  __int128 v26; // [rsp+E0h] [rbp-20h]
  __int128 v27; // [rsp+F0h] [rbp-10h]
  __int128 v28; // [rsp+100h] [rbp+0h]
  __int128 v29; // [rsp+110h] [rbp+10h]
  __int128 v30; // [rsp+120h] [rbp+20h]

  if ( *(_BYTE *)(a1 + 3640) )
  {
    if ( *(_BYTE *)(a1 + 3548) )
    {
      Instance = MPCHolographicInputManager::GetInstance();
      memcpy_0(&v21, Instance, 0xCD0uLL);
      v18 = v22;
      v19 = v23;
      v20 = v24;
      v6 = MPCHolographicInputManager::GetInstance();
      v7 = *((_QWORD *)v6 + 30);
      LODWORD(v6) = *((_DWORD *)v6 + 62);
      v14 = v7;
      v15 = (int)v6;
      Windows::Foundation::Numerics::transform((float *)&v16, (float *)&v14, (float *)&v18);
      v8 = *(_OWORD *)(a1 + 120);
      *(_QWORD *)&v21 = v16;
      *((_QWORD *)&v21 + 1) = v17 | 0x300000000LL;
      v9 = *(_OWORD *)(a1 + 104);
      v26 = v8;
      v10 = *(_OWORD *)(a1 + 152);
      v22 = 0x100000007uLL;
      v25 = v9;
      v11 = *(_OWORD *)(a1 + 136);
      v28 = v10;
      v12 = *(_OWORD *)(a1 + 184);
      v27 = v11;
      v13 = *(_OWORD *)(a1 + 168);
      memset(&v23, 0, 28);
      WORD6(v24) = 0;
      v29 = v13;
      v30 = v12;
      std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v21);
      DWORD1(v22) = 0;
      std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v21);
      *(_BYTE *)(a1 + 3640) = 0;
    }
  }
}
