/*
 * XREFs of ?GetPoints@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1801BF690
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x18009CA4C (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

char *__fastcall MPCSixDofProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // xmm0_8
  unsigned int v5; // r8d
  __int64 v6; // xmm0_8
  int v7; // xmm1_4
  int v8; // eax
  int v9; // xmm1_4
  int v10; // eax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v18; // [rsp+20h] [rbp-79h] BYREF
  int v19; // [rsp+30h] [rbp-69h]
  unsigned int v20; // [rsp+34h] [rbp-65h]
  __int64 v21; // [rsp+38h] [rbp-61h]
  int v22; // [rsp+40h] [rbp-59h]
  int v23; // [rsp+44h] [rbp-55h]
  int v24; // [rsp+48h] [rbp-51h]
  int v25; // [rsp+4Ch] [rbp-4Dh]
  int v26; // [rsp+50h] [rbp-49h]
  int v27; // [rsp+54h] [rbp-45h]
  int v28; // [rsp+58h] [rbp-41h]
  __int64 v29; // [rsp+5Ch] [rbp-3Dh]
  int v30; // [rsp+64h] [rbp-35h]
  float v31; // [rsp+68h] [rbp-31h]
  char v32; // [rsp+6Ch] [rbp-2Dh]
  __int16 v33; // [rsp+6Dh] [rbp-2Ch]
  char v34; // [rsp+6Fh] [rbp-2Ah]
  __int128 v35; // [rsp+70h] [rbp-29h]
  __int128 v36; // [rsp+80h] [rbp-19h]
  __int128 v37; // [rsp+90h] [rbp-9h]
  __int128 v38; // [rsp+A0h] [rbp+7h]
  __int128 v39; // [rsp+B0h] [rbp+17h]
  __int128 v40; // [rsp+C0h] [rbp+27h]
  __int64 v41; // [rsp+D0h] [rbp+37h]

  v3 = *(_QWORD *)(a1 + 4248);
  v21 = 0LL;
  v5 = *(_DWORD *)(a1 + 4148);
  v22 = 0;
  v34 = 0;
  v41 = 0LL;
  HIDWORD(v18) = *(_DWORD *)(a1 + 4144);
  DWORD2(v18) = *(_DWORD *)(a1 + 4256);
  v19 = 5;
  *(_QWORD *)&v18 = v3;
  if ( *(_BYTE *)(a1 + 10784) )
    v20 = 32 * (v5 & 1);
  else
    v20 = v5 & 0x54 | (4 * (v5 & 2)) | (32 * (v5 & 1)) | ((v5 & 8 | (v5 >> 1) & 0x10) >> 3);
  v6 = *(_QWORD *)(a1 + 4236);
  v7 = *(_DWORD *)(a1 + 4204);
  v25 = 0;
  v28 = 0;
  v8 = *(_DWORD *)(a1 + 4244);
  v29 = v6;
  v31 = FLOAT_1_0;
  v23 = *(_DWORD *)(a1 + 4200);
  LODWORD(v6) = *(_DWORD *)(a1 + 4188);
  v24 = v7;
  v9 = *(_DWORD *)(a1 + 4184);
  v27 = v6;
  v26 = v9;
  v30 = v8;
  v33 = 257;
  if ( *(_BYTE *)(a1 + 10777) )
  {
    v10 = *(_DWORD *)(a1 + 4232);
    v21 = *(_QWORD *)(a1 + 4224);
    v32 = 1;
  }
  else
  {
    v10 = 0;
    v32 = 0;
    v21 = 0LL;
  }
  v11 = *(_OWORD *)(a1 + 104);
  v22 = v10;
  v12 = *(_OWORD *)(a1 + 120);
  v35 = v11;
  v13 = *(_OWORD *)(a1 + 136);
  v36 = v12;
  v14 = *(_OWORD *)(a1 + 152);
  v37 = v13;
  v15 = *(_OWORD *)(a1 + 168);
  v38 = v14;
  v16 = *(_OWORD *)(a1 + 184);
  v39 = v15;
  v40 = v16;
  return std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v18);
}
