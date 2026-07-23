/*
 * XREFs of sub_1408038B4 @ 0x1408038B4
 * Callers:
 *     sub_140803498 @ 0x140803498 (sub_140803498.c)
 *     sub_1408038B4 @ 0x1408038B4 (sub_1408038B4.c)
 *     sub_14080397C @ 0x14080397C (sub_14080397C.c)
 *     sub_140A1DA40 @ 0x140A1DA40 (sub_140A1DA40.c)
 * Callees:
 *     strcpy_s @ 0x1403E71A0 (strcpy_s.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1408038B4 @ 0x1408038B4 (sub_1408038B4.c)
 *     sub_14080397C @ 0x14080397C (sub_14080397C.c)
 *     sub_140803D60 @ 0x140803D60 (sub_140803D60.c)
 *     sub_140804060 @ 0x140804060 (sub_140804060.c)
 *     sub_140A1DA40 @ 0x140A1DA40 (sub_140A1DA40.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 sub_1408038B4(int *a1, unsigned int a2, unsigned int a3, ...)
{
  int v4; // edx
  _QWORD *v6; // r12
  char *v7; // rdi
  int v8; // edx
  int v9; // edx
  int v10; // ebx
  __int64 result; // rax
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  __int64 v18; // rax
  char *v19; // rax
  __int64 v20; // rbx
  char *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // r14d
  unsigned int v24; // r15d
  unsigned int v25; // ebx
  __int64 v26; // r14
  __int64 v27; // rdx
  unsigned int v28; // eax
  int v29; // ecx
  void *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  char *v33; // rax
  unsigned int v34; // ebx
  __int64 v35; // rdx
  char *v36; // r9
  int v37; // eax
  char *v38; // rax
  unsigned int v39; // eax
  char *v40; // rax
  __int64 v41; // rax
  unsigned int *v42; // rbx
  unsigned int v43; // esi
  char *v44; // rax
  void *v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // esi
  char *v48; // rax
  char *PoolWithTag; // rax
  void *Src; // [rsp+30h] [rbp-10h] BYREF
  char *v51; // [rsp+38h] [rbp-8h]
  PVOID P; // [rsp+98h] [rbp+58h] BYREF
  va_list Pa; // [rsp+98h] [rbp+58h]
  va_list va1; // [rsp+A0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(Pa, a3);
  P = va_arg(va1, PVOID);
  v4 = *a1;
  v6 = P;
  Src = 0LL;
  v51 = 0LL;
  v7 = 0LL;
  v8 = v4 - 1;
  if ( !v8 )
  {
    if ( a2 < 0x14 )
      goto LABEL_10;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      *(_DWORD *)v7 = 5;
      *((_DWORD *)v7 + 2) = 72;
      goto LABEL_6;
    }
    goto LABEL_81;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a2 >= 0x16 )
    {
      if ( (unsigned __int8)sub_140804060((PCWSTR)a1 + 10) )
      {
        v7 = v51;
        v10 = sub_14080397C((PCWSTR)a1 + 10);
        if ( v10 < 0 )
          goto LABEL_7;
        goto LABEL_6;
      }
      goto LABEL_11;
    }
LABEL_10:
    v10 = -1073741811;
    goto LABEL_9;
  }
  v12 = v9 - 1;
  if ( !v12 )
  {
    if ( a2 < 0x2E )
      goto LABEL_10;
    v46 = (unsigned int)a1[5];
    if ( !(_DWORD)v46 )
      goto LABEL_10;
    P = 0LL;
    v10 = sub_140A1DA40((char *)a1 + v46, a2 - (unsigned int)v46, a1 + 6, a3, (PVOID *)Pa);
    if ( v10 < 0 )
      goto LABEL_7;
    v42 = (unsigned int *)P;
    v47 = *((_DWORD *)P + 1) + 20;
    v48 = (char *)ExAllocatePoolWithTag(PagedPool, v47, 0x4B444342u);
    v7 = v48;
    if ( v48 )
    {
      memset(v48, 0, v47);
      *(_DWORD *)v7 = 0;
      v45 = v7 + 20;
      *((_DWORD *)v7 + 2) = v47;
      *((_DWORD *)v7 + 4) = 5;
      goto LABEL_75;
    }
    goto LABEL_80;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a2 < 0x2E )
      goto LABEL_10;
    v41 = (unsigned int)a1[5];
    if ( !(_DWORD)v41 )
      goto LABEL_10;
    P = 0LL;
    v10 = sub_140A1DA40((char *)a1 + v41, a2 - (unsigned int)v41, a1 + 6, a3, (PVOID *)Pa);
    if ( v10 < 0 )
      goto LABEL_7;
    v42 = (unsigned int *)P;
    v43 = *((_DWORD *)P + 1) + 40;
    v44 = (char *)ExAllocatePoolWithTag(PagedPool, v43, 0x4B444342u);
    v7 = v44;
    if ( v44 )
    {
      memset(v44, 0, v43);
      *(_DWORD *)v7 = 0;
      v45 = v7 + 40;
      *((_DWORD *)v7 + 1) = 1;
      *((_DWORD *)v7 + 2) = v43;
      *((_DWORD *)v7 + 4) = 3;
LABEL_75:
      memmove(v45, v42, v42[1]);
      ExFreePoolWithTag(v42, 0x4B444342u);
      goto LABEL_6;
    }
LABEL_80:
    ExFreePoolWithTag(v42, 0x4B444342u);
LABEL_81:
    v10 = -1073741670;
    goto LABEL_7;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a2 < 0x20 )
      goto LABEL_10;
    v39 = a1[7];
    if ( v39 > 0x100000 )
      goto LABEL_10;
    v40 = (char *)ExAllocatePoolWithTag(PagedPool, v39, 0x4B444342u);
    v7 = v40;
    if ( v40 )
    {
      memmove(v40, a1 + 5, (unsigned int)a1[7]);
      goto LABEL_6;
    }
    goto LABEL_81;
  }
  v15 = v14 - 2;
  if ( !v15 )
  {
    if ( a2 < 0x24 )
      goto LABEL_10;
    v38 = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
    v7 = v38;
    if ( v38 )
    {
      memset(v38, 0, 0x48uLL);
      *(_DWORD *)v7 = 7;
      *((_DWORD *)v7 + 2) = 72;
      *((_OWORD *)v7 + 1) = xmmword_1400473A0;
      *((_OWORD *)v7 + 2) = *(_OWORD *)(a1 + 5);
      goto LABEL_6;
    }
    goto LABEL_81;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 != 1 || a2 < 0x28 )
        goto LABEL_10;
      v18 = *(_QWORD *)(a1 + 5) - 0x4AB191C774038F79LL;
      if ( *(_QWORD *)(a1 + 5) == 0x4AB191C774038F79LL )
        v18 = *(_QWORD *)(a1 + 7) - 0x526C65784171869ELL;
      if ( v18 )
        goto LABEL_10;
      v19 = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
      v7 = v19;
      if ( v19 )
      {
        memset(v19, 0, 0x48uLL);
        *(_DWORD *)v7 = 10;
        *((_DWORD *)v7 + 2) = 72;
        *((_DWORD *)v7 + 1) = 1;
        *((_OWORD *)v7 + 1) = *(_OWORD *)(a1 + 5);
        *((_DWORD *)v7 + 8) = a1[9];
LABEL_6:
        v10 = 0;
        goto LABEL_7;
      }
    }
    else
    {
      if ( a2 < 0x15 )
        goto LABEL_10;
      v20 = -1LL;
      do
        ++v20;
      while ( *((_BYTE *)a1 + v20 + 20) );
      v21 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v20 + 21), 0x4B444342u);
      v7 = v21;
      if ( v21 )
      {
        memset(v21, 0, (unsigned int)(v20 + 21));
        *(_QWORD *)v7 = 9LL;
        *((_DWORD *)v7 + 2) = v20 + 21;
        *((_DWORD *)v7 + 4) = v20 + 1;
        strcpy_s(v7 + 20, (unsigned int)(v20 + 1), (const char *)a1 + 20);
        goto LABEL_6;
      }
    }
    goto LABEL_81;
  }
  if ( a2 < 0x22 )
    goto LABEL_10;
  v22 = (unsigned int)a1[6];
  if ( a2 <= (unsigned int)v22 )
    goto LABEL_10;
  v23 = 30;
  v24 = 0;
  if ( (_DWORD)v22 )
  {
    v25 = a2 - v22;
    v26 = (__int64)a1 + v22;
    if ( *(int *)((char *)a1 + v22) != 3 || v25 < 0x2E )
      goto LABEL_10;
    v27 = *(unsigned int *)(v26 + 20);
    v28 = v25 - v27;
    v29 = *(_DWORD *)(v27 + v26);
    if ( v29 == 2 )
    {
      if ( v28 < 0x16 )
        goto LABEL_10;
      v30 = (void *)sub_140803D60((PCWSTR)(v27 + v26 + 20));
      if ( v30 )
      {
        ExFreePoolWithTag(v30, 0x4B444342u);
LABEL_11:
        v10 = -1073741637;
        goto LABEL_7;
      }
    }
    else if ( v29 != 6 && (v29 != 8 || v28 < 0x22) && (v29 != 1 || v28 < 0x14) )
    {
      goto LABEL_10;
    }
    v10 = sub_1408038B4(v26, v25, 0LL, &Src);
    if ( v10 < 0 )
      goto LABEL_7;
    v24 = 40;
    v23 = *((_DWORD *)Src + 2) + 70;
  }
  v31 = -1LL;
  if ( a1[5] == 1 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( *((_WORD *)a1 + v32 + 16) );
    v23 += 2 * v32;
  }
  v33 = (char *)ExAllocatePoolWithTag(PagedPool, v23, 0x4B444342u);
  v7 = v33;
  if ( v33 )
  {
    memset(v33, 0, v23);
    *(_DWORD *)v7 = 8;
    *((_DWORD *)v7 + 2) = v23;
    if ( a1[5] )
    {
      *((_DWORD *)v7 + 4) = 1;
      v35 = -1LL;
      do
        ++v35;
      while ( *((_WORD *)a1 + v35 + 16) );
      wcscpy_s((wchar_t *)v7 + 14, v35 + 1, (const wchar_t *)a1 + 16);
      do
        ++v31;
      while ( *((_WORD *)a1 + v31 + 16) );
      v34 = 2 * v31 + 30;
    }
    else
    {
      *((_DWORD *)v7 + 4) = 0;
      v34 = 30;
      *((_DWORD *)v7 + 5) = a1[7];
    }
    if ( Src )
    {
      v36 = &v7[v34];
      *(_DWORD *)v36 = 0;
      v37 = *((_DWORD *)Src + 2);
      *((_DWORD *)v36 + 4) = 6;
      *((_DWORD *)v36 + 2) = v24 + v37;
      memmove(&v36[v24], Src, *((unsigned int *)Src + 2));
      *((_DWORD *)v7 + 6) = v34;
    }
    v6 = P;
    goto LABEL_6;
  }
  v6 = P;
  v10 = -1073741670;
LABEL_7:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
LABEL_9:
  result = (unsigned int)v10;
  *v6 = v7;
  return result;
}
