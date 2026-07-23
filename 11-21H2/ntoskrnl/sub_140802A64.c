/*
 * XREFs of sub_140802A64 @ 0x140802A64
 * Callers:
 *     sub_14080285C @ 0x14080285C (sub_14080285C.c)
 *     sub_140802A64 @ 0x140802A64 (sub_140802A64.c)
 *     sub_140804158 @ 0x140804158 (sub_140804158.c)
 * Callees:
 *     strcpy_s @ 0x1403E71A0 (strcpy_s.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140802A64 @ 0x140802A64 (sub_140802A64.c)
 *     sub_140802BE0 @ 0x140802BE0 (sub_140802BE0.c)
 *     sub_140804158 @ 0x140804158 (sub_140804158.c)
 *     sub_140A1D990 @ 0x140A1D990 (sub_140A1D990.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140802A64(_DWORD *a1, int a2, char a3, size_t *a4, _DWORD *a5)
{
  int v6; // ecx
  size_t PoolWithTag; // rbx
  char v8; // r13
  SIZE_T v9; // r15
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // edi
  int v14; // r14d
  void *v15; // r13
  __int64 v16; // r14
  PVOID v17; // rax
  size_t v18; // r8
  void *v19; // rcx
  PVOID v20; // rdx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  _OWORD *v25; // rax
  unsigned int v26; // edi
  PVOID v27; // rax
  SIZE_T v28; // r13
  __int64 v29; // r14
  __int64 v30; // rax
  unsigned int v31; // edi
  int v32; // eax
  __int64 v33; // rax
  PVOID v34; // rax
  size_t v35; // r8
  PVOID v36; // rdx
  PVOID v37; // rax
  const wchar_t *v38; // r8
  unsigned int v39; // r14d
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  bool v43; // zf
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  _DWORD *v47; // r14
  char *v48; // rdi
  __int64 v49; // r14
  unsigned int v50; // r14d
  unsigned int v51; // r13d
  size_t Size; // [rsp+30h] [rbp-30h] BYREF
  size_t v53; // [rsp+38h] [rbp-28h] BYREF
  PVOID v54; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+48h] [rbp-18h]
  void *Src; // [rsp+50h] [rbp-10h] BYREF
  size_t v57; // [rsp+58h] [rbp-8h]
  char v58; // [rsp+A0h] [rbp+40h]
  int v59; // [rsp+A8h] [rbp+48h]

  v59 = a2;
  v6 = *a1;
  PoolWithTag = 0LL;
  v57 = 0LL;
  v8 = 0;
  Size = 0LL;
  LODWORD(v9) = 0;
  LODWORD(v53) = 0;
  P = 0LL;
  Src = 0LL;
  v54 = 0LL;
  v58 = 0;
  if ( v6 )
  {
    v10 = v6 - 2;
    if ( !v10 )
      goto LABEL_5;
    v11 = v10 - 3;
    if ( !v11 )
    {
      LODWORD(v9) = 20;
      PoolWithTag = (size_t)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x4B444342u);
      if ( PoolWithTag )
      {
        *(_OWORD *)PoolWithTag = 0LL;
        *(_DWORD *)(PoolWithTag + 16) = 0;
        *(_DWORD *)PoolWithTag = 1;
        goto LABEL_13;
      }
      goto LABEL_28;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
LABEL_5:
      v13 = sub_140804158((_DWORD)a1, 0, 0, 0, 0LL, (__int64)&v53);
      if ( v13 < 0 )
        goto LABEL_74;
      v14 = v53;
      if ( (a3 & 0x20) != 0 && (_DWORD)v53 )
      {
        v13 = -1073741823;
LABEL_63:
        if ( !v14 )
          goto LABEL_73;
        v13 = sub_140802A64((int)a1 + v14, v59, 0, (unsigned int)&v54, (__int64)&Size);
        if ( v13 < 0 )
          goto LABEL_74;
        LODWORD(v9) = Size + 34;
        HIDWORD(Size) = Size + 34;
        v39 = Size + 34;
        PoolWithTag = (size_t)ExAllocatePoolWithTag(PagedPool, (unsigned int)(Size + 34), 0x4B444342u);
        v57 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset((void *)PoolWithTag, 0, v39);
          *(_DWORD *)PoolWithTag = 8;
          *(_DWORD *)(PoolWithTag + 20) = 0;
          v40 = 301989890;
          if ( v59 )
          {
            if ( v59 == 553648129 )
            {
              v40 = 570425346;
            }
            else if ( v59 == 285212739 )
            {
              v40 = 301989956;
            }
          }
          *(_DWORD *)(PoolWithTag + 28) = v40;
          *(_DWORD *)(PoolWithTag + 24) = 34;
          memmove((void *)(PoolWithTag + 34), v54, (unsigned int)Size);
LABEL_73:
          if ( v13 < 0 )
            goto LABEL_74;
LABEL_14:
          *a4 = PoolWithTag;
          *a5 = v9;
LABEL_15:
          v8 = v58;
          goto LABEL_16;
        }
        goto LABEL_69;
      }
      v13 = sub_140802BE0(a1, &Src);
      if ( v13 < 0 )
      {
        P = Src;
        goto LABEL_63;
      }
      v15 = Src;
      v16 = -1LL;
      P = Src;
      v58 = 1;
      do
        ++v16;
      while ( *((_WORD *)Src + v16) );
      LODWORD(v9) = 2 * v16 + 22;
      v17 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v9, 0x4B444342u);
      PoolWithTag = (size_t)v17;
      if ( v17 )
      {
        memset(v17, 0, (unsigned int)(2 * v16 + 22));
        v18 = (unsigned int)(2 * v16 + 2);
        v19 = (void *)(PoolWithTag + 20);
        v20 = v15;
        *(_DWORD *)PoolWithTag = 2;
LABEL_12:
        memmove(v19, v20, v18);
LABEL_13:
        v13 = 0;
        goto LABEL_14;
      }
      goto LABEL_21;
    }
    v22 = v12 - 1;
    if ( !v22 )
    {
      LODWORD(v9) = 36;
      PoolWithTag = (size_t)ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x4B444342u);
      if ( PoolWithTag )
      {
        *(_OWORD *)PoolWithTag = 0LL;
        *(_OWORD *)(PoolWithTag + 16) = 0LL;
        *(_DWORD *)(PoolWithTag + 32) = 0;
        *(_DWORD *)PoolWithTag = 7;
        *(_OWORD *)(PoolWithTag + 20) = *((_OWORD *)a1 + 2);
        goto LABEL_13;
      }
      goto LABEL_28;
    }
    v23 = v22 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( !v24 )
      {
        v9 = (unsigned int)(a1[4] + 21);
        v26 = a1[4] + 21;
        v27 = ExAllocatePoolWithTag(PagedPool, v9, 0x4B444342u);
        PoolWithTag = (size_t)v27;
        if ( v27 )
        {
          memset(v27, 0, v26);
          *(_DWORD *)PoolWithTag = 9;
          strcpy_s((char *)(PoolWithTag + 20), (unsigned int)a1[4], (const char *)a1 + 20);
          goto LABEL_13;
        }
        goto LABEL_28;
      }
      if ( v24 == 1 )
      {
        LODWORD(v9) = 40;
        v25 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x4B444342u);
        PoolWithTag = (size_t)v25;
        if ( v25 )
        {
          *v25 = 0LL;
          v25[1] = 0LL;
          *((_QWORD *)v25 + 4) = 0LL;
          *(_DWORD *)v25 = 10;
          *(_OWORD *)((char *)v25 + 20) = *((_OWORD *)a1 + 1);
          *((_DWORD *)v25 + 9) = a1[8];
          goto LABEL_13;
        }
LABEL_28:
        v13 = -1073741670;
        goto LABEL_16;
      }
LABEL_77:
      v41 = sub_140A1D990(a1);
      LODWORD(v9) = HIDWORD(Size);
      v13 = v41;
      PoolWithTag = v57;
LABEL_78:
      if ( v13 < 0 )
        goto LABEL_15;
      goto LABEL_14;
    }
    v28 = 34LL;
    v29 = -1LL;
    v43 = a1[4] == 1;
    LODWORD(v9) = 34;
    HIDWORD(Size) = 34;
    if ( v43 )
    {
      v30 = -1LL;
      do
        ++v30;
      while ( *((_WORD *)a1 + v30 + 14) );
      v28 = (unsigned int)(2 * v30 + 34);
      LODWORD(v9) = 2 * v30 + 34;
      HIDWORD(Size) = v9;
    }
    v31 = a1[6];
    if ( !v31 )
    {
LABEL_48:
      v37 = ExAllocatePoolWithTag(PagedPool, v28, 0x4B444342u);
      PoolWithTag = (size_t)v37;
      if ( v37 )
      {
        memset(v37, 0, v28);
        *(_DWORD *)PoolWithTag = 8;
        if ( a1[4] )
        {
          *(_DWORD *)(PoolWithTag + 20) = 1;
          v38 = (const wchar_t *)(a1 + 7);
          do
            ++v29;
          while ( v38[v29] );
          wcscpy_s((wchar_t *)(PoolWithTag + 32), v29 + 1, v38);
        }
        else
        {
          *(_DWORD *)(PoolWithTag + 20) = 0;
          *(_DWORD *)(PoolWithTag + 28) = a1[5];
        }
        if ( !v54 )
          goto LABEL_13;
        *(_DWORD *)(PoolWithTag + 24) = v31;
        v18 = (unsigned int)Size;
        v20 = v54;
        v19 = (void *)(PoolWithTag + v31);
        goto LABEL_12;
      }
LABEL_21:
      v13 = -1073741670;
      goto LABEL_15;
    }
    if ( (a3 & 0x20) == 0 )
    {
      v32 = sub_140802BE0(a1, &Src);
      P = Src;
      if ( v32 >= 0 )
      {
        v58 = 1;
        v33 = -1LL;
        do
          ++v33;
        while ( *((_WORD *)Src + v33) );
        LODWORD(v53) = 2 * v33 + 2;
        LODWORD(Size) = 2 * v33 + 22;
        v34 = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B444342u);
        v54 = v34;
        if ( !v34 )
        {
          v13 = -1073741670;
LABEL_19:
          ExFreePoolWithTag(P, 0x4B444342u);
          return (unsigned int)v13;
        }
        memset(v34, 0, (unsigned int)Size);
        v35 = (unsigned int)v53;
        v36 = P;
        *(_DWORD *)v54 = 2;
        memmove((char *)v54 + 20, v36, v35);
      }
      if ( v54 )
      {
LABEL_47:
        v31 = v28;
        LODWORD(v9) = v28 + Size;
        v28 = (unsigned int)(v28 + Size);
        goto LABEL_48;
      }
      a2 = v59;
    }
    if ( a1[2] - v31 < 0x4C )
      goto LABEL_77;
    v13 = sub_140802A64(v31 + (_DWORD)a1 + 40, a2, 0, (unsigned int)&v54, (__int64)&Size);
    if ( v13 < 0 )
      goto LABEL_74;
    goto LABEL_47;
  }
  v42 = a1[4];
  if ( v42 != 3 && v42 != 5 )
    goto LABEL_77;
  v43 = v42 == 3;
  v44 = (unsigned int)a1[2];
  v45 = 52LL;
  if ( !v43 )
    v45 = 32LL;
  v46 = 9LL;
  if ( !v43 )
    v46 = 4LL;
  v47 = &a1[v46 + 4];
  if ( v44 < v45 + 12 || v47[2] > (unsigned int)(v44 - v45) )
  {
LABEL_75:
    if ( PoolWithTag )
      ExFreePoolWithTag((PVOID)PoolWithTag, 0x4B444342u);
    goto LABEL_77;
  }
  v13 = sub_140802A64((_DWORD)v47, a2, 0, (unsigned int)&v54, (__int64)&Size);
  if ( v13 < 0 )
  {
LABEL_74:
    if ( v13 == -1073741670 )
      goto LABEL_78;
    goto LABEL_75;
  }
  if ( *(_DWORD *)v54 == 3 )
    goto LABEL_77;
  v48 = (char *)v47 + (unsigned int)v47[2];
  P = v48;
  v49 = -1LL;
  do
    ++v49;
  while ( *(_WORD *)&v48[2 * v49] );
  v50 = 2 * v49 + 2;
  if ( v50 + 32 < 0x20 || v50 + 32 + (unsigned int)Size < v50 + 32 )
    goto LABEL_77;
  v51 = (v50 + 31) & 0xFFFFFFF8;
  v57 = (unsigned int)Size + v51;
  LODWORD(v9) = Size + v51;
  PoolWithTag = (size_t)ExAllocatePoolWithTag(PagedPool, v57, 0x4B444342u);
  if ( PoolWithTag )
  {
    memset((void *)PoolWithTag, 0, v57);
    memmove((void *)(PoolWithTag + 24), v48, v50);
    *(_DWORD *)(PoolWithTag + 20) = v51;
    memmove((void *)(PoolWithTag + v51), v54, (unsigned int)Size);
    *(_DWORD *)PoolWithTag = 4 - (a1[4] != 3);
    v13 = 0;
    goto LABEL_14;
  }
LABEL_69:
  v13 = -1073741670;
  v8 = 0;
LABEL_16:
  if ( v54 )
    ExFreePoolWithTag(v54, 0x4B444342u);
  if ( v8 )
    goto LABEL_19;
  return (unsigned int)v13;
}
