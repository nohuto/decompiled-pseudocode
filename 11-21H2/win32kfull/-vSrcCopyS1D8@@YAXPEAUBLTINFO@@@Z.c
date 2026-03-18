/*
 * XREFs of ?vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0101AD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D8(struct BLTINFO *a1)
{
  __int64 v1; // rax
  struct BLTINFO *v2; // r10
  BOOL v3; // r12d
  __int64 v4; // rdx
  char *v5; // rcx
  int v6; // r8d
  int v7; // r9d
  char v8; // al
  signed int v9; // ebx
  int v10; // esi
  int v11; // r14d
  int v12; // eax
  unsigned int v13; // r11d
  int v14; // ecx
  int v15; // r8d
  unsigned int v16; // r15d
  unsigned __int8 v17; // di
  int v18; // eax
  int v19; // edx
  int v20; // r11d
  __int64 v21; // rdx
  _DWORD *v22; // r9
  unsigned __int8 v23; // r13
  _BYTE *v24; // r8
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // r12
  _BYTE *v29; // rdx
  unsigned int v30; // ecx
  char v31; // r10
  __int64 v32; // r14
  _BYTE *v33; // r13
  unsigned __int8 v34; // al
  unsigned __int64 v35; // rax
  _BYTE *v36; // rdx
  int v37; // r9d
  _BYTE *v38; // r8
  unsigned __int8 v39; // al
  char v40; // r10
  unsigned __int8 v41; // r11
  _BYTE *j; // rcx
  unsigned __int64 v43; // rax
  unsigned __int8 v44; // r11
  _BYTE *v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // r15
  char v48; // si
  unsigned __int8 v49; // r11
  _BYTE *i; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  int v53; // r11d
  unsigned __int64 v54; // rdx
  _BYTE *v55; // r8
  unsigned int v56; // ecx
  unsigned int v57; // eax
  __int64 v58; // r12
  unsigned __int8 v59; // r9
  _BYTE *v60; // rcx
  unsigned __int64 v61; // rax
  _BYTE *v62; // rcx
  unsigned __int8 v63; // r9
  unsigned __int64 v64; // rax
  char v65; // [rsp+8h] [rbp-69h]
  _BYTE v66[4]; // [rsp+Ch] [rbp-65h]
  int v67; // [rsp+10h] [rbp-61h]
  __int64 v68; // [rsp+18h] [rbp-59h]
  int v69; // [rsp+20h] [rbp-51h]
  int v70; // [rsp+24h] [rbp-4Dh]
  int v71; // [rsp+28h] [rbp-49h]
  unsigned int v72; // [rsp+2Ch] [rbp-45h]
  int v73; // [rsp+38h] [rbp-39h]
  __int64 v74; // [rsp+40h] [rbp-31h]
  struct BLTINFO *v75; // [rsp+48h] [rbp-29h]
  _DWORD v76[2]; // [rsp+58h] [rbp-19h]
  int v77; // [rsp+60h] [rbp-11h]
  int v78; // [rsp+64h] [rbp-Dh]
  int v79; // [rsp+68h] [rbp-9h]
  int v80; // [rsp+6Ch] [rbp-5h]
  int v81; // [rsp+70h] [rbp-1h]
  int v82; // [rsp+74h] [rbp+3h]
  int v83; // [rsp+78h] [rbp+7h]
  int v84; // [rsp+7Ch] [rbp+Bh]
  int v85; // [rsp+80h] [rbp+Fh]
  int v86; // [rsp+84h] [rbp+13h]
  int v87; // [rsp+88h] [rbp+17h]
  int v88; // [rsp+8Ch] [rbp+1Bh]
  int v89; // [rsp+90h] [rbp+1Fh]
  int v90; // [rsp+94h] [rbp+23h]

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v75 = a1;
  v3 = 1;
  v70 = 1;
  v4 = 0LL;
  v5 = *(char **)(v1 + 16);
  v6 = *(_DWORD *)v5;
  v7 = *((_DWORD *)v5 + 1);
  do
  {
    v8 = *v5;
    v5 += 4;
    v66[v4++] = v8;
  }
  while ( v4 < 2 );
  v9 = *((_DWORD *)v2 + 7);
  v10 = *((_DWORD *)v2 + 11);
  v11 = *((_DWORD *)v2 + 10);
  v67 = v10;
  v12 = *((_DWORD *)v2 + 12);
  v76[0] = ((v6 | (v6 << 8)) << 16) | v6 | (v6 << 8);
  v13 = v12 & 7;
  LODWORD(v68) = v12;
  v83 = v7 | (v76[0] << 8);
  v72 = v13;
  v79 = v6 | (v83 << 8);
  v71 = v11;
  v85 = v7 | (v79 << 8);
  v80 = v6 | (v85 << 8);
  v77 = v6 | (v80 << 8);
  v84 = v7 | (v77 << 8);
  v87 = v7 | (v84 << 8);
  v89 = v7 | (v87 << 8);
  v90 = v7 | (v89 << 8);
  v82 = v6 | (v90 << 8);
  v86 = v7 | (v82 << 8);
  v88 = v7 | (v86 << 8);
  v81 = v6 | (v88 << 8);
  v78 = v6 | (v81 << 8);
  v14 = v6 | (v78 << 8);
  v15 = *((_DWORD *)v2 + 14);
  v76[1] = v14;
  v16 = v15 & 7;
  v17 = v13 - v16 + 8;
  v18 = 8;
  if ( v13 >= v16 )
    v17 = v13 - v16;
  LOBYTE(v18) = 8 - v17;
  v69 = v18;
  v73 = v15 + v9;
  v19 = (v15 + v9) >> 3;
  if ( v19 == v15 >> 3 )
  {
    v23 = 0;
    v65 = 0;
    v3 = (int)(v9 + v13) > 8;
  }
  else
  {
    v20 = *((_DWORD *)v2 + 8);
    v9 = 8 - v16;
    LODWORD(v21) = v19 - ((v15 + 7) >> 3);
    v65 = 1;
    v22 = (_DWORD *)(*((_QWORD *)v2 + 2) + ((v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
    v23 = 1;
    v24 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)(int)(v68 + ((8 - (_BYTE)v16) & 7)) >> 3));
    v25 = v10 - 8 * v21;
    LODWORD(v26) = v11 - v21;
    if ( v20 )
    {
      v21 = (int)v21;
      v26 = (int)v26;
      v74 = (int)v21;
      v68 = (int)v26;
      v27 = v25;
      if ( v17 )
      {
        v31 = v69;
        v32 = (int)v26;
        do
        {
          v33 = &v24[v21];
          --v20;
          v34 = *v24 << v17;
          if ( v24 != &v24[v21] )
          {
            do
            {
              v35 = v34 | ((unsigned __int64)(unsigned __int8)*++v24 >> v31);
              *v22 = v76[v35 >> 4];
              v22[1] = v76[v35 & 0xF];
              v22 += 2;
              v34 = *v24 << v17;
            }
            while ( v24 != v33 );
            v32 = v68;
            v21 = v74;
          }
          v22 = (_DWORD *)((char *)v22 + v25);
          v24 += v32;
        }
        while ( v20 );
        v2 = v75;
        v10 = v67;
        v11 = v71;
      }
      else
      {
        v28 = (int)v21;
        do
        {
          --v20;
          v29 = &v24[v28];
          if ( v24 != &v24[v28] )
          {
            do
            {
              v30 = (unsigned __int8)*v24++;
              *v22 = v76[(unsigned __int64)v30 >> 4];
              v22[1] = v76[v30 & 0xF];
              v22 += 2;
            }
            while ( v24 != v29 );
            v26 = v68;
          }
          v22 = (_DWORD *)((char *)v22 + v27);
          v24 += v26;
        }
        while ( v20 );
      }
      v23 = 1;
      v3 = v70;
    }
    v13 = v72;
  }
  if ( v16 | v23 ^ 1 )
  {
    v36 = (_BYTE *)(*((_QWORD *)v2 + 2) + *((int *)v2 + 14));
    v37 = *((_DWORD *)v2 + 8);
    v38 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    if ( v37 )
    {
      if ( v13 <= v16 )
      {
        v47 = v10;
        v48 = v72;
        do
        {
          --v37;
          v49 = *v38 << v48;
          for ( i = v36; i != &v36[v9]; ++i )
          {
            v51 = v49;
            v49 *= 2;
            *i = v66[v51 >> 7];
          }
          v36 += v47;
          v38 += v11;
        }
        while ( v37 );
      }
      else
      {
        v39 = v17;
        if ( v3 )
        {
          v40 = v69;
          do
          {
            --v37;
            v41 = ((unsigned __int8)(*v38 << v17) | (unsigned __int8)(v38[1] >> v40)) << v16;
            for ( j = v36; j != &v36[v9]; ++j )
            {
              v43 = v41;
              v41 *= 2;
              *j = v66[v43 >> 7];
            }
            v36 += v10;
            v38 += v11;
          }
          while ( v37 );
          v2 = v75;
          v11 = v71;
        }
        else
        {
          LODWORD(v68) = v17;
          do
          {
            --v37;
            v44 = *v38 << v39 << v16;
            v45 = v36;
            if ( v36 != &v36[v9] )
            {
              do
              {
                v46 = v44;
                v44 *= 2;
                *v45++ = v66[v46 >> 7];
              }
              while ( v45 != &v36[v9] );
              v39 = v68;
            }
            v36 += v10;
            v38 += v11;
          }
          while ( v37 );
        }
      }
      v10 = v67;
      v23 = v65;
    }
  }
  if ( (v73 & 7) != 0 )
  {
    if ( v23 )
    {
      v52 = *((int *)v2 + 13);
      v53 = *((_DWORD *)v2 + 8);
      v54 = *((_QWORD *)v2 + 2) + (v73 & 0xFFFFFFFFFFFFFFF8uLL);
      v55 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((v52 - 1) >> 3));
      v56 = ((_BYTE)v73 - 1) & 7;
      v57 = ((_BYTE)v52 - 1) & 7;
      if ( v53 )
      {
        v58 = v56 + 1;
        if ( v57 < v56 )
        {
          do
          {
            --v53;
            v62 = (_BYTE *)v54;
            v63 = (*v55 >> v69) | (*(v55 - 1) << v17);
            if ( v54 != v58 + v54 )
            {
              do
              {
                v64 = v63;
                v63 *= 2;
                *v62++ = v66[v64 >> 7];
              }
              while ( v62 != (_BYTE *)(v58 + v54) );
            }
            v54 += v10;
            v55 += v11;
          }
          while ( v53 );
        }
        else
        {
          do
          {
            --v53;
            v59 = *v55 << v17;
            v60 = (_BYTE *)v54;
            if ( v54 != v58 + v54 )
            {
              do
              {
                v61 = v59;
                v59 *= 2;
                *v60++ = v66[v61 >> 7];
              }
              while ( v60 != (_BYTE *)(v58 + v54) );
            }
            v54 += v10;
            v55 += v11;
          }
          while ( v53 );
        }
      }
    }
  }
}
