/*
 * XREFs of RaidRegisterPerfStates @ 0x1C004CBC0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidGetStorPoFxPerfState @ 0x1C00449AC (RaidGetStorPoFxPerfState.c)
 *     RaidValidatePerfSets @ 0x1C004D734 (RaidValidatePerfSets.c)
 */

__int64 __fastcall RaidRegisterPerfStates(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  _QWORD *v7; // r14
  char *v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r15
  char v11; // r12
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  _DWORD *v14; // rdx
  __int64 v15; // r8
  _DWORD *Pool; // rax
  __int64 v18; // r10
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // r9
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  unsigned int v25; // r11d
  __int64 StorPoFxPerfState; // rax
  int v27; // r11d
  int v28; // ecx
  void *v29; // r9
  _QWORD *v30; // rax
  int v31; // ebx
  unsigned int v32; // eax
  unsigned int v33; // r12d
  unsigned int v34; // r8d
  _DWORD *v35; // r9
  __int64 v36; // r10
  __int64 i; // r11
  __int64 v38; // r9
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // edx
  int v42; // eax
  unsigned int v43; // r8d
  char *v44; // r12
  unsigned int v45; // ebx
  unsigned int v46; // r14d
  __int64 v47; // r8
  __int64 v48; // rdx
  unsigned int v49; // ecx
  int v50; // [rsp+38h] [rbp-18h]
  unsigned int *v51; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v52; // [rsp+48h] [rbp-8h]
  unsigned int v54; // [rsp+98h] [rbp+48h]
  unsigned __int64 v55; // [rsp+A0h] [rbp+50h]
  unsigned int v56; // [rsp+A0h] [rbp+50h]

  v55 = a3;
  v54 = a2;
  v7 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( (a3 & 0x1000) != 0 )
  {
    if ( a4 && !a5 && a6 && (a3 & 0x80u) == 0LL )
    {
      v8 = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      v11 = 1;
      goto LABEL_30;
    }
    return 3221225485LL;
  }
  v11 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  v12 = *a4;
  if ( !*a4 || !a5 || a6 || !(unsigned __int8)RaidValidatePerfSets(a5, v12) )
    return 3221225485LL;
  v13 = 48 * v12 + 56;
  v14 = (_DWORD *)(a5 + 24);
  v15 = v12;
  do
  {
    if ( !*(v14 - 1) )
      v13 += 16 * *v14;
    v14 += 10;
    --v15;
  }
  while ( v15 );
  Pool = (_DWORD *)RaidAllocatePool(64LL, v13, 1330667858LL, a1);
  v52 = Pool;
  v7 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v18 = 0LL;
  v19 = *a4;
  *Pool = v19;
  v20 = &Pool[12 * v19 + 14];
  if ( *a4 )
  {
    do
    {
      v21 = a5 + 40 * v18;
      v22 = 6 * v18;
      v7[v22 + 3] = *(_QWORD *)(v21 + 8);
      HIDWORD(v7[v22 + 4]) = *(_DWORD *)(v21 + 20);
      v23 = 0;
      if ( *(_DWORD *)(v21 + 16) != 3 )
        v23 = *(_DWORD *)(v21 + 16);
      LODWORD(v7[6 * v18 + 4]) = v23;
      v24 = *(_DWORD *)(v21 + 20);
      if ( v24 )
      {
        if ( v24 == 1 )
        {
          v7[6 * v18 + 5] = *(_QWORD *)(v21 + 24);
          v7[6 * v18 + 6] = *(_QWORD *)(v21 + 32);
        }
      }
      else
      {
        v7[6 * v18 + 6] = v20;
        v25 = 0;
        for ( LODWORD(v7[6 * v18 + 5]) = *(_DWORD *)(v21 + 24); v25 < *(_DWORD *)(v21 + 24); v20 += 2 )
        {
          StorPoFxPerfState = RaidGetStorPoFxPerfState((_DWORD *)v21, v25);
          v25 = v27 + 1;
          v20[1] = *(_QWORD *)(StorPoFxPerfState + 16);
          *v20 = *(_QWORD *)(StorPoFxPerfState + 8);
        }
      }
      v18 = (unsigned int)(v18 + 1);
    }
    while ( (unsigned int)v18 < *a4 );
    v8 = 0LL;
    v11 = 0;
  }
  a2 = v54;
  a3 = v55;
LABEL_30:
  v28 = **(_DWORD **)(a1 + 64);
  if ( v28 == 1431193940 )
  {
    v29 = RaidNullReference;
    v9 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    if ( v28 != 1094997074 )
      goto LABEL_71;
    v29 = RaidAdapterPerfStateCallback;
    v10 = *(_QWORD *)(a1 + 64);
  }
  v30 = 0LL;
  if ( !v11 )
    v30 = v7;
  v50 = PoFxRegisterComponentPerfStates(a7, a2, (a3 >> 7) & 1, v29, v30, (unsigned __int64)&v51 & -(__int64)(v11 != 0));
  v31 = v50;
  if ( v50 < 0 || !v11 || !v51 )
    goto LABEL_72;
  v32 = *v51;
  v33 = 0;
  v56 = 0;
  if ( !*v51 )
    goto LABEL_71;
  v34 = 40 * v32;
  v35 = v51 + 10;
  v36 = v32;
  do
  {
    if ( !*(v35 - 1) )
      v34 += 24 * *v35;
    v35 += 12;
    --v36;
  }
  while ( v36 );
  v8 = (char *)RaidAllocatePool(64LL, v34, 1330667858LL, a1);
  if ( !v8 )
  {
    v31 = -1073741670;
    goto LABEL_72;
  }
  for ( i = 0LL; (unsigned int)i < *v51; i = (unsigned int)(i + 1) )
  {
    v38 = 40 * i;
    *(_DWORD *)&v8[v38] = 1;
    *(_DWORD *)&v8[v38 + 4] = 40;
    *(_QWORD *)&v8[v38 + 8] = *(_QWORD *)&v51[12 * i + 6];
    v39 = v51[12 * i + 8];
    if ( v39 )
    {
      v40 = v39 - 1;
      if ( v40 )
      {
        if ( v40 != 1 )
          goto LABEL_67;
        *(_DWORD *)&v8[v38 + 16] = 2;
      }
      else
      {
        *(_DWORD *)&v8[v38 + 16] = 1;
      }
    }
    else
    {
      *(_DWORD *)&v8[v38 + 16] = 0;
    }
    v41 = v51[12 * i + 9];
    if ( v41 )
    {
      if ( v41 != 1 )
      {
LABEL_67:
        v31 = -1073741762;
        goto LABEL_72;
      }
      v42 = 1;
    }
    else
    {
      v42 = 0;
    }
    *(_DWORD *)&v8[v38 + 20] = v42;
    if ( v42 )
    {
      *(_QWORD *)&v8[v38 + 24] = *(_QWORD *)&v51[12 * i + 10];
      *(_QWORD *)&v8[v38 + 32] = *(_QWORD *)&v51[12 * i + 12];
    }
    else
    {
      v43 = v51[12 * i + 10];
      *(_DWORD *)&v8[v38 + 24] = v43;
      *(_DWORD *)&v8[v38 + 28] = 24 * v33 + 40 * (*v51 - i);
      v44 = &v8[24 * v33 + v38];
      if ( v43 )
      {
        v45 = 0;
        v46 = v56;
        do
        {
          v47 = v45;
          ++v46;
          ++v45;
          v48 = 3 * v47;
          v47 *= 2LL;
          *(_DWORD *)&v44[8 * v48] = 1;
          *(_DWORD *)&v44[8 * v48 + 4] = 24;
          *(_QWORD *)&v44[8 * v48 + 8] = *(_QWORD *)(*(_QWORD *)&v51[12 * i + 12] + 8 * v47);
          *(_QWORD *)&v44[8 * v48 + 16] = *(_QWORD *)(*(_QWORD *)&v51[12 * i + 12] + 8 * v47 + 8);
        }
        while ( v45 < *(_DWORD *)&v8[v38 + 24] );
        v31 = v50;
        v56 = v46;
        v7 = v52;
      }
      v33 = v56;
    }
  }
  if ( !v9 )
  {
    if ( v10 )
    {
      *(_QWORD *)(*(_QWORD *)(v10 + 4896) + 112LL) = v8;
      *(_DWORD *)(*(_QWORD *)(v10 + 4896) + 104LL) = *v51;
      *a6 = *(_QWORD *)(*(_QWORD *)(v10 + 4896) + 112LL);
      v49 = *(_DWORD *)(*(_QWORD *)(v10 + 4896) + 104LL);
      goto LABEL_70;
    }
LABEL_71:
    v31 = -1073741823;
    goto LABEL_72;
  }
  *(_QWORD *)(*(_QWORD *)(v9 + 1792) + 176LL) = v8;
  *(_DWORD *)(*(_QWORD *)(v9 + 1792) + 168LL) = *v51;
  *a6 = *(_QWORD *)(*(_QWORD *)(v9 + 1792) + 176LL);
  v49 = *(_DWORD *)(*(_QWORD *)(v9 + 1792) + 168LL);
LABEL_70:
  *a4 = v49;
LABEL_72:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4F506152u);
  if ( v31 < 0 )
  {
    if ( v8 )
      ExFreePoolWithTag(v8, 0x4F506152u);
  }
  return (unsigned int)v31;
}
