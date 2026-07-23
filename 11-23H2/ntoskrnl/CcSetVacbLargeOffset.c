/*
 * XREFs of CcSetVacbLargeOffset @ 0x1402F3140
 * Callers:
 *     CcAdjustVacbLevelLockCount @ 0x1402075C0 (CcAdjustVacbLevelLockCount.c)
 *     CcUnmapVacbArray @ 0x14029F050 (CcUnmapVacbArray.c)
 *     SetVacb @ 0x1402A0D98 (SetVacb.c)
 * Callees:
 *     CcGetBcbListHeadLargeOffset @ 0x140261280 (CcGetBcbListHeadLargeOffset.c)
 *     VacbLevelReference @ 0x1402F3868 (VacbLevelReference.c)
 *     CcAllocateVacbLevel @ 0x1402F3890 (CcAllocateVacbLevel.c)
 *     CcFreeUnusedVacbLevels @ 0x1402F3914 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x1402F3970 (CcAllocateVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x1402F3A14 (CcDeallocateVacbLevel.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, __int128 *a4)
{
  __int64 v5; // rsi
  __int128 *v6; // r10
  _QWORD *v7; // r14
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned int v11; // ebx
  char v12; // di
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *VacbLevel; // r15
  _QWORD *v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rax
  __int128 *v22; // r10
  int v23; // r9d
  _DWORD *v25; // rax
  __int64 v26; // r9
  unsigned int v27; // eax
  __int64 v28; // r9
  int v29; // eax
  BOOL v30; // r15d
  _QWORD *v31; // r9
  _DWORD *v32; // rax
  __int64 BcbListHeadLargeOffset; // rax
  __int64 i; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  BOOL v37; // [rsp+20h] [rbp-D8h]
  unsigned int v38; // [rsp+24h] [rbp-D4h]
  __int128 *v39; // [rsp+28h] [rbp-D0h]
  __int128 v40; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v41; // [rsp+40h] [rbp-B8h]
  __int64 v42; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v43; // [rsp+58h] [rbp-A0h]
  _OWORD v44[3]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v45; // [rsp+90h] [rbp-68h]
  _DWORD v46[8]; // [rsp+98h] [rbp-60h]

  v42 = a2;
  v39 = a4;
  v43 = a3;
  memset(v44, 0, sizeof(v44));
  v5 = a2;
  v6 = a4;
  v7 = *(_QWORD **)(a1 + 88);
  v8 = 25;
  v9 = *(_QWORD *)(a1 + 32);
  v45 = 0LL;
  LODWORD(v10) = 0;
  v11 = 0;
  v40 = 0LL;
  v41 = 0LL;
  do
  {
    v12 = v8;
    v8 += 7;
    ++v11;
  }
  while ( v9 > 1LL << v8 );
  do
  {
    v38 = v11;
    v13 = v11;
    v14 = v5 >> v12;
    --v11;
    if ( (unsigned int)v10 >= 7 )
      return 0;
    v15 = (unsigned int)v10;
    LODWORD(v10) = v10 + 1;
    v46[v15] = v14;
    *((_QWORD *)v44 + v15) = v7;
    VacbLevel = (_QWORD *)v7[(unsigned int)v14];
    v17 = &v7[(unsigned int)v14];
    if ( !VacbLevel )
    {
      v29 = *(_DWORD *)(a1 + 152) & 0x200;
      v30 = v29 && !v11;
      v37 = v30;
      if ( !v6 )
      {
        *(_QWORD *)&v41 = 0LL;
        *((_QWORD *)&v40 + 1) = &v40;
        DWORD2(v41) = 0;
        *(_QWORD *)&v40 = &v40;
        LOBYTE(v14) = v29 != 0;
        if ( !(unsigned __int8)CcAllocateVacbLevels(v13, v14, &v40) )
          return 0;
        v6 = &v40;
        v39 = &v40;
      }
      VacbLevel = (_QWORD *)CcAllocateVacbLevel(v6, v30);
      if ( v37 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v42, 0);
        for ( i = *(_QWORD *)(BcbListHeadLargeOffset + 8); *(_WORD *)(i - 16) == 765; i = *(_QWORD *)(i + 8) )
          BcbListHeadLargeOffset = i;
        v31 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 128;
        VacbLevel[128] = BcbListHeadLargeOffset;
        VacbLevel[129] = VacbLevel + 130;
        VacbLevel[130] = VacbLevel + 128;
        VacbLevel[131] = VacbLevel + 132;
        VacbLevel[132] = VacbLevel + 130;
        VacbLevel[133] = VacbLevel + 134;
        VacbLevel[134] = VacbLevel + 132;
        VacbLevel[135] = VacbLevel + 136;
        VacbLevel[136] = VacbLevel + 134;
        VacbLevel[137] = VacbLevel + 138;
        VacbLevel[138] = VacbLevel + 136;
        VacbLevel[139] = VacbLevel + 140;
        VacbLevel[140] = VacbLevel + 138;
        VacbLevel[141] = VacbLevel + 142;
        VacbLevel[142] = VacbLevel + 140;
        VacbLevel[143] = VacbLevel + 144;
        VacbLevel[144] = VacbLevel + 142;
        VacbLevel[145] = VacbLevel + 146;
        VacbLevel[146] = VacbLevel + 144;
        VacbLevel[147] = VacbLevel + 148;
        VacbLevel[148] = VacbLevel + 146;
        VacbLevel[149] = VacbLevel + 150;
        VacbLevel[150] = VacbLevel + 148;
        VacbLevel[151] = VacbLevel + 152;
        VacbLevel[152] = VacbLevel + 150;
        VacbLevel[153] = VacbLevel + 154;
        VacbLevel[154] = VacbLevel + 152;
        VacbLevel[155] = VacbLevel + 156;
        VacbLevel[156] = VacbLevel + 154;
        VacbLevel[157] = VacbLevel + 158;
        VacbLevel[158] = VacbLevel + 156;
        VacbLevel[159] = VacbLevel + 160;
        VacbLevel[160] = VacbLevel + 158;
        VacbLevel[161] = VacbLevel + 162;
        VacbLevel[162] = VacbLevel + 160;
        VacbLevel[163] = VacbLevel + 164;
        VacbLevel[164] = VacbLevel + 162;
        VacbLevel[165] = VacbLevel + 166;
        VacbLevel[166] = VacbLevel + 164;
        VacbLevel[167] = VacbLevel + 168;
        VacbLevel[168] = VacbLevel + 166;
        VacbLevel[169] = VacbLevel + 170;
        VacbLevel[170] = VacbLevel + 168;
        VacbLevel[171] = VacbLevel + 172;
        VacbLevel[172] = VacbLevel + 170;
        VacbLevel[173] = VacbLevel + 174;
        VacbLevel[174] = VacbLevel + 172;
        VacbLevel[175] = VacbLevel + 176;
        VacbLevel[176] = VacbLevel + 174;
        VacbLevel[177] = VacbLevel + 178;
        VacbLevel[178] = VacbLevel + 176;
        VacbLevel[179] = VacbLevel + 180;
        VacbLevel[180] = VacbLevel + 178;
        VacbLevel[181] = VacbLevel + 182;
        VacbLevel[182] = VacbLevel + 180;
        VacbLevel[183] = VacbLevel + 184;
        VacbLevel[184] = VacbLevel + 182;
        VacbLevel[185] = VacbLevel + 186;
        VacbLevel[186] = VacbLevel + 184;
        VacbLevel[187] = VacbLevel + 188;
        VacbLevel[188] = VacbLevel + 186;
        VacbLevel[189] = VacbLevel + 190;
        VacbLevel[190] = VacbLevel + 188;
        VacbLevel[191] = VacbLevel + 192;
        VacbLevel[192] = VacbLevel + 190;
        VacbLevel[193] = VacbLevel + 194;
        VacbLevel[194] = VacbLevel + 192;
        VacbLevel[195] = VacbLevel + 196;
        VacbLevel[196] = VacbLevel + 194;
        VacbLevel[197] = VacbLevel + 198;
        VacbLevel[198] = VacbLevel + 196;
        VacbLevel[199] = VacbLevel + 200;
        VacbLevel[200] = VacbLevel + 198;
        VacbLevel[201] = VacbLevel + 202;
        VacbLevel[202] = VacbLevel + 200;
        VacbLevel[203] = VacbLevel + 204;
        VacbLevel[204] = VacbLevel + 202;
        VacbLevel[205] = VacbLevel + 206;
        VacbLevel[206] = VacbLevel + 204;
        VacbLevel[207] = VacbLevel + 208;
        VacbLevel[208] = VacbLevel + 206;
        VacbLevel[209] = VacbLevel + 210;
        VacbLevel[210] = VacbLevel + 208;
        VacbLevel[211] = VacbLevel + 212;
        VacbLevel[212] = VacbLevel + 210;
        VacbLevel[213] = VacbLevel + 214;
        VacbLevel[214] = VacbLevel + 212;
        VacbLevel[215] = VacbLevel + 216;
        VacbLevel[216] = VacbLevel + 214;
        VacbLevel[217] = VacbLevel + 218;
        VacbLevel[218] = VacbLevel + 216;
        VacbLevel[219] = VacbLevel + 220;
        VacbLevel[220] = VacbLevel + 218;
        VacbLevel[221] = VacbLevel + 222;
        VacbLevel[222] = VacbLevel + 220;
        VacbLevel[223] = VacbLevel + 224;
        VacbLevel[224] = VacbLevel + 222;
        VacbLevel[225] = VacbLevel + 226;
        VacbLevel[226] = VacbLevel + 224;
        VacbLevel[227] = VacbLevel + 228;
        VacbLevel[228] = VacbLevel + 226;
        VacbLevel[229] = VacbLevel + 230;
        VacbLevel[230] = VacbLevel + 228;
        VacbLevel[231] = VacbLevel + 232;
        VacbLevel[232] = VacbLevel + 230;
        VacbLevel[233] = VacbLevel + 234;
        VacbLevel[234] = VacbLevel + 232;
        VacbLevel[235] = VacbLevel + 236;
        VacbLevel[236] = VacbLevel + 234;
        VacbLevel[237] = VacbLevel + 238;
        VacbLevel[238] = VacbLevel + 236;
        VacbLevel[239] = VacbLevel + 240;
        VacbLevel[240] = VacbLevel + 238;
        VacbLevel[241] = VacbLevel + 242;
        VacbLevel[242] = VacbLevel + 240;
        VacbLevel[243] = VacbLevel + 244;
        VacbLevel[244] = VacbLevel + 242;
        VacbLevel[245] = VacbLevel + 246;
        VacbLevel[246] = VacbLevel + 244;
        VacbLevel[247] = VacbLevel + 248;
        VacbLevel[248] = VacbLevel + 246;
        VacbLevel[249] = VacbLevel + 250;
        VacbLevel[250] = VacbLevel + 248;
        VacbLevel[251] = VacbLevel + 252;
        VacbLevel[252] = VacbLevel + 250;
        VacbLevel[253] = VacbLevel + 254;
        VacbLevel[254] = VacbLevel + 252;
        VacbLevel[255] = v31;
        *v31 = VacbLevel + 254;
      }
      *v17 = VacbLevel;
      v32 = (_DWORD *)VacbLevelReference(a1, v7, v38, v31);
      v6 = v39;
      ++*v32;
    }
    v18 = 1LL << v12;
    v12 -= 7;
    v7 = VacbLevel;
    v5 &= v18 - 1;
  }
  while ( v11 );
  v19 = v43;
  if ( v43 < 0xFFFFFFFFFFFFFFFEuLL )
  {
    v20 = 0LL;
    VacbLevel[(unsigned int)(v5 >> v12)] = v43;
    if ( v19 )
      goto LABEL_8;
LABEL_13:
    v25 = (_DWORD *)VacbLevelReference(a1, VacbLevel, 0LL, v20);
    if ( (_DWORD)v26 )
    {
      --v25[1];
      goto LABEL_15;
    }
    while ( 1 )
    {
      --*v25;
LABEL_15:
      if ( *(_QWORD *)VacbLevelReference(a1, v7, v11, v26) || !(_DWORD)v10 )
        break;
      v27 = v11;
      v10 = (unsigned int)(v10 - 1);
      ++v11;
      if ( !v27 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        v35 = v7[128];
        v36 = (_QWORD *)v7[255];
        *(_QWORD *)(v35 + 8) = v36;
        *v36 = v35;
      }
      CcDeallocateVacbLevel(v7);
      v7 = (_QWORD *)*((_QWORD *)v44 + v10);
      v7[v46[v10]] = 0LL;
      v25 = (_DWORD *)VacbLevelReference(a1, v7, v11, v28);
    }
    v22 = v39;
    goto LABEL_10;
  }
  v20 = 1LL;
  if ( v43 == -2LL )
    goto LABEL_13;
LABEL_8:
  v21 = (_DWORD *)VacbLevelReference(a1, VacbLevel, 0LL, v20);
  if ( v23 )
    ++v21[1];
  else
    ++*v21;
LABEL_10:
  if ( v22 == &v40 )
    CcFreeUnusedVacbLevels(v22);
  return 1;
}
