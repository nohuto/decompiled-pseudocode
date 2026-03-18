/*
 * XREFs of ?vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z @ 0x1C0142680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // rbx
  int v2; // r13d
  int v3; // r10d
  char *v4; // rdx
  unsigned int v5; // r12d
  int v6; // r14d
  __int64 v7; // r15
  char v8; // r8
  char v9; // r9
  char v10; // al
  int v11; // r8d
  __int64 v12; // rdi
  char v13; // r9
  char v14; // si
  char v15; // cl
  int v16; // edx
  int v17; // eax
  int v18; // r10d
  __int64 v19; // rdx
  _BYTE *v20; // r9
  unsigned __int8 v21; // r11
  _BYTE *v22; // r8
  int v23; // ecx
  int v24; // eax
  __int64 v25; // r13
  __int64 v26; // r11
  _BYTE *v27; // rdx
  unsigned int v28; // ecx
  char v29; // r12
  __int64 v30; // rsi
  _BYTE *v31; // r11
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rdx
  int v34; // r10d
  int v35; // r11d
  int *v36; // r8
  char *v37; // r9
  char v38; // r13
  char v39; // al
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  int v42; // ecx
  unsigned __int8 v43; // al
  int v44; // ecx
  char v45; // r12
  unsigned __int64 v46; // rdx
  int v47; // ecx
  int v48; // r10d
  int v49; // r11d
  int *v50; // r8
  _BYTE *v51; // r9
  unsigned __int8 v52; // al
  int v53; // ecx
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rdx
  int v57; // ecx
  char v58; // [rsp+0h] [rbp-38h]
  int v59; // [rsp+4h] [rbp-34h]
  int v60; // [rsp+8h] [rbp-30h]
  char v61; // [rsp+Ch] [rbp-2Ch]
  int v62; // [rsp+14h] [rbp-24h]
  __int64 v63; // [rsp+28h] [rbp-10h]
  char v65; // [rsp+88h] [rbp+50h]
  char v66; // [rsp+90h] [rbp+58h]
  char v67; // [rsp+91h] [rbp+59h]
  char v68; // [rsp+92h] [rbp+5Ah]
  char v69; // [rsp+93h] [rbp+5Bh]
  unsigned int v70; // [rsp+98h] [rbp+60h]

  v1 = a1;
  v62 = *((_DWORD *)a1 + 13);
  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 12);
  v4 = *(char **)(*(_QWORD *)a1 + 16LL);
  v5 = v3 & 7;
  v6 = *((_DWORD *)a1 + 11);
  v7 = *((int *)a1 + 10);
  v70 = v5;
  v8 = *v4;
  v9 = v4[4];
  LOBYTE(v4) = 16 * *v4;
  v60 = v2;
  v66 = v8 | (unsigned __int8)v4;
  v67 = v9 | (unsigned __int8)v4;
  v10 = v8 | (16 * v9);
  v11 = *((_DWORD *)a1 + 14);
  v68 = v10;
  v12 = v11 & 7;
  v69 = v9 | (16 * v9);
  v13 = v11 + v2;
  v59 = v11 + v2;
  v14 = (v3 & 7) - v12 + 8;
  if ( v5 >= (unsigned int)v12 )
    v14 = v5 - v12;
  v15 = 8 - v14;
  v16 = (v11 + v2) >> 3;
  v61 = v14;
  v58 = 8 - v14;
  if ( v16 == v11 >> 3 )
  {
    v21 = 0;
    v65 = 0;
  }
  else
  {
    v17 = v3 + (-(int)v12 & 7);
    v18 = *((_DWORD *)v1 + 8);
    LODWORD(v19) = v16 - ((v11 + 7) >> 3);
    v20 = (_BYTE *)(*((_QWORD *)v1 + 2) + (((__int64)(v11 + 7) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v21 = 1;
    v22 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)v17 >> 3));
    v23 = v6 - 4 * v19;
    v65 = 1;
    v24 = v7 - v19;
    if ( v18 )
    {
      if ( v14 )
      {
        v19 = (int)v19;
        v29 = v14;
        v30 = v24;
        v63 = (int)v19;
        do
        {
          v31 = &v22[v19];
          --v18;
          v32 = *v22 << v29;
          if ( v22 != &v22[v19] )
          {
            do
            {
              v33 = v32 | ((unsigned __int64)(unsigned __int8)*++v22 >> v58);
              *v20 = *(&v66 + (v33 >> 6));
              v20[1] = *(&v66 + ((v33 >> 4) & 3));
              v20[2] = *(&v66 + ((v33 >> 2) & 3));
              v20[3] = *(&v66 + (v33 & 3));
              v20 += 4;
              v32 = *v22 << v29;
            }
            while ( v22 != v31 );
            v19 = v63;
          }
          v20 += v23;
          v22 += v30;
        }
        while ( v18 );
        v1 = a1;
        v14 = v61;
      }
      else
      {
        v25 = (int)v19;
        v26 = v23;
        do
        {
          --v18;
          v27 = &v22[v25];
          while ( v22 != v27 )
          {
            v28 = (unsigned __int8)*v22;
            *v20 = *(&v66 + ((unsigned __int64)(unsigned __int8)*v22 >> 6));
            v20[1] = *(&v66 + ((v28 >> 4) & 3));
            v20[2] = *(&v66 + ((v28 >> 2) & 3));
            v20[3] = *(&v66 + (v28 & 3));
            v20 += 4;
            ++v22;
          }
          v20 += v26;
          v22 += v24;
        }
        while ( v18 );
      }
      v21 = 1;
      v5 = v70;
      v2 = v60;
    }
    v15 = v58;
    v13 = v59;
  }
  if ( (unsigned int)v12 | v21 ^ 1 )
  {
    v34 = dword_1C02F9D58[v12];
    if ( !v21 )
      v34 &= dword_1C02F9CE0[v13 & 7];
    v35 = *((_DWORD *)v1 + 8);
    v36 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)*((int *)v1 + 14) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v37 = (char *)(*((_QWORD *)v1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    if ( !v35 )
      goto LABEL_36;
    if ( v5 < (unsigned int)v12 )
    {
      v45 = v15;
      do
      {
        v46 = (unsigned __int64)(unsigned __int8)*v37 >> v45;
        v37 += v7;
        v47 = ~v34 & *v36;
        LOBYTE(v70) = *(&v66 + (v46 >> 6));
        BYTE1(v70) = *(&v66 + ((v46 >> 4) & 3));
        BYTE2(v70) = *(&v66 + ((v46 >> 2) & 3));
        HIBYTE(v70) = *(&v66 + (v46 & 3));
        v70 &= v34;
        *v36 = v70 | v47;
        v36 = (int *)((char *)v36 + v6);
        --v35;
      }
      while ( v35 );
    }
    else
    {
      if ( (int)(v5 + v2) <= 8 )
      {
        do
        {
          v43 = *v37 << v14;
          v37 += v7;
          LOBYTE(v70) = *(&v66 + ((unsigned __int64)v43 >> 6));
          BYTE1(v70) = *(&v66 + (((unsigned __int64)v43 >> 4) & 3));
          BYTE2(v70) = *(&v66 + (((unsigned __int64)v43 >> 2) & 3));
          v44 = *v36;
          HIBYTE(v70) = *(&v66 + (v43 & 3));
          v70 &= v34;
          *v36 = v70 | ~v34 & v44;
          v36 = (int *)((char *)v36 + v6);
          --v35;
        }
        while ( v35 );
        goto LABEL_36;
      }
      v38 = v15;
      do
      {
        v39 = *v37;
        v40 = (unsigned __int8)v37[1];
        v37 += v7;
        v41 = (unsigned __int8)(v39 << v14) | (v40 >> v38);
        v42 = ~v34 & *v36;
        LOBYTE(v70) = *(&v66 + (v41 >> 6));
        BYTE1(v70) = *(&v66 + ((v41 >> 4) & 3));
        BYTE2(v70) = *(&v66 + ((v41 >> 2) & 3));
        HIBYTE(v70) = *(&v66 + (v41 & 3));
        v70 &= v34;
        *v36 = v70 | v42;
        v36 = (int *)((char *)v36 + v6);
        --v35;
      }
      while ( v35 );
      v14 = v61;
    }
    v1 = a1;
LABEL_36:
    v21 = v65;
  }
  if ( (v59 & 7) != 0 )
  {
    if ( v21 )
    {
      v48 = *((_DWORD *)v1 + 8);
      v49 = dword_1C02F9CE0[v59 & 7];
      v50 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)v59 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
      v51 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((*((int *)v1 + 13) - 1LL) >> 3));
      if ( v48 )
      {
        if ( (((_BYTE)v62 - 1) & 7u) < (((_BYTE)v59 - 1) & 7u) )
        {
          do
          {
            v54 = (unsigned __int8)(*(v51 - 1) << v14);
            v55 = (unsigned __int8)*v51;
            v51 += v7;
            v56 = (v55 >> v58) | v54;
            v57 = ~v49 & *v50;
            LOBYTE(v70) = *(&v66 + (v56 >> 6));
            BYTE1(v70) = *(&v66 + ((v56 >> 4) & 3));
            BYTE2(v70) = *(&v66 + ((v56 >> 2) & 3));
            HIBYTE(v70) = *(&v66 + (v56 & 3));
            v70 &= v49;
            *v50 = v70 | v57;
            v50 = (int *)((char *)v50 + v6);
            --v48;
          }
          while ( v48 );
        }
        else
        {
          do
          {
            v52 = *v51 << v14;
            v51 += v7;
            LOBYTE(v70) = *(&v66 + ((unsigned __int64)v52 >> 6));
            BYTE1(v70) = *(&v66 + (((unsigned __int64)v52 >> 4) & 3));
            BYTE2(v70) = *(&v66 + (((unsigned __int64)v52 >> 2) & 3));
            v53 = *v50;
            HIBYTE(v70) = *(&v66 + (v52 & 3));
            v70 &= v49;
            *v50 = v70 | ~v49 & v53;
            v50 = (int *)((char *)v50 + v6);
            --v48;
          }
          while ( v48 );
        }
      }
    }
  }
}
