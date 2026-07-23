/*
 * XREFs of sub_1405A216C @ 0x1405A216C
 * Callers:
 *     sub_140A81214 @ 0x140A81214 (sub_140A81214.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405A29F8 @ 0x1405A29F8 (sub_1405A29F8.c)
 *     sub_1406EB784 @ 0x1406EB784 (sub_1406EB784.c)
 *     sub_140761F24 @ 0x140761F24 (sub_140761F24.c)
 *     sub_140761F70 @ 0x140761F70 (sub_140761F70.c)
 *     sub_140933454 @ 0x140933454 (sub_140933454.c)
 *     sub_140970AB4 @ 0x140970AB4 (sub_140970AB4.c)
 *     sub_140970D2C @ 0x140970D2C (sub_140970D2C.c)
 *     sub_14097F73C @ 0x14097F73C (sub_14097F73C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405A216C(ULONG_PTR a1, int *a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // rcx
  int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _OWORD *v10; // r13
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // r12d
  unsigned int v14; // r10d
  unsigned __int64 *v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  char *v22; // r15
  char *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // ebx
  int v28; // r14d
  unsigned __int16 **v29; // rdx
  __int64 v30; // r9
  _OWORD *v31; // rax
  unsigned int v32; // r14d
  __int64 v33; // r13
  __int64 v34; // rax
  unsigned __int16 *v35; // rdx
  unsigned int v36; // ebx
  void *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int8 CurrentIrql; // di
  __int64 v41; // r9
  unsigned __int8 v42; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v44; // r8
  int v45; // eax
  bool v46; // zf
  void *v47; // rcx
  __int64 v48; // rax
  _QWORD *v50; // [rsp+30h] [rbp-D0h]
  _OWORD *v51; // [rsp+38h] [rbp-C8h]
  ULONG_PTR Context[10]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+90h] [rbp-70h]
  _BYTE v54[160]; // [rsp+A0h] [rbp-60h] BYREF
  int v55; // [rsp+150h] [rbp+50h]
  ULONG Size; // [rsp+168h] [rbp+68h] BYREF

  v4 = a3;
  memset(v54, 0, 0x68uLL);
  Size = 0;
  v55 = 0;
  memset(Context, 0, sizeof(Context));
  Context[8] = (ULONG_PTR)&Context[7];
  Context[7] = (ULONG_PTR)&Context[7];
  sub_140761F70(a1, v54);
  Context[2] = a1;
  if ( !(unsigned int)sub_1406EB784(a1) )
  {
    v7 = -1073741436;
    goto LABEL_72;
  }
  if ( (*(_DWORD *)(a1 + 196) & 0x20) != 0 )
    goto LABEL_4;
  if ( *(_QWORD *)(a1 + 296) != a1 + 296 )
  {
    sub_140761F24(v6, sub_1405A1D20, Context);
    v7 = Context[9];
    if ( SLODWORD(Context[9]) < 0 )
      goto LABEL_72;
  }
  v8 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &Size);
  v9 = *(_QWORD *)(a1 + 112);
  v10 = 0LL;
  v50 = v8;
  v11 = v8;
  v51 = 0LL;
  if ( v9 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(sub_140287970(v9) + 96) + 32LL);
    if ( v12 )
    {
      v10 = *(_OWORD **)(v12 + 88);
      v51 = v10;
    }
    v11 = v50;
  }
  else
  {
    v10 = *(_OWORD **)(a1 + 320);
    v51 = v10;
  }
  v13 = *(_DWORD *)(a1 + 64) >> 12;
  if ( !v10 )
  {
LABEL_4:
    v7 = -1073741637;
    goto LABEL_72;
  }
  v14 = 0;
  if ( (_DWORD)v4 )
  {
    v15 = (unsigned __int64 *)(a2 + 2);
    do
    {
      v16 = *v15;
      v17 = v11[*((int *)v15 - 2)];
      v18 = *(_QWORD *)(a1 + 48);
      v19 = *v15 <= v18 ? v18 + *(unsigned int *)(a1 + 64) - v16 : v16 - v18;
      if ( v19 > 0x7FFFFFFF )
        goto LABEL_4;
      if ( (xmmword_140D06920 & 0x20000000000LL) == 0 )
      {
        v20 = *(_QWORD *)(a1 + 48);
        v21 = v17 <= v20 ? v20 + *(unsigned int *)(a1 + 64) - v17 : v17 - v20;
        if ( v21 > 0x7FFFFFFF )
          goto LABEL_4;
      }
      v11 = v50;
      ++v14;
      v15 += 3;
    }
    while ( v14 < (unsigned int)v4 );
  }
  v7 = sub_140970AB4(a1, v54, &Context[3]);
  if ( v7 >= 0 )
  {
    if ( (*(_BYTE *)(Context[3] + 10) & 5) != 0 )
      v22 = *(char **)(Context[3] + 24);
    else
      v22 = (char *)MmMapLockedPagesSpecifyCache((PMDL)Context[3], 0, MmCached, 0LL, 1u, 0x20u);
    v23 = &v22[(_QWORD)v50 - *(_QWORD *)(a1 + 48)];
    if ( (dword_140D06880 & 0x8000) != 0 )
    {
      v7 = sub_14097F73C(a2, (unsigned int)v4);
      if ( v7 >= 0 )
      {
        v7 = sub_140933454(a1, a2, (unsigned int)v4);
        if ( v7 >= 0 )
        {
          if ( (_DWORD)v4 )
          {
            v24 = v4;
            do
            {
              v25 = *a2;
              v26 = *((_QWORD *)a2 + 1);
              a2 += 6;
              *(_QWORD *)&v23[8 * v25] = v26;
              --v24;
            }
            while ( v24 );
          }
        }
      }
    }
    else
    {
      v27 = 8 * v13 + 56;
      HIDWORD(Context[1]) = v27;
      if ( v13 )
      {
        v28 = 0;
        v29 = (unsigned __int16 **)v10 + 7;
        v30 = v13;
        do
        {
          if ( *v29 )
            v28 += ((*v29)[1] >> 1) + ((*v29)[2] >> 1) + (**v29 >> 2);
          ++v29;
          --v30;
        }
        while ( v30 );
        v55 = v28;
        LODWORD(v4) = a3;
      }
      v31 = sub_1402828F0(64, v27 + 4 * (v13 + v55 + 2 * v13), 0x66766D4Du);
      Context[4] = (ULONG_PTR)v31;
      if ( v31 )
      {
        *v31 = *v10;
        v31[1] = v10[1];
        v31[2] = v10[2];
        *(_QWORD *)(Context[4] + 48) = Context[4] + v27;
        if ( v13 )
        {
          v32 = 0;
          v33 = 56LL;
          v34 = v13;
          v53 = v13;
          do
          {
            v35 = *(unsigned __int16 **)((char *)v51 + v33);
            if ( v35 )
            {
              v36 = v35[1] + 12 + v35[2] + *v35;
              v37 = (void *)(*(_QWORD *)(Context[4] + 48) + v32);
              *(_QWORD *)(Context[4] + v33) = v37;
              memmove(v37, v35, v36);
              v34 = v53;
              v32 += v36;
            }
            v33 += 8LL;
            v53 = --v34;
          }
          while ( v34 );
          LODWORD(v4) = a3;
          v10 = v51;
        }
        *(_DWORD *)(Context[4] + 8) = (_DWORD)v50 - *(_DWORD *)(a1 + 48);
        *(_QWORD *)(Context[4] + 24) = v23;
        *(_QWORD *)(Context[4] + 16) = 0LL;
        *(_QWORD *)(Context[4] + 32) = *(_QWORD *)(a1 + 48);
        if ( (xmmword_140D06920 & 0x20000000000LL) != 0 )
          *(_QWORD *)(Context[4] + 40) = sub_1404192C0;
        Context[5] = (ULONG_PTR)a2;
        LODWORD(Context[6]) = 24 * v4;
        v38 = *((_QWORD *)v10 + 2);
        if ( (_DWORD)v4 )
        {
          v39 = (unsigned int)v4;
          do
          {
            if ( v38 )
            {
              if ( (xmmword_140D06920 & 0x20000000000LL) == 0
                || _bittest64(
                     (const signed __int64 *)qword_140C4F418,
                     (unsigned __int64)(*((_QWORD *)a2 + 1) + 0x800000000000LL) >> 16) )
              {
                *(_DWORD *)(v38 + 4LL * *a2) = a2[2] - *(_DWORD *)(a1 + 48);
              }
              else
              {
                *(_DWORD *)(v38 + 4LL * *a2) = 0;
              }
            }
            a2 += 6;
            --v39;
          }
          while ( v39 );
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v41 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v41 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
        }
        HIDWORD(Context[0]) = KeQueryActiveProcessorCountEx(0xFFFFu);
        LODWORD(Context[0]) = HIDWORD(Context[0]);
        v7 = KeIpiGenericCall(sub_1405A2710, (ULONG_PTR)Context);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v42 = KeGetCurrentIrql();
            if ( v42 <= 0xFu && CurrentIrql <= 0xFu && v42 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v44 = *((_QWORD *)CurrentPrcb + 4375);
              v45 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v46 = (v45 & *(_DWORD *)(v44 + 20)) == 0;
              *(_DWORD *)(v44 + 20) &= v45;
              if ( v46 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
LABEL_72:
  sub_140970D2C(v54, Context[3]);
  while ( 1 )
  {
    v47 = (void *)Context[7];
    if ( (ULONG_PTR *)Context[7] == &Context[7] )
      break;
    v48 = *(_QWORD *)Context[7];
    if ( *(ULONG_PTR **)(Context[7] + 8) != &Context[7] || *(_QWORD *)(v48 + 8) != Context[7] )
      __fastfail(3u);
    Context[7] = *(_QWORD *)Context[7];
    *(_QWORD *)(v48 + 8) = &Context[7];
    sub_1405A29F8(v47);
  }
  if ( Context[4] )
    ExFreePoolWithTag((PVOID)Context[4], 0);
  return (unsigned int)v7;
}
