/*
 * XREFs of vSrcOpaqCopyS1D4 @ 0x1C028E3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char vSrcOpaqCopyS1D4(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, char a9, ...)
{
  char v9; // r10
  int v11; // r14d
  __int64 v13; // rsi
  int v14; // edx
  int v15; // ebx
  __int64 v16; // r12
  int v17; // r10d
  unsigned int v18; // r11d
  unsigned __int8 *v19; // r8
  int v20; // r9d
  unsigned __int64 v21; // rax
  int v22; // edi
  int v23; // r15d
  _BYTE *v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rdi
  unsigned __int8 *v27; // r10
  unsigned int v28; // ecx
  _BYTE *v29; // r8
  int v30; // r11d
  __int64 v31; // r10
  char v32; // si
  _BYTE *v33; // r10
  int v34; // ebx
  _BYTE *v35; // r15
  unsigned __int8 v36; // r9
  _BYTE *v37; // rdi
  int v38; // ecx
  unsigned __int64 v39; // rdx
  _BYTE *v40; // r10
  char v41; // bl
  __int64 v42; // r15
  _BYTE *v43; // rsi
  unsigned __int8 v44; // r9
  int v45; // edi
  unsigned __int64 v46; // rcx
  unsigned __int8 *v47; // r9
  _BYTE *v48; // r8
  int v49; // r14d
  unsigned __int8 *v50; // rbx
  unsigned __int8 v51; // r10
  unsigned __int64 v52; // rcx
  int v53; // edx
  unsigned __int8 *v55; // [rsp+0h] [rbp-10h]
  __int64 v56; // [rsp+50h] [rbp+40h]
  int v58; // [rsp+88h] [rbp+78h]
  int v59; // [rsp+90h] [rbp+80h]
  __int64 v60; // [rsp+98h] [rbp+88h]
  va_list va; // [rsp+98h] [rbp+88h]
  va_list va1; // [rsp+A0h] [rbp+90h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v60 = va_arg(va1, _QWORD);
  v9 = v60;
  v11 = a7;
  LOBYTE(v60) = v60 | (16 * v60);
  BYTE1(v60) = a9 | (16 * v60);
  BYTE3(v60) = a9 | (16 * BYTE1(v60));
  v13 = a2;
  v14 = a5;
  BYTE2(v60) = v9 | (16 * BYTE3(v60));
  v15 = v13 & 7;
  v56 = a3;
  v16 = a3 * (__int64)a8;
  v17 = a6 - a5 + v13;
  v59 = v17;
  v18 = ((_BYTE)a6 - (_BYTE)a5 + (_BYTE)v13) & 7;
  v19 = (unsigned __int8 *)(a1 + ((__int64)((int)v13 + 7) >> 3));
  v58 = 8 - v15;
  v55 = &v19[v16];
  v20 = v15 != 0 ? 8 - v15 : 0;
  LOBYTE(v21) = v20 + v18;
  v22 = a6 - a5 - (v20 + v18);
  if ( v22 > 0 )
  {
    v23 = a3 - (v22 >> 3);
    v24 = (_BYTE *)(a4 + ((__int64)(v20 + a5) >> 1));
    v25 = (__int64)v22 >> 3;
    v26 = a7 - (v22 >> 1);
    do
    {
      v27 = &v19[v25];
      do
      {
        v28 = *v19++;
        *v24 = va[(unsigned __int64)v28 >> 6];
        v24[1] = va[(v28 >> 4) & 3];
        v24[2] = va[(v28 >> 2) & 3];
        LOBYTE(v21) = va[v28 & 3];
        v24[3] = v21;
        v24 += 4;
      }
      while ( v19 != v27 );
      v24 += v26;
      v19 += v23;
    }
    while ( v19 != v55 );
    v14 = a5;
    v17 = v59;
  }
  if ( (v13 & 7) != 0 )
  {
    LOBYTE(v21) = v13 ^ v17;
    v29 = (_BYTE *)(a4 + ((__int64)v14 >> 1));
    if ( (((unsigned int)v13 ^ v17) & 0xFFFFFFF8) == 0 )
    {
      v30 = v18 - v15;
      if ( v30 > 0 )
      {
        v31 = v13;
        v32 = v15 & 0xFE;
        v33 = (_BYTE *)(a1 + (v31 >> 3));
        v34 = v15 & 1;
        v35 = &v33[v16];
        do
        {
          v36 = *v33 << v32;
          v37 = v29;
          v38 = v30;
          if ( v34 )
          {
            v37 = v29 + 1;
            v38 = v30 - 1;
            *v29 ^= (*v29 ^ va[(unsigned __int64)v36 >> 6]) & 0xF;
            v36 *= 4;
          }
          if ( v38 >= 2 )
          {
            v39 = (unsigned __int64)(unsigned int)v38 >> 1;
            v38 -= 2 * ((unsigned int)v38 >> 1);
            do
            {
              v21 = (unsigned __int64)v36 >> 6;
              v36 *= 4;
              LOBYTE(v21) = va[v21];
              *v37++ = v21;
              --v39;
            }
            while ( v39 );
          }
          if ( v38 )
          {
            v21 = (unsigned __int64)v36 >> 6;
            *v37 = va[v21] ^ (*v37 ^ va[v21]) & 0xF;
          }
          v33 += v56;
          v29 += a7;
        }
        while ( v33 != v35 );
      }
      return v21;
    }
    v40 = (_BYTE *)(a1 + (v13 >> 3));
    LODWORD(v21) = (9 - v15) >> 1;
    v41 = v13 & 6;
    v42 = a7 - (int)v21;
    v43 = &v40[v16];
    do
    {
      v44 = *v40 << v41;
      v45 = v58;
      if ( (v58 & 1) != 0 )
      {
        v46 = (unsigned __int64)v44 >> 6;
        v44 *= 4;
        *v29 ^= (*v29 ^ va[v46]) & 0xF;
        ++v29;
        v45 = v58 - 1;
      }
      for ( ; v45; v45 -= 2 )
      {
        v21 = (unsigned __int64)v44 >> 6;
        v44 *= 4;
        LOBYTE(v21) = va[v21];
        *v29++ = v21;
      }
      v40 += v56;
      v29 += v42;
    }
    while ( v40 != v43 );
    v11 = a7;
  }
  if ( v18 )
  {
    v47 = (unsigned __int8 *)(a1 + ((__int64)v59 >> 3));
    v48 = (_BYTE *)(a4 + ((__int64)(int)(a6 - v18) >> 1));
    v49 = v11 - ((v18 + 1) >> 1);
    v50 = &v47[v16];
    do
    {
      v51 = *v47;
      if ( v18 < 2 )
        goto LABEL_33;
      v52 = (unsigned __int64)v18 >> 1;
      v53 = v18 - 2 * v52;
      do
      {
        v21 = (unsigned __int64)v51 >> 6;
        v51 *= 4;
        LOBYTE(v21) = va[v21];
        *v48++ = v21;
        --v52;
      }
      while ( v52 );
      if ( v53 )
      {
LABEL_33:
        v21 = (unsigned __int64)v51 >> 6;
        *v48 = va[v21] ^ (*v48 ^ va[v21]) & 0xF;
        ++v48;
      }
      v47 += v56;
      v48 += v49;
    }
    while ( v47 != v50 );
  }
  return v21;
}
