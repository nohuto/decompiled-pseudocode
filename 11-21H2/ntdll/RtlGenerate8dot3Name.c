/*
 * XREFs of RtlGenerate8dot3Name @ 0x180108E60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     GetNextWchar @ 0x180108D04 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x180108DF0 (RtlComputeLfnChecksum.c)
 */

__int64 __fastcall RtlGenerate8dot3Name(unsigned __int16 *a1, char a2, __int64 a3, __int64 a4)
{
  bool v7; // cl
  __int64 v8; // r8
  unsigned int v9; // r11d
  char v10; // r12
  unsigned int v11; // esi
  char v12; // r8
  __int16 NextWchar; // ax
  unsigned int i; // edi
  bool v15; // zf
  int v16; // eax
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // r10
  unsigned int v20; // r8d
  __int16 v21; // dx
  __int64 v22; // rax
  __int16 v23; // dx
  unsigned int v24; // edi
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // cx
  int v27; // eax
  unsigned __int16 v28; // ax
  unsigned int v29; // r9d
  unsigned __int16 v30; // ax
  int v31; // r10d
  unsigned __int16 v32; // r11
  __int64 v33; // r8
  _WORD *v34; // r9
  __int16 v35; // ax
  unsigned __int16 v36; // cx
  unsigned int v37; // edi
  char v38; // r13
  __int64 v39; // rax
  char v40; // cl
  __int16 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // r15
  _WORD *v44; // r14
  unsigned __int16 v45; // ax
  unsigned __int16 v46; // cx
  int v47; // eax
  unsigned int v48; // edx
  unsigned int v49; // ecx
  unsigned int v50; // r8d
  int v51; // eax
  signed __int32 v53[9]; // [rsp+0h] [rbp-60h] BYREF
  unsigned int v54; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v55; // [rsp+28h] [rbp-38h]
  unsigned int v56; // [rsp+30h] [rbp-30h] BYREF
  __int64 v57; // [rsp+38h] [rbp-28h]
  __int64 v58; // [rsp+40h] [rbp-20h]
  _WORD v59[8]; // [rsp+48h] [rbp-18h] BYREF

  v57 = a4;
  v55 = 0LL;
  v58 = a3;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v53, v9);
    v7 = word_18017769C != (__int16)v9;
    v55 = qword_1801776B8;
  }
  if ( !a2 || (v10 = 1, !v7) )
    v10 = v9;
  if ( *(_BYTE *)(v8 + 3) == (_BYTE)v9 )
  {
    v11 = -1;
    v54 = v9;
    if ( *a1 <= (unsigned __int16)v9 || (v12 = 1, **((_WORD **)a1 + 1) != 46) )
      v12 = v9;
    NextWchar = GetNextWchar(a1, &v54, v12, a2);
    for ( i = 0; NextWchar; NextWchar = GetNextWchar(a1, &v54, 0, a2) )
    {
      if ( NextWchar == 46 )
        v11 = v54;
    }
    v15 = v11 == *a1 >> 1;
    v54 = 0;
    if ( v15 )
      v11 = -1;
    *(_BYTE *)(a3 + 3) = 0;
    v56 = v11;
    while ( 1 )
    {
      v17 = GetNextWchar(a1, &v54, 1, a2);
      v9 = 0;
      v18 = v17;
      if ( !v17 || v54 >= v11 || *(_BYTE *)(a3 + 3) >= 6u )
        break;
      if ( v10 )
      {
        if ( v17 <= 0x7Fu || (v16 = 2, !*(_BYTE *)(v55 + 2LL * v18 + 1)) )
          v16 = 1;
        i += v16;
        if ( i > 6 )
          goto LABEL_28;
      }
      *(_WORD *)(a3 + 2LL * (unsigned __int8)(*(_BYTE *)(a3 + 3))++ + 4) = v18;
    }
    if ( !v10 )
      i = *(unsigned __int8 *)(a3 + 3);
LABEL_28:
    if ( i <= 2 )
    {
      v19 = RtlComputeLfnChecksum(a1);
      *(_WORD *)a3 = v19;
      v20 = v9;
      do
      {
        v21 = 48;
        if ( (v19 & 0xFu) > 9 )
          v21 = 55;
        v22 = v20 + *(unsigned __int8 *)(a3 + 3);
        v23 = (v19 & 0xF) + v21;
        v19 >>= 4;
        ++v20;
        *(_WORD *)(a3 + 2 * v22 + 4) = v23;
      }
      while ( v20 < 4 );
      *(_BYTE *)(a3 + 3) += 4;
      *(_BYTE *)(a3 + 2) = 1;
    }
    if ( v11 == -1 )
    {
      *(_DWORD *)(a3 + 20) = v9;
    }
    else
    {
      *(_WORD *)(a3 + 24) = 46;
      v24 = 1;
      *(_DWORD *)(a3 + 20) = 1;
      v25 = GetNextWchar(a1, &v56, 1, a2);
      LOBYTE(v9) = 0;
      v26 = v25;
      if ( v25 )
      {
        while ( *(_DWORD *)(a3 + 20) < 4u )
        {
          if ( !v10 )
            goto LABEL_80;
          if ( v26 <= 0x7Fu || (v27 = 2, !*(_BYTE *)(v55 + 2LL * v26 + 1)) )
            v27 = 1;
          v24 += v27;
          if ( v24 <= 4 )
          {
LABEL_80:
            *(_WORD *)(a3 + 2LL * (unsigned int)(*(_DWORD *)(a3 + 20))++ + 24) = v26;
            v28 = GetNextWchar(a1, &v56, 1, a2);
            LOBYTE(v9) = 0;
            v26 = v28;
            if ( v28 )
              continue;
          }
          if ( !v26 )
            goto LABEL_45;
          break;
        }
        *(_WORD *)(a3 + 2LL * (unsigned int)(*(_DWORD *)(a3 + 20) - 1) + 24) = 126;
      }
    }
  }
LABEL_45:
  v29 = *(_DWORD *)(a3 + 32) + 1;
  *(_DWORD *)(a3 + 32) = v29;
  if ( v29 > 4 && *(_BYTE *)(a3 + 2) == (_BYTE)v9 )
  {
    v30 = RtlComputeLfnChecksum(a1);
    *(_WORD *)a3 = v30;
    v32 = v30;
    if ( 2 - v31 < (unsigned int)(6 - v31) )
    {
      v33 = 4LL;
      v34 = (_WORD *)(a3 + 2 * ((unsigned int)(2 - v31) + 2LL));
      do
      {
        v35 = 48;
        v36 = v32 & 0xF;
        if ( v36 > 9u )
          v35 = 55;
        v32 >>= 4;
        *v34++ = v36 + v35;
        --v33;
      }
      while ( v33 );
    }
    *(_DWORD *)(a3 + 32) = 1;
    *(_BYTE *)(a3 + 3) = 6 - v31;
    v29 = 1;
    *(_BYTE *)(a3 + 2) = 1;
  }
  v37 = 1;
  v38 = 1;
  do
  {
    if ( !v29 )
      break;
    v39 = 8 - v37++;
    v40 = 0;
    v41 = v29 % 0xA + 48;
    v29 /= 0xAu;
    v59[v39] = v41;
    if ( v41 == 57 )
      v40 = v38;
    v38 = v40;
  }
  while ( v37 <= 7 );
  v42 = v58;
  v43 = v57;
  v44 = &v59[8 - v37];
  *v44 = 126;
  if ( (unsigned __int8)(*(_BYTE *)(v42 + 3) - 1) > 0xBu )
  {
    v45 = 0;
  }
  else
  {
    memmove(*(void **)(v43 + 8), (const void *)(v42 + 4), 2LL * *(unsigned __int8 *)(v42 + 3));
    v45 = 2 * *(unsigned __int8 *)(v42 + 3);
  }
  *(_WORD *)v43 = v45;
  memmove((void *)(*(_QWORD *)(v43 + 8) + 2 * ((unsigned __int64)v45 >> 1)), v44, 2 * v37);
  v46 = *(_WORD *)v43 + 2 * v37;
  *(_WORD *)v43 = v46;
  v47 = *(_DWORD *)(v42 + 20);
  if ( v47 )
  {
    memmove(
      (void *)(*(_QWORD *)(v43 + 8) + 2 * ((unsigned __int64)v46 >> 1)),
      (const void *)(v42 + 24),
      (unsigned int)(2 * v47));
    *(_WORD *)v43 += 2 * *(_WORD *)(v42 + 20);
  }
  if ( !v38 )
    return 0LL;
  v48 = *(unsigned __int8 *)(v42 + 3);
  if ( v10 )
  {
    v49 = 0;
    v50 = 0;
    if ( (_BYTE)v48 )
    {
      do
      {
        if ( *(_WORD *)(v42 + 2LL * v49 + 4) <= 0x7Fu
          || (v51 = 2, !*(_BYTE *)(v55 + 2LL * *(unsigned __int16 *)(v42 + 2LL * v49 + 4) + 1)) )
        {
          v51 = 1;
        }
        v50 += v51;
        if ( v50 > 7 - v37 )
          break;
        ++v49;
      }
      while ( v49 < v48 );
    }
  }
  else
  {
    LOBYTE(v49) = v48 - 1;
  }
  *(_BYTE *)(v42 + 3) = v49;
  if ( (_BYTE)v49 )
    return 0LL;
  else
    return 3221226535LL;
}
