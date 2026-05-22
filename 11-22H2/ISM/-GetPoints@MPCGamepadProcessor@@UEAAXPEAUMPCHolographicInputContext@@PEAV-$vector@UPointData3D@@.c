/*
 * XREFs of ?GetPoints@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1801F0AE0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA?A_TAEBUPointData3D@@@Z @ 0x1800C56D8 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

char *__fastcall MPCGamepadProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // xmm0_8
  __int128 v6; // xmm1
  unsigned int v7; // ecx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v15; // [rsp+20h] [rbp-79h] BYREF
  int v16; // [rsp+30h] [rbp-69h]
  int v17; // [rsp+34h] [rbp-65h]
  __int64 v18; // [rsp+38h] [rbp-61h]
  int v19; // [rsp+40h] [rbp-59h]
  __int128 v20; // [rsp+44h] [rbp-55h]
  __int64 v21; // [rsp+54h] [rbp-45h]
  __int16 v22; // [rsp+6Ch] [rbp-2Dh]
  __int128 v23; // [rsp+70h] [rbp-29h]
  __int128 v24; // [rsp+80h] [rbp-19h]
  __int128 v25; // [rsp+90h] [rbp-9h]
  __int128 v26; // [rsp+A0h] [rbp+7h]
  __int128 v27; // [rsp+B0h] [rbp+17h]
  __int128 v28; // [rsp+C0h] [rbp+27h]

  memset_0(&v15, 0, 0xB8uLL);
  v5 = *(_QWORD *)(a1 + 4172);
  v6 = *(_OWORD *)(a1 + 120);
  DWORD2(v15) = *(_DWORD *)(a1 + 4180);
  v7 = *(_DWORD *)(a1 + 3672);
  *(_QWORD *)&v15 = v5;
  v8 = *(_OWORD *)(a1 + 4200);
  v24 = v6;
  v9 = *(_OWORD *)(a1 + 152);
  v20 = v8;
  v10 = *(_OWORD *)(a1 + 104);
  v17 = (16 * (v7 & 1)) | (v7 >> 2) & 0xF;
  v26 = v9;
  v11 = *(_OWORD *)(a1 + 184);
  HIDWORD(v15) = 1;
  v23 = v10;
  v12 = *(_OWORD *)(a1 + 136);
  v16 = 4;
  v18 = 0LL;
  v25 = v12;
  v13 = *(_OWORD *)(a1 + 168);
  v19 = 0;
  v22 = 256;
  v27 = v13;
  v21 = 0LL;
  v28 = v11;
  return std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v15);
}
