/*
 * XREFs of sub_1C00A0B3C @ 0x1C00A0B3C
 * Callers:
 *     sub_1C00A0AD8 @ 0x1C00A0AD8 (sub_1C00A0AD8.c)
 * Callees:
 *     sub_1C00073B8 @ 0x1C00073B8 (sub_1C00073B8.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C00A0B3C(__int64 a1, void *a2, unsigned int *a3)
{
  __int64 v3; // rsi
  unsigned int v7; // r14d
  unsigned __int8 v8; // cl
  bool v9; // al
  __int64 v10; // rax
  __int128 *v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int128 v14; // xmm1
  size_t v15; // rbx
  size_t v16; // r8
  int v17; // ecx
  __int64 result; // rax
  __int128 v19; // xmm0
  int v20; // eax
  size_t v21; // rax
  _OWORD *v22; // rdx
  _BYTE *v23; // rcx
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  _OWORD *v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  _OWORD *v37; // rcx
  __int128 v38; // xmm0
  _OWORD *v39; // rdx
  __int64 v40; // rax
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  _DWORD Dst[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+2Ch] [rbp-D4h]
  int v50; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+34h] [rbp-CCh]
  int v52; // [rsp+38h] [rbp-C8h]
  int v53; // [rsp+3Ch] [rbp-C4h]
  _BYTE v54[49]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v55[25]; // [rsp+79h] [rbp-87h] BYREF
  _BYTE v56[261]; // [rsp+ABh] [rbp-55h] BYREF

  v3 = *(_QWORD *)(a1 + 104);
  memset_0(Dst, 0, 0x18CuLL);
  v7 = *a3;
  Dst[1] = 396;
  Dst[0] = 40;
  if ( v7 > 0x18C )
    v7 = 396;
  if ( (*(_BYTE *)(a1 + 128) & 4) != 0 )
  {
    v48 = 0x1000000;
  }
  else if ( v3 )
  {
    v8 = *(_BYTE *)(v3 + 1);
    LOBYTE(v48) = *(_BYTE *)v3 & 0x1F;
    BYTE1(v48) = v8 & 0x7F;
    v9 = (*(_BYTE *)(v3 + 7) & 2) != 0;
    BYTE2(v48) = v8 >> 7;
    HIBYTE(v48) = v9;
  }
  v53 = *(_DWORD *)(a1 + 3344);
  v10 = *(_QWORD *)(a1 + 152);
  if ( v10 )
  {
    if ( *(_BYTE *)(v10 + 8) )
    {
      v24 = *(_OWORD *)(v10 + 8);
      v49 = 40;
      *(_OWORD *)v54 = v24;
    }
    v25 = *(_OWORD *)(v10 + 25);
    v50 = 57;
    v26 = *(_OWORD *)(v10 + 41);
    v51 = 122;
    *(_OWORD *)&v54[17] = v25;
    v27 = *(_OWORD *)(v10 + 57);
    *(_OWORD *)&v54[33] = v26;
    v28 = *(_OWORD *)(v10 + 73);
    *(_OWORD *)v55 = v27;
    v29 = *(_OWORD *)(v10 + 90);
    *(_OWORD *)&v55[8] = v28;
    *(_OWORD *)((char *)&v55[16] + 1) = v29;
    if ( !*(_WORD *)(a1 + 114) )
      goto LABEL_17;
    v52 = 139;
    memset_0(v56, 0, 0x100uLL);
    v21 = *(unsigned __int16 *)(a1 + 112);
    v22 = *(_OWORD **)(a1 + 120);
    if ( (unsigned __int16)v21 <= 0x100u )
    {
      v23 = v56;
      goto LABEL_20;
    }
    v30 = v56;
LABEL_29:
    v31 = v22[1];
    *v30 = *v22;
    v32 = v22[2];
    v30[1] = v31;
    v33 = v22[3];
    v30[2] = v32;
    v34 = v22[4];
    v30[3] = v33;
    v35 = v22[5];
    v30[4] = v34;
    v36 = v22[6];
    v30[5] = v35;
    v30[6] = v36;
    v37 = v30 + 8;
    v38 = v22[7];
    v39 = v22 + 8;
    *(v37 - 1) = v38;
    v40 = *((_QWORD *)v39 + 14);
    v41 = v39[1];
    *v37 = *v39;
    v42 = v39[2];
    v37[1] = v41;
    v43 = v39[3];
    v37[2] = v42;
    v44 = v39[4];
    v37[3] = v43;
    v45 = v39[5];
    v37[4] = v44;
    v46 = v39[6];
    v37[5] = v45;
    v37[6] = v46;
    *((_QWORD *)v37 + 14) = v40;
    *((_DWORD *)v37 + 30) = *((_DWORD *)v39 + 30);
    *((_WORD *)v37 + 62) = *((_WORD *)v39 + 62);
    *((_BYTE *)v37 + 126) = *((_BYTE *)v39 + 126);
    v56[187] = 0;
    goto LABEL_15;
  }
  v11 = *(__int128 **)(a1 + 144);
  if ( !v11 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x40) == 0 )
  {
    v19 = *(_OWORD *)(v3 + 16);
    *(_QWORD *)v54 = *(_QWORD *)(v3 + 8);
    v20 = *(_DWORD *)(v3 + 32);
    *(_OWORD *)&v54[9] = v19;
    *(_DWORD *)&v54[26] = v20;
    v49 = 40;
    v50 = 49;
    v51 = 66;
    if ( !*(_WORD *)(a1 + 114) )
      goto LABEL_17;
    v52 = 71;
    memset_0(&v54[31], 0, 0x100uLL);
    v21 = *(unsigned __int16 *)(a1 + 112);
    v22 = *(_OWORD **)(a1 + 120);
    if ( (unsigned __int16)v21 <= 0x100u )
    {
      v23 = &v54[31];
LABEL_20:
      memmove(v23, v22, v21);
      goto LABEL_15;
    }
    v30 = &v54[31];
    goto LABEL_29;
  }
  v12 = *v11;
  v13 = *(_QWORD *)((char *)v11 + 41);
  v14 = v11[1];
  v50 = 40;
  *(_OWORD *)v54 = v12;
  *(_QWORD *)&v54[41] = v13;
  *(_QWORD *)&v54[32] = *((_QWORD *)v11 + 4);
  *(_OWORD *)&v54[16] = v14;
  v51 = 81;
  if ( !*(_WORD *)(a1 + 114) )
  {
LABEL_17:
    v52 = 0;
    goto LABEL_15;
  }
  v15 = *(unsigned __int16 *)(a1 + 112);
  v16 = 20LL;
  v52 = 90;
  if ( (unsigned __int16)v15 < 0x14u )
    v16 = v15;
  memmove((char *)v55 + 1, *(const void **)(a1 + 120), v16);
  v17 = 21;
  if ( v15 + 1 < 0x15 )
    v17 = v15 + 1;
  sub_1C00073B8((__int64)v55 + 1, v17);
LABEL_15:
  memmove(a2, Dst, v7);
  result = 0LL;
  *a3 = v7;
  return result;
}
