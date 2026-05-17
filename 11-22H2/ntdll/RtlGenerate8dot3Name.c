/*
 * XREFs of RtlGenerate8dot3Name @ 0x180108E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018FD4 (RtlpIsUtf8Process.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     GetNextWchar @ 0x180108D24 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x180108E10 (RtlComputeLfnChecksum.c)
 */

__int64 __fastcall RtlGenerate8dot3Name(unsigned __int16 *a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  bool v8; // cl
  __int64 v9; // r8
  char v10; // r12
  unsigned int v11; // ebp
  char v12; // r8
  __int16 NextWchar; // ax
  unsigned int v14; // esi
  bool v15; // zf
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // r10
  unsigned int i; // r8d
  __int16 v22; // dx
  __int64 v23; // rax
  __int16 v24; // dx
  unsigned int v25; // esi
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  unsigned int v30; // r9d
  unsigned __int16 v31; // ax
  int v32; // r10d
  unsigned __int16 v33; // r11
  __int64 v34; // r8
  _WORD *v35; // r9
  __int16 v36; // ax
  unsigned __int16 v37; // cx
  unsigned int v38; // esi
  char v39; // r13
  __int64 v40; // rax
  char v41; // cl
  __int16 v42; // r8
  __int64 v43; // r15
  _WORD *v44; // r14
  unsigned __int16 v45; // cx
  unsigned __int16 v46; // cx
  int v47; // eax
  unsigned int v48; // edx
  unsigned int v49; // ecx
  unsigned int v50; // r8d
  int v51; // eax
  signed __int32 v53[9]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v54; // [rsp+24h] [rbp-74h] BYREF
  __int64 v55; // [rsp+28h] [rbp-70h]
  unsigned int v56; // [rsp+30h] [rbp-68h] BYREF
  __int64 v57; // [rsp+38h] [rbp-60h]
  _WORD v58[8]; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  v57 = a4;
  v55 = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v53, 0);
    v8 = word_18018175C != 0;
    v55 = qword_180181778;
  }
  if ( !a2 || (v10 = 1, !v8) )
    v10 = 0;
  if ( !*(_BYTE *)(v9 + 3) )
  {
    v11 = -1;
    v54 = 0;
    if ( !*a1 || (v12 = 1, **((_WORD **)a1 + 1) != 46) )
      v12 = 0;
    while ( 1 )
    {
      NextWchar = GetNextWchar(a1, &v54, v12, a2);
      if ( !NextWchar )
        break;
      v12 = 0;
      if ( NextWchar == 46 )
        v11 = v54;
    }
    v14 = 0;
    v15 = v11 == *a1 >> 1;
    v54 = 0;
    *(_BYTE *)(a3 + 3) = 0;
    if ( v15 )
      v11 = -1;
    v56 = v11;
    while ( 1 )
    {
      v16 = GetNextWchar(a1, &v54, 1, a2);
      v17 = v16;
      if ( !v16 || v54 >= v11 || *(_BYTE *)(a3 + 3) >= 6u )
        break;
      if ( v10 )
      {
        if ( v16 <= 0x7Fu || (v18 = 2, !*(_BYTE *)(v55 + 2 * v17 + 1)) )
          v18 = 1;
        v14 += v18;
        if ( v14 > 6 )
          goto LABEL_27;
      }
      *(_WORD *)(a3 + 2LL * (unsigned __int8)(*(_BYTE *)(a3 + 3))++ + 4) = v17;
    }
    if ( !v10 )
      v14 = *(unsigned __int8 *)(a3 + 3);
LABEL_27:
    if ( v14 <= 2 )
    {
      v19 = RtlComputeLfnChecksum(a1);
      *(_WORD *)a3 = v19;
      v20 = v19;
      for ( i = 0; i < 4; ++i )
      {
        v22 = 48;
        if ( (v20 & 0xFu) > 9 )
          v22 = 55;
        v23 = i + *(unsigned __int8 *)(a3 + 3);
        v24 = (v20 & 0xF) + v22;
        v20 >>= 4;
        *(_WORD *)(a3 + 2 * v23 + 4) = v24;
      }
      *(_BYTE *)(a3 + 3) += 4;
      *(_BYTE *)(a3 + 2) = 1;
    }
    if ( v11 == -1 )
    {
      *(_DWORD *)(a3 + 20) = 0;
    }
    else
    {
      *(_WORD *)(a3 + 24) = 46;
      v25 = 1;
      for ( *(_DWORD *)(a3 + 20) = 1; ; ++*(_DWORD *)(a3 + 20) )
      {
        v26 = GetNextWchar(a1, &v56, 1, a2);
        v27 = v26;
        if ( !v26 )
          break;
        v28 = *(unsigned int *)(a3 + 20);
        if ( (unsigned int)v28 >= 4 )
          goto LABEL_43;
        if ( v10 )
        {
          if ( v26 <= 0x7Fu || (v29 = 2, !*(_BYTE *)(v55 + 2 * v27 + 1)) )
            v29 = 1;
          v25 += v29;
          if ( v25 > 4 )
          {
LABEL_43:
            *(_WORD *)(a3 + 2LL * (unsigned int)(v28 - 1) + 24) = 126;
            break;
          }
        }
        *(_WORD *)(a3 + 2 * v28 + 24) = v27;
      }
    }
  }
  v30 = *(_DWORD *)(a3 + 32) + 1;
  *(_DWORD *)(a3 + 32) = v30;
  if ( v30 > 4 && !*(_BYTE *)(a3 + 2) )
  {
    v31 = RtlComputeLfnChecksum(a1);
    *(_WORD *)a3 = v31;
    v33 = v31;
    if ( 2 - v32 < (unsigned int)(6 - v32) )
    {
      v34 = 4LL;
      v35 = (_WORD *)(a3 + 2 * ((unsigned int)(2 - v32) + 2LL));
      do
      {
        v36 = 48;
        v37 = v33 & 0xF;
        if ( v37 > 9u )
          v36 = 55;
        v33 >>= 4;
        *v35++ = v37 + v36;
        --v34;
      }
      while ( v34 );
    }
    *(_DWORD *)(a3 + 32) = 1;
    *(_BYTE *)(a3 + 3) = 6 - v32;
    v30 = 1;
    *(_BYTE *)(a3 + 2) = 1;
  }
  v38 = 1;
  v39 = 1;
  do
  {
    if ( !v30 )
      break;
    v40 = 8 - v38++;
    v41 = 0;
    v42 = v30 % 0xA + 48;
    v30 /= 0xAu;
    v58[v40] = v42;
    if ( v42 == 57 )
      v41 = v39;
    v39 = v41;
  }
  while ( v38 <= 7 );
  v43 = v57;
  v44 = &v58[8 - v38];
  *v44 = 126;
  if ( (unsigned __int8)(*(_BYTE *)(a3 + 3) - 1) > 0xBu )
  {
    v45 = 0;
  }
  else
  {
    memmove(*(void **)(v43 + 8), (const void *)(a3 + 4), 2LL * *(unsigned __int8 *)(a3 + 3));
    v45 = 2 * *(unsigned __int8 *)(a3 + 3);
  }
  *(_WORD *)v43 = v45;
  memmove((void *)(*(_QWORD *)(v43 + 8) + 2 * ((unsigned __int64)v45 >> 1)), v44, 2 * v38);
  v46 = *(_WORD *)v43 + 2 * v38;
  *(_WORD *)v43 = v46;
  v47 = *(_DWORD *)(a3 + 20);
  if ( v47 )
  {
    memmove(
      (void *)(*(_QWORD *)(v43 + 8) + 2 * ((unsigned __int64)v46 >> 1)),
      (const void *)(a3 + 24),
      (unsigned int)(2 * v47));
    *(_WORD *)v43 += 2 * *(_WORD *)(a3 + 20);
  }
  if ( !v39 )
    return 0LL;
  v48 = *(unsigned __int8 *)(a3 + 3);
  if ( v10 )
  {
    v49 = 0;
    v50 = 0;
    if ( (_BYTE)v48 )
    {
      do
      {
        if ( *(_WORD *)(a3 + 2LL * v49 + 4) <= 0x7Fu
          || (v51 = 2, !*(_BYTE *)(v55 + 2LL * *(unsigned __int16 *)(a3 + 2LL * v49 + 4) + 1)) )
        {
          v51 = 1;
        }
        v50 += v51;
        if ( v50 > 7 - v38 )
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
  *(_BYTE *)(a3 + 3) = v49;
  if ( !(_BYTE)v49 )
    return (unsigned int)-1073740761;
  return v4;
}
