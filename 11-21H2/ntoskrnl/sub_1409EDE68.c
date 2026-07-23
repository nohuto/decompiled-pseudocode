/*
 * XREFs of sub_1409EDE68 @ 0x1409EDE68
 * Callers:
 *     sub_1409E48B8 @ 0x1409E48B8 (sub_1409E48B8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1409E448C @ 0x1409E448C (sub_1409E448C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409EDE68(
        __int64 a1,
        unsigned __int16 a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  size_t v7; // r12
  unsigned int v8; // ebx
  char *Pool2; // rax
  char *v12; // r15
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r14
  char *v17; // rdi
  char *v18; // r13
  char *v19; // rsi
  char *v20; // r12
  int v21; // eax
  PVOID *v22; // rax
  PVOID *v23; // rcx
  _QWORD *v24; // r14
  _OWORD *v25; // rax
  PVOID *v26; // rax
  _QWORD *v27; // rdi
  _OWORD *v28; // rax
  PVOID *v29; // rax
  void *v30; // rcx
  PVOID *v31; // rax
  PVOID *v32; // rcx
  volatile signed __int64 *v33; // rdi
  void *v34; // r14
  PVOID *v35; // rax
  _QWORD *v36; // rsi
  void *v37; // rdi
  _DWORD *v38; // rcx
  void **v39; // rax
  PVOID *v40; // rax
  _QWORD *v41; // rsi
  _QWORD *v42; // rax
  _QWORD *v43; // rdi
  _QWORD *v44; // rcx
  PVOID *v45; // rax
  _QWORD *v46; // rdi
  __int64 v47; // rax
  _QWORD *v48; // rcx
  _QWORD *v49; // rdx
  PVOID *v50; // rax
  _QWORD *v51; // rsi
  _DWORD **v52; // rdi
  _DWORD *v53; // rcx
  void **v54; // rax
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-18h]
  PVOID v57; // [rsp+40h] [rbp-10h] BYREF
  PVOID *v58; // [rsp+48h] [rbp-8h]
  struct _KMUTANT *Mutex; // [rsp+A8h] [rbp+58h]

  v7 = a2;
  v8 = 0;
  if ( a2 > 0x200u )
    return 3221225485LL;
  p_P = &P;
  P = &P;
  v58 = &v57;
  v57 = &v57;
  if ( a2 )
  {
    Pool2 = (char *)ExAllocatePool2(256LL, 16LL * a2, 1685550149LL);
    v12 = Pool2;
    if ( !Pool2 )
    {
LABEL_54:
      v8 = -1073741670;
LABEL_55:
      v40 = (PVOID *)P;
      v41 = P;
      while ( v40 != &P )
      {
        v42 = (_QWORD *)*v41;
        v43 = v41;
        v41 = v42;
        if ( (_QWORD *)v42[1] != v43 )
          goto LABEL_70;
        v44 = (_QWORD *)v43[1];
        if ( (_QWORD *)*v44 != v43 )
          goto LABEL_70;
        *v44 = v42;
        v42[1] = v44;
        ExFreePoolWithTag((PVOID)v43[2], 0);
        ExFreePoolWithTag(v43, 0);
        v40 = (PVOID *)P;
      }
      v45 = (PVOID *)v57;
      v46 = v57;
      while ( v45 != &v57 )
      {
        v47 = *v46;
        v48 = v46;
        v46 = (_QWORD *)v47;
        if ( *(_QWORD **)(v47 + 8) != v48 )
          goto LABEL_70;
        v49 = (_QWORD *)v48[1];
        if ( (_QWORD *)*v49 != v48 )
          goto LABEL_70;
        *v49 = v47;
        *(_QWORD *)(v47 + 8) = v49;
        ExFreePoolWithTag(v48, 0);
        v45 = (PVOID *)v57;
      }
      return v8;
    }
    memmove(Pool2, a3, 16 * v7);
    qsort(v12, v7, 0x10uLL, (int (__cdecl *)(const void *, const void *))sub_140883930);
    v13 = 0;
    if ( (_DWORD)v7 != 1 )
    {
      while ( 1 )
      {
        v14 = 16LL * v13;
        v15 = *(_QWORD *)&v12[v14] - *(_QWORD *)&v12[v14 + 16];
        if ( !v15 )
          v15 = *(_QWORD *)&v12[v14 + 8] - *(_QWORD *)&v12[v14 + 24];
        if ( !v15 )
          break;
        if ( ++v13 >= (int)v7 - 1 )
          goto LABEL_13;
      }
      ExFreePoolWithTag(v12, 0);
      v8 = -1073741811;
      goto LABEL_55;
    }
  }
  else
  {
    v12 = 0LL;
  }
LABEL_13:
  v16 = a1;
  Mutex = (struct _KMUTANT *)(a1 + 632);
  KeWaitForSingleObject((PVOID)(a1 + 632), Executive, 0, 0, 0LL);
  if ( *(_WORD *)(a1 + 1064) )
  {
    v17 = *(char **)(a1 + 1072);
    v18 = &v17[16 * *(unsigned __int16 *)(a1 + 1064)];
  }
  else
  {
    v17 = 0LL;
    v18 = 0LL;
  }
  if ( (_WORD)v7 )
  {
    v19 = v12;
    v20 = &v12[16 * v7];
  }
  else
  {
    v19 = 0LL;
    v20 = 0LL;
  }
  if ( v17 < v18 )
  {
    while ( v19 < v20 )
    {
      v21 = memcmp(v17, v19, 0x10uLL);
      if ( v21 )
      {
        if ( v21 >= 0 )
        {
          v24 = (_QWORD *)ExAllocatePool2(256LL, 24LL, 1953985605LL);
          if ( !v24 )
            goto LABEL_53;
          v25 = (_OWORD *)ExAllocatePool2(256LL, 16LL, 1953985605LL);
          if ( !v25 )
          {
            v30 = v24;
LABEL_52:
            ExFreePoolWithTag(v30, 0);
            goto LABEL_53;
          }
          *v25 = *(_OWORD *)v19;
          v24[2] = v25;
          v26 = p_P;
          if ( *p_P != &P )
            goto LABEL_70;
          v24[1] = p_P;
          *v24 = &P;
          v19 += 16;
          *v26 = v24;
          p_P = (PVOID *)v24;
        }
        else
        {
          v22 = (PVOID *)ExAllocatePool2(256LL, 24LL, 1953985605LL);
          if ( !v22 )
            goto LABEL_53;
          v22[2] = v17;
          v23 = v58;
          if ( *v58 != &v57 )
LABEL_70:
            __fastfail(3u);
          v22[1] = v58;
          *v22 = &v57;
          v17 += 16;
          *v23 = v22;
          v58 = v22;
        }
      }
      else
      {
        v17 += 16;
        v19 += 16;
      }
      if ( v17 >= v18 )
      {
        v16 = a1;
        goto LABEL_33;
      }
    }
    while ( 1 )
    {
      v31 = (PVOID *)ExAllocatePool2(256LL, 24LL, 1953985605LL);
      if ( !v31 )
        goto LABEL_53;
      v31[2] = v17;
      v32 = v58;
      if ( *v58 != &v57 )
        goto LABEL_70;
      v31[1] = v58;
      *v31 = &v57;
      v17 += 16;
      *v32 = v31;
      v58 = v31;
      if ( v17 >= v18 )
      {
        v16 = a1;
        goto LABEL_44;
      }
    }
  }
LABEL_33:
  if ( v19 < v20 )
  {
    while ( 1 )
    {
      v27 = (_QWORD *)ExAllocatePool2(256LL, 24LL, 1953985605LL);
      if ( !v27 )
        break;
      v28 = (_OWORD *)ExAllocatePool2(256LL, 16LL, 1953985605LL);
      if ( !v28 )
      {
        v30 = v27;
        goto LABEL_52;
      }
      *v28 = *(_OWORD *)v19;
      v27[2] = v28;
      v29 = p_P;
      if ( *p_P != &P )
        goto LABEL_70;
      v27[1] = p_P;
      *v27 = &P;
      v19 += 16;
      *v29 = v27;
      p_P = (PVOID *)v27;
      if ( v19 >= v20 )
        goto LABEL_44;
    }
LABEL_53:
    KeReleaseMutex(Mutex, 0);
    goto LABEL_54;
  }
LABEL_44:
  v33 = (volatile signed __int64 *)(v16 + 688);
  ExAcquirePushLockExclusiveEx(v16 + 688, 0LL);
  *(_WORD *)(v16 + 1064) = a2;
  v34 = *(void **)(v16 + 1072);
  *(_QWORD *)(a1 + 1072) = v12;
  if ( (_InterlockedExchangeAdd64(v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v33);
  sub_1402AFC00((ULONG_PTR)v33);
  KeReleaseMutex(Mutex, 0);
  v35 = (PVOID *)P;
  v36 = P;
  while ( v35 != &P )
  {
    v37 = v36;
    v36 = (_QWORD *)*v36;
    sub_1409E448C(*((_DWORD **)v37 + 2), a7, 0);
    v38 = *(_DWORD **)v37;
    if ( *(void **)(*(_QWORD *)v37 + 8LL) != v37 )
      goto LABEL_70;
    v39 = (void **)*((_QWORD *)v37 + 1);
    if ( *v39 != v37 )
      goto LABEL_70;
    *v39 = v38;
    *((_QWORD *)v38 + 1) = v39;
    ExFreePoolWithTag(*((PVOID *)v37 + 2), 0);
    ExFreePoolWithTag(v37, 0);
    v35 = (PVOID *)P;
  }
  v50 = (PVOID *)v57;
  v51 = v57;
  while ( v50 != &v57 )
  {
    v52 = (_DWORD **)v51;
    v51 = (_QWORD *)*v51;
    sub_1409E448C(v52[2], a7, 1);
    v53 = *v52;
    if ( *((_DWORD ***)*v52 + 1) != v52 )
      goto LABEL_70;
    v54 = (void **)v52[1];
    if ( *v54 != v52 )
      goto LABEL_70;
    *v54 = v53;
    *((_QWORD *)v53 + 1) = v54;
    ExFreePoolWithTag(v52, 0);
    v50 = (PVOID *)v57;
  }
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  return v8;
}
