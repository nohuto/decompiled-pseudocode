/*
 * XREFs of ?GetPoints@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1801EB300
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA?A_TAEBUPointData3D@@@Z @ 0x1800C56D8 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

char *__fastcall MPCSixDofProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r8d
  __int64 v6; // xmm0_8
  int v7; // edx
  int v8; // eax
  __int64 v9; // xmm0_8
  int v10; // xmm1_4
  int v11; // eax
  int v12; // xmm1_4
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v21; // [rsp+20h] [rbp-79h] BYREF
  int v22; // [rsp+30h] [rbp-69h]
  unsigned int v23; // [rsp+34h] [rbp-65h]
  __int64 v24; // [rsp+38h] [rbp-61h]
  int v25; // [rsp+40h] [rbp-59h]
  int v26; // [rsp+44h] [rbp-55h]
  int v27; // [rsp+48h] [rbp-51h]
  int v28; // [rsp+4Ch] [rbp-4Dh]
  int v29; // [rsp+50h] [rbp-49h]
  int v30; // [rsp+54h] [rbp-45h]
  int v31; // [rsp+58h] [rbp-41h]
  __int64 v32; // [rsp+5Ch] [rbp-3Dh]
  int v33; // [rsp+64h] [rbp-35h]
  float v34; // [rsp+68h] [rbp-31h]
  char v35; // [rsp+6Ch] [rbp-2Dh]
  __int16 v36; // [rsp+6Dh] [rbp-2Ch]
  __int128 v37; // [rsp+70h] [rbp-29h]
  __int128 v38; // [rsp+80h] [rbp-19h]
  __int128 v39; // [rsp+90h] [rbp-9h]
  __int128 v40; // [rsp+A0h] [rbp+7h]
  __int128 v41; // [rsp+B0h] [rbp+17h]
  __int128 v42; // [rsp+C0h] [rbp+27h]

  memset_0(&v21, 0, 0xB8uLL);
  v5 = *(_DWORD *)(a1 + 4148);
  v6 = *(_QWORD *)(a1 + 4248);
  v7 = v5 & 1;
  HIDWORD(v21) = *(_DWORD *)(a1 + 4144);
  v8 = *(_DWORD *)(a1 + 4256);
  v22 = 5;
  *(_QWORD *)&v21 = v6;
  DWORD2(v21) = v8;
  if ( *(_BYTE *)(a1 + 10784) )
    v23 = v7 != 0 ? 0x20 : 0;
  else
    v23 = (32 * v7) | v5 & 0x54 | (4 * (v5 & 2)) | ((v5 & 8 | (v5 >> 1) & 0x10) >> 3);
  v9 = *(_QWORD *)(a1 + 4236);
  v10 = *(_DWORD *)(a1 + 4204);
  v28 = 0;
  v31 = 0;
  v11 = *(_DWORD *)(a1 + 4244);
  v32 = v9;
  v34 = FLOAT_1_0;
  v26 = *(_DWORD *)(a1 + 4200);
  LODWORD(v9) = *(_DWORD *)(a1 + 4188);
  v27 = v10;
  v12 = *(_DWORD *)(a1 + 4184);
  v30 = v9;
  v29 = v12;
  v33 = v11;
  v36 = 257;
  if ( *(_BYTE *)(a1 + 10777) )
  {
    v13 = *(_DWORD *)(a1 + 4232);
    v24 = *(_QWORD *)(a1 + 4224);
    v35 = 1;
  }
  else
  {
    v13 = 0;
    v35 = 0;
    v24 = 0LL;
  }
  v14 = *(_OWORD *)(a1 + 104);
  v15 = *(_OWORD *)(a1 + 120);
  v25 = v13;
  v37 = v14;
  v16 = *(_OWORD *)(a1 + 136);
  v38 = v15;
  v17 = *(_OWORD *)(a1 + 152);
  v39 = v16;
  v18 = *(_OWORD *)(a1 + 168);
  v40 = v17;
  v19 = *(_OWORD *)(a1 + 184);
  v41 = v18;
  v42 = v19;
  return std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v21);
}
