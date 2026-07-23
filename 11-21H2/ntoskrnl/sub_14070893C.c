/*
 * XREFs of sub_14070893C @ 0x14070893C
 * Callers:
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026E548 @ 0x14026E548 (sub_14026E548.c)
 *     sub_14026EA48 @ 0x14026EA48 (sub_14026EA48.c)
 *     sub_14026EA80 @ 0x14026EA80 (sub_14026EA80.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F4230 @ 0x1406F4230 (sub_1406F4230.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14070893C(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int *a6, _QWORD *a7)
{
  __int64 v9; // r13
  int v10; // esi
  __int64 v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  char *v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // r14
  _QWORD *v17; // rax
  _BYTE *v18; // r12
  char v19; // al
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned int v23; // r9d
  __int64 v24; // rdx
  __int16 v25; // ax
  unsigned int v26; // edx
  __int64 v27; // rdi
  unsigned int v28; // r11d
  unsigned int v29; // eax
  int v30; // ebx
  int v32; // eax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // r9d
  __int64 v38; // r10
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned int v41; // [rsp+30h] [rbp-48h]
  int v42; // [rsp+34h] [rbp-44h]
  __int64 v43; // [rsp+38h] [rbp-40h]
  unsigned int v45; // [rsp+90h] [rbp+18h]

  v42 = *(unsigned __int16 *)(a4 + 2);
  v9 = (*(_DWORD *)(a3 + 16) >> 12) + (unsigned int)((*(_DWORD *)(a3 + 16) & 0xFFF) != 0);
  if ( !(_DWORD)v9 )
    return 3221225595LL;
  v10 = a5;
  v11 = 1LL;
  if ( (a5 & 0x400000) == 0 )
    v11 = (unsigned int)*(unsigned __int16 *)(a4 + 2) + 1;
  v12 = sub_1402828F0(
          64,
          8 * (7 * v11 + (((unsigned __int64)(unsigned int)dword_140D06880 >> 12) & 1)) + 184,
          (a5 & 0x400000) != 0 ? 1631808845 : 1766026573);
  v13 = v12;
  if ( !v12 )
  {
    dword_140C4F3D0 = 26;
    return 3221225626LL;
  }
  v14 = (char *)&v12[7 * v11 + 16];
  v12[12] = v14;
  v43 = (__int64)v14;
  *((_QWORD *)v14 + 3) = *((_QWORD *)v14 + 3) & 0xFFFFFFFFFFFFFFF8uLL | 2;
  v15 = (__int64 *)sub_1402828F0(274, 8 * v9, 0x74536D4Du);
  v16 = v15;
  if ( !v15 )
  {
    dword_140C4F3D0 = 27;
    v30 = -1073741670;
    goto LABEL_52;
  }
  memset(v15, 0, 8 * v9);
  v17 = sub_1402828F0(256, 0x98uLL, 0x6765534Du);
  v18 = v17;
  if ( !v17 )
  {
    dword_140C4F3D0 = 28;
    v30 = -1073741670;
    goto LABEL_50;
  }
  v17[5] = 0LL;
  v17[8] = v16;
  *v17 = v13;
  *((_DWORD *)v17 + 2) = v9;
  v17[7] = v17 + 9;
  v17[3] = (unsigned __int64)(unsigned int)v9 << 12;
  *((_DWORD *)v17 + 34) = *(_DWORD *)(a3 + 24);
  *((_DWORD *)v17 + 35) = *(_DWORD *)(a3 + 16);
  *((_DWORD *)v17 + 36) = *(_DWORD *)(a4 + 4);
  *((_DWORD *)v17 + 32) = *a6;
  v17[9] = *(_QWORD *)a3 + *(unsigned int *)(a3 + 28);
  v17[11] = *(_QWORD *)(a3 + 32);
  v17[12] = *(_QWORD *)(a3 + 40);
  *((_DWORD *)v17 + 26) = *(unsigned __int16 *)(a3 + 50);
  *((_WORD *)v17 + 55) = *(_WORD *)(a3 + 52);
  *((_WORD *)v17 + 54) = *(_WORD *)(a3 + 54);
  *((_WORD *)v17 + 56) = *(_WORD *)(a3 + 56);
  *((_WORD *)v17 + 57) = *(_WORD *)(a3 + 58);
  *((_WORD *)v17 + 59) = *(_WORD *)(a3 + 60);
  *((_DWORD *)v17 + 33) = *(_DWORD *)(a3 + 64);
  if ( *(_DWORD *)(a3 + 68) || (v19 = 0, *(_DWORD *)(a3 + 28)) )
    v19 = 1;
  v18[122] = v19;
  *((_WORD *)v18 + 58) = *(_WORD *)(a4 + 18);
  *((_WORD *)v18 + 60) = *(_WORD *)a4;
  *((_DWORD *)v18 + 31) = *(_DWORD *)(a3 + 20);
  v13[2] = v13 + 1;
  v13[1] = v13 + 1;
  *v13 = v18;
  v13[14] = 1LL;
  v13[3] = 1LL;
  if ( (a5 & 1) == 0 )
    v13[6] = 1LL;
  *((_DWORD *)v13 + 22) = -1;
  v20 = *((_DWORD *)v13 + 14) ^ (a1 << 20);
  v13[13] = 0LL;
  v45 = 0;
  *((_DWORD *)v13 + 14) = *((_DWORD *)v13 + 14) ^ v20 & 0x7F00000 | 0xA2;
  v18[14] = v18[14] & 0x7F | (*(_DWORD *)(a3 + 104) != 0 ? 0x80 : 0);
  v13[16] = v13;
  *((_QWORD *)v18 + 4) = *(_QWORD *)a3;
  v13[17] = v16;
  if ( (a5 & 0x400000) != 0 )
  {
    *((_DWORD *)v13 + 43) = v9;
    v33 = *(_QWORD *)a6;
    if ( (unsigned __int64)*(unsigned int *)(a3 + 16) <= *(_QWORD *)a6 )
      v33 = *(unsigned int *)(a3 + 16);
    *((_DWORD *)v13 + 42) = v33 >> 9;
    LOWORD(v33) = *((_WORD *)v13 + 81) & 0xF | (16 * (v33 & 0x1FF));
    *((_WORD *)v13 + 81) = v33;
    v18[123] |= 8u;
    v18[122] = 1;
    *((_WORD *)v13 + 80) = v13[20] & 0xFFC1 | 0xE;
    v34 = sub_14026EA48((__int64)(v13 + 16), v33);
    v35 = sub_14026E548(7, v34);
    v39 = v38;
    do
    {
      v40 = v35;
      if ( v37 < *a6 )
        v40 = v36;
      v37 += 4096;
      *v16++ = v40;
      --v39;
    }
    while ( v39 );
    *((_QWORD *)v18 + 6) = v38;
    v16 -= v9;
    goto LABEL_21;
  }
  v21 = *(unsigned int *)(a3 + 24);
  if ( !(_DWORD)v21 )
  {
    dword_140C4F3D0 = 29;
LABEL_43:
    v30 = -1073741701;
    goto LABEL_50;
  }
  v22 = *(unsigned int *)(a3 + 12);
  v23 = v21 + v22 - 1;
  if ( v23 <= (unsigned int)v21 )
  {
    dword_140C4F3D0 = 30;
    goto LABEL_43;
  }
  v24 = (((v23 & -(int)v22 & 0xFFF) + 4095) >> 12)
      + ((unsigned int)((unsigned __int64)~(v22 - 1) >> 12) & (unsigned int)((unsigned __int64)(v22 + v21 - 1) >> 12));
  *((_DWORD *)v13 + 43) = v24;
  if ( (unsigned int)v24 > (unsigned int)v9 )
  {
    dword_140C4F3D0 = 31;
    goto LABEL_43;
  }
  LODWORD(v9) = v9 - v24;
  *((_DWORD *)v13 + 42) = *(_DWORD *)(a3 + 24) >> 9;
  v25 = *((_WORD *)v13 + 80);
  *((_WORD *)v13 + 81) = *((_WORD *)v13 + 81) & 0xF | (16 * (*(_WORD *)(a3 + 24) & 0x1FF));
  *((_WORD *)v13 + 80) = v25 & 0xFFC1 | 2;
  v27 = sub_14026EA48((__int64)(v13 + 16), v24);
  v29 = 0;
  v41 = 0;
  if ( !v26 )
    goto LABEL_20;
  do
  {
    if ( v28 < *(_DWORD *)(a3 + 24) )
    {
      *v16 = v27;
      goto LABEL_18;
    }
    if ( sub_140317A80((unsigned __int64)v16) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v32 = 1;
        goto LABEL_27;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v32 = 0;
        goto LABEL_27;
      }
    }
    v32 = 0;
LABEL_27:
    *v16 = 0LL;
    if ( v32 )
      sub_1402294F0((__int64)v16, 0LL);
    v28 = v45;
    v29 = v41;
    *((_DWORD *)v13 + 45) ^= (*((_DWORD *)v13 + 45) ^ (*((_DWORD *)v13 + 45) + 1)) & 0x3FFFFFFF;
LABEL_18:
    v26 = *((_DWORD *)v13 + 43);
    v28 += 4096;
    ++v29;
    v45 = v28;
    ++v16;
    v41 = v29;
  }
  while ( v29 < v26 );
  v10 = a5;
LABEL_20:
  v16 -= v26;
LABEL_21:
  v30 = sub_1406F4230(v10, v13, a2, v42, a3, v9);
  if ( v30 >= 0 )
  {
    sub_14026EA80(v43, 1);
    *a7 = v13;
    return 0LL;
  }
  if ( v16 )
  {
LABEL_50:
    ExFreePoolWithTag(v16, 0);
    if ( v18 )
      goto LABEL_51;
  }
  else
  {
LABEL_51:
    ExFreePoolWithTag(v18, 0);
  }
LABEL_52:
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)v30;
}
