/*
 * XREFs of ?vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C96E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D16(struct BLTINFO *a1)
{
  int v1; // edi
  struct BLTINFO *v2; // r9
  unsigned int v3; // r11d
  __int16 *v4; // r10
  unsigned int v5; // r8d
  __int64 i; // rcx
  __int16 v7; // ax
  int v8; // r8d
  int v9; // r12d
  unsigned int v10; // r14d
  __int64 v11; // r13
  char v12; // al
  unsigned int v13; // esi
  int v14; // ecx
  int v15; // ebx
  int v16; // eax
  int v17; // r11d
  __int64 v18; // rdx
  _DWORD *v19; // r10
  int v20; // ecx
  _BYTE *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r14
  _BYTE *v25; // rdx
  unsigned int v26; // ecx
  char v27; // r12
  char v28; // bl
  __int64 v29; // r14
  _BYTE *v30; // rdi
  unsigned __int8 v31; // al
  unsigned __int64 v32; // rdx
  BOOL v33; // ecx
  unsigned __int8 v34; // dl
  int v35; // r10d
  _BYTE *v36; // r8
  _WORD *v37; // rdx
  int v38; // eax
  __int64 v39; // r15
  char v40; // bl
  char v41; // r12
  __int64 v42; // r9
  unsigned __int8 v43; // r11
  _WORD *k; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  _WORD *v47; // rdi
  unsigned __int8 v48; // r11
  _WORD *v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // r12
  unsigned __int8 v52; // r11
  _WORD *j; // rcx
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  _WORD *v56; // rdx
  _BYTE *v57; // r8
  int v58; // r10d
  unsigned int v59; // ecx
  unsigned int v60; // eax
  __int64 v61; // r14
  unsigned __int8 v62; // r9
  _WORD *n; // rcx
  unsigned __int64 v64; // rax
  _WORD *v65; // rcx
  unsigned __int8 m; // r9
  unsigned __int64 v67; // rax
  char v68; // [rsp+0h] [rbp-60h]
  int v69; // [rsp+4h] [rbp-5Ch]
  _WORD v70[2]; // [rsp+8h] [rbp-58h]
  int v71; // [rsp+Ch] [rbp-54h]
  int v72; // [rsp+10h] [rbp-50h]
  unsigned int v73; // [rsp+14h] [rbp-4Ch]
  int v74; // [rsp+18h] [rbp-48h]
  int v75; // [rsp+1Ch] [rbp-44h]
  __int64 v76; // [rsp+20h] [rbp-40h]
  __int64 v77; // [rsp+28h] [rbp-38h]
  __int64 v78; // [rsp+30h] [rbp-30h]
  struct BLTINFO *v79; // [rsp+38h] [rbp-28h]
  _DWORD v80[4]; // [rsp+40h] [rbp-20h]

  v1 = *((_DWORD *)a1 + 14);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 7);
  v79 = a1;
  v71 = 1;
  v75 = v3 + v1;
  v4 = *(__int16 **)(*(_QWORD *)a1 + 16LL);
  v5 = (*((_DWORD *)v4 + 1) << 16) | *((_DWORD *)v4 + 1);
  v80[0] = (*(_DWORD *)v4 << 16) | *(_DWORD *)v4;
  v80[3] = v5;
  v80[1] = HIWORD(v80[0]) | (v5 << 16);
  v80[2] = (v80[0] << 16) | HIWORD(v5);
  for ( i = 0LL; i < 2; ++i )
  {
    v7 = *v4;
    v4 += 2;
    v70[i] = v7;
  }
  v8 = *((_DWORD *)v2 + 12);
  v9 = *((_DWORD *)v2 + 10);
  v10 = v8 & 7;
  v11 = *((int *)v2 + 11);
  v12 = *((_BYTE *)v2 + 48) & 7;
  v73 = v10;
  v13 = v1 & 7;
  v69 = v9;
  v14 = (unsigned __int8)(v12 - v13);
  v15 = (unsigned __int8)(v14 + 8);
  v16 = 8;
  if ( v10 >= v13 )
    v15 = v14;
  LOBYTE(v16) = 8 - v15;
  v74 = v15;
  v72 = v16;
  if ( v75 >> 3 == v1 >> 3 )
  {
    v34 = 0;
    v68 = 0;
    v33 = (int)(v3 + v10) > 8;
  }
  else
  {
    v17 = *((_DWORD *)v2 + 8);
    v68 = 1;
    LODWORD(v18) = (v75 >> 3) - ((v1 + 7) >> 3);
    v19 = (_DWORD *)(*((_QWORD *)v2 + 2) + (int)(2 * ((v1 + 7) & 0xFFFFFFF8)));
    v20 = v11 - 16 * v18;
    v21 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)(v8 + ((8 - (unsigned __int8)v13) & 7)) >> 3));
    LODWORD(v22) = v9 - v18;
    if ( v17 )
    {
      v18 = (int)v18;
      v22 = (int)v22;
      v78 = (int)v18;
      v76 = (int)v22;
      v23 = v20;
      if ( (_BYTE)v15 )
      {
        v27 = v15;
        v28 = v72;
        v29 = (int)v22;
        do
        {
          v30 = &v21[v18];
          --v17;
          v31 = *v21 << v27;
          if ( v21 != &v21[v18] )
          {
            do
            {
              v32 = v31 | ((unsigned __int64)(unsigned __int8)*++v21 >> v28);
              *v19 = v80[v32 >> 6];
              v19[1] = v80[(v32 >> 4) & 3];
              v19[2] = v80[(v32 >> 2) & 3];
              v19[3] = v80[v32 & 3];
              v19 += 4;
              v31 = *v21 << v27;
            }
            while ( v21 != v30 );
            v29 = v76;
            v18 = v78;
          }
          v19 = (_DWORD *)((char *)v19 + v20);
          v21 += v29;
        }
        while ( v17 );
        v2 = v79;
        LOBYTE(v15) = v74;
        v9 = v69;
      }
      else
      {
        v24 = (int)v18;
        do
        {
          --v17;
          v25 = &v21[v24];
          if ( v21 != &v21[v24] )
          {
            do
            {
              v26 = (unsigned __int8)*v21++;
              *v19 = v80[(unsigned __int64)v26 >> 6];
              v19[1] = v80[(v26 >> 4) & 3];
              v19[2] = v80[(v26 >> 2) & 3];
              v19[3] = v80[v26 & 3];
              v19 += 4;
            }
            while ( v21 != v25 );
            v22 = v76;
          }
          v19 = (_DWORD *)((char *)v19 + v23);
          v21 += v22;
        }
        while ( v17 );
      }
      v10 = v73;
    }
    v33 = v71;
    v3 = 8 - v13;
    v34 = 1;
  }
  if ( v13 | v34 ^ 1 )
  {
    v35 = *((_DWORD *)v2 + 8);
    v36 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    v37 = (_WORD *)(*((_QWORD *)v2 + 2) + 2 * *((_DWORD *)v2 + 14));
    if ( v35 )
    {
      if ( v10 <= v13 )
      {
        v51 = (int)(2 * v3);
        do
        {
          --v35;
          v52 = *v36 << v10;
          for ( j = v37; j != (_WORD *)((char *)v37 + v51); ++j )
          {
            v54 = v52;
            v52 *= 2;
            *j = v70[v54 >> 7];
          }
          v37 = (_WORD *)((char *)v37 + v11);
          v36 += v69;
        }
        while ( v35 );
      }
      else
      {
        v38 = (unsigned __int8)v15;
        v39 = v9;
        if ( v33 )
        {
          v40 = v72;
          v71 = v38;
          v41 = v38;
          v42 = (int)(2 * v3);
          do
          {
            --v35;
            v43 = ((unsigned __int8)(*v36 << v41) | (unsigned __int8)(v36[1] >> v40)) << v13;
            for ( k = v37; k != (_WORD *)((char *)v37 + v42); ++k )
            {
              v45 = v43;
              v43 *= 2;
              *k = v70[v45 >> 7];
            }
            v37 = (_WORD *)((char *)v37 + v11);
            v36 += v39;
          }
          while ( v35 );
          v2 = v79;
          LOBYTE(v15) = v74;
        }
        else
        {
          v71 = (unsigned __int8)v15;
          v46 = (int)(2 * v3);
          v77 = v46;
          do
          {
            v47 = (_WORD *)((char *)v37 + v46);
            --v35;
            v48 = *v36 << v15 << v13;
            v49 = v37;
            if ( v37 != (_WORD *)((char *)v37 + v46) )
            {
              do
              {
                v50 = v48;
                v48 *= 2;
                *v49++ = v70[v50 >> 7];
              }
              while ( v49 != v47 );
              v46 = v77;
            }
            v37 = (_WORD *)((char *)v37 + v11);
            v36 += v9;
          }
          while ( v35 );
        }
      }
      v9 = v69;
    }
    v34 = v68;
  }
  if ( (v75 & 7) != 0 )
  {
    if ( v34 )
    {
      v55 = *((int *)v2 + 13);
      v56 = (_WORD *)(*((_QWORD *)v2 + 2) + (int)(2 * (v75 & 0xFFFFFFF8)));
      v57 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((v55 - 1) >> 3));
      v58 = *((_DWORD *)v2 + 8);
      v59 = ((_BYTE)v55 - 1) & 7;
      v60 = ((_BYTE)v75 - 1) & 7;
      if ( v58 )
      {
        v61 = 2 * v60 + 2;
        if ( v59 < v60 )
        {
          do
          {
            --v58;
            v65 = v56;
            for ( m = (*v57 >> v72) | (*(v57 - 1) << v15); v65 != (_WORD *)((char *)v56 + v61); ++v65 )
            {
              v67 = m;
              m *= 2;
              *v65 = v70[v67 >> 7];
            }
            v56 = (_WORD *)((char *)v56 + v11);
            v57 += v9;
          }
          while ( v58 );
        }
        else
        {
          do
          {
            --v58;
            v62 = *v57 << v15;
            for ( n = v56; n != (_WORD *)((char *)v56 + v61); ++n )
            {
              v64 = v62;
              v62 *= 2;
              *n = v70[v64 >> 7];
            }
            v56 = (_WORD *)((char *)v56 + v11);
            v57 += v9;
          }
          while ( v58 );
        }
      }
    }
  }
}
