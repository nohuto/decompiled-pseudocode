/*
 * XREFs of sub_140747FB4 @ 0x140747FB4
 * Callers:
 *     sub_140747E9C @ 0x140747E9C (sub_140747E9C.c)
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_1407483B4 @ 0x1407483B4 (sub_1407483B4.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_14081FCD8 @ 0x14081FCD8 (sub_14081FCD8.c)
 *     sub_14081FECC @ 0x14081FECC (sub_14081FECC.c)
 *     sub_14081FF24 @ 0x14081FF24 (sub_14081FF24.c)
 *     sub_140831280 @ 0x140831280 (sub_140831280.c)
 *     sub_140854DB4 @ 0x140854DB4 (sub_140854DB4.c)
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 */

__int64 __fastcall sub_140747FB4(unsigned int a1, _DWORD *a2, char a3, _BYTE *a4)
{
  __int64 v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rdi
  int v10; // ebp
  int v12; // edx
  __int64 v13; // r9
  int v14; // r15d
  __int64 v15; // r8
  _DWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // ebx
  int *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // r15d
  _DWORD *v24; // rbx
  __int64 v25; // r14
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // rcx
  _OWORD *v29; // rdx
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  __int128 v33; // xmm5
  unsigned int v34; // eax
  _DWORD *v35; // rcx
  _DWORD *v36; // rax
  unsigned __int64 v37; // rcx
  int v38; // eax
  _DWORD *i; // rbx
  int v40; // eax
  _DWORD *v41; // rcx
  unsigned __int64 v42; // rax
  __int128 v43; // [rsp+30h] [rbp-38h] BYREF
  size_t NumOfElements; // [rsp+80h] [rbp+18h] BYREF

  v4 = a1;
  v43 = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    KeWaitForSingleObject(&Semaphore, DelayExecution, 0, 0, 0LL);
  }
  LODWORD(NumOfElements) = v4;
  v9 = (unsigned __int64)&a2[16 * v4];
  v10 = sub_1407483B4(a2, v9, &NumOfElements);
  if ( v10 < 0 )
    goto LABEL_6;
  v12 = 0;
  v13 = 3221226029LL;
  v14 = 1;
  v15 = 64LL;
  if ( !byte_140C46299 )
  {
    v16 = a2;
    if ( (unsigned __int64)a2 < v9 )
    {
      while ( (int)v16[14] < 0 || *((_QWORD *)v16 + 3) )
      {
        v16 += 16;
        if ( (unsigned __int64)v16 >= v9 )
          goto LABEL_14;
      }
      v12 = 1;
    }
LABEL_14:
    if ( v16 != (_DWORD *)v9 && (unsigned __int64)a2 < v9 )
    {
      v36 = a2 + 2;
      v37 = ((unsigned __int64)((v4 << 6) - 1) >> 6) + 1;
      do
      {
        if ( (int)v36[12] < 0 || *((_QWORD *)v36 + 2) )
        {
          *v36 |= 0x20u;
          v36[12] = -1073741267;
        }
        v36 += 16;
        --v37;
      }
      while ( v37 );
    }
    if ( v12 )
      goto LABEL_43;
  }
  v17 = a2;
  if ( (unsigned __int64)a2 < v9 )
  {
    while ( 1 )
    {
      v18 = *v17 ? *(_QWORD *)(*(_QWORD *)(*v17 + 312LL) + 40LL) : 0LL;
      if ( (*(_DWORD *)(v18 + 396) & 0x40) != 0 && v17[3] )
        break;
      v17 += 8;
      if ( (unsigned __int64)v17 >= v9 )
        goto LABEL_22;
    }
    v14 = 0;
  }
LABEL_22:
  if ( v17 == (_QWORD *)v9 || (unsigned __int64)a2 >= v9 )
  {
    v19 = NumOfElements;
  }
  else
  {
    v19 = NumOfElements;
    v20 = a2 + 2;
    do
    {
      v21 = *((_QWORD *)v20 - 1);
      if ( v21 )
        v22 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
      else
        v22 = 0LL;
      if ( (*(_DWORD *)(v22 + 396) & 0x40) == 0 || !*((_QWORD *)v20 + 2) )
      {
        v27 = *v20;
        if ( (*v20 & 0x20) == 0 )
        {
          v20[12] = -1073741267;
          *v20 = v27 | 0x20;
          --v19;
        }
      }
      v20 += 16;
    }
    while ( (unsigned __int64)(v20 - 2) < v9 );
  }
  if ( !v19 )
  {
    v10 = -1073741823;
    goto LABEL_43;
  }
  if ( v19 != (_DWORD)v4 )
  {
    v28 = a2;
    if ( (unsigned __int64)a2 < v9 )
    {
      v29 = (_OWORD *)(v9 - 64);
      do
      {
        if ( (v28[2] & 0x20) != 0 )
        {
          v9 -= 64LL;
          v30 = *(_OWORD *)v28;
          v31 = *((_OWORD *)v28 + 1);
          v32 = *((_OWORD *)v28 + 2);
          v33 = *((_OWORD *)v28 + 3);
          *(_OWORD *)v28 = *v29;
          *((_OWORD *)v28 + 1) = v29[1];
          *((_OWORD *)v28 + 2) = v29[2];
          *((_OWORD *)v28 + 3) = v29[3];
          *v29 = v30;
          v29[1] = v31;
          v29[2] = v32;
          v29[3] = v33;
          v29 -= 4;
        }
        else
        {
          v28 += 16;
        }
      }
      while ( (unsigned __int64)v28 < v9 );
    }
  }
  if ( v19 > 1 )
  {
    v34 = 0;
    v35 = a2 + 5;
    do
    {
      *v35 = v34++;
      v35 += 16;
    }
    while ( v34 < v19 );
    qsort(a2, v19, 0x40uLL, sub_140858660);
  }
  if ( v14 )
  {
    v10 = sub_14081FF24(a2, v19, &v43, v13);
    if ( v10 >= 0 )
    {
      v38 = sub_140854DB4(&v43);
      v10 = v38;
      for ( i = a2; (unsigned __int64)i < v9; i += 16 )
      {
        if ( v10 < 0 )
          i[14] = -1073741800;
        else
          sub_14081FCD8(i, i + 16, 0LL);
      }
      goto LABEL_42;
    }
  }
  else
  {
    v10 = -1073741823;
  }
  v23 = 0;
  v24 = a2;
  if ( (unsigned __int64)a2 >= v9 )
    goto LABEL_42;
  while ( 1 )
  {
    if ( *(_QWORD *)v24 )
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 312LL) + 40LL);
    else
      v25 = 0LL;
    v26 = sub_14081FF24(v24, 1LL, &v43, v13);
    v10 = v26;
    if ( v26 >= 0 )
    {
      v23 = 1;
      v10 = sub_140854DB4(&v43);
      if ( v10 < 0 )
        v24[14] = -1073741800;
      else
        sub_14081FCD8(v24, v24 + 16, 0LL);
      goto LABEL_41;
    }
    if ( v26 == -1073741670 )
      goto LABEL_60;
    if ( !v23 && (a2[2] & 0x80u) == 0 )
      break;
    v24[2] |= 0x20u;
    v24[14] = -1073741267;
LABEL_41:
    v24 += 16;
    if ( (unsigned __int64)v24 >= v9 )
      goto LABEL_42;
  }
  sub_14076FB70(v25, 0x40000LL);
  v10 = sub_14095A02C(v25, v24, 1LL, 0LL);
  sub_14076FBEC(v25, 0x40000LL);
  if ( v10 < 0 )
  {
    v40 = -1073741800;
    if ( v10 == -1073739512 )
      v40 = -1073739512;
    v24[14] = v40;
    goto LABEL_41;
  }
  if ( a4 )
    *a4 = 1;
  v24 += 16;
LABEL_60:
  if ( (unsigned __int64)v24 < v9 )
  {
    if ( v10 == -1073741670 )
    {
      do
      {
        v24[14] = -1073741670;
        v24 += 16;
      }
      while ( (unsigned __int64)v24 < v9 );
    }
    else
    {
      v41 = v24 + 2;
      v42 = ((v9 - (unsigned __int64)v24 - 1) >> 6) + 1;
      do
      {
        *v41 |= 0x20u;
        v41[12] = -1073741267;
        v41 += 16;
        --v42;
      }
      while ( v42 );
    }
  }
LABEL_42:
  sub_140831280(a2, v9, v15, v13);
LABEL_43:
  sub_14081FECC(a2, v9, v15, v13);
LABEL_6:
  if ( !a3 )
  {
    KeReleaseSemaphore(&Semaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v10;
}
