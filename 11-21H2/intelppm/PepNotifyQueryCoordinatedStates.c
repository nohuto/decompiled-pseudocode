/*
 * XREFs of PepNotifyQueryCoordinatedStates @ 0x1C0040B44
 * Callers:
 *     RegisterKernelCoordinatedStates @ 0x1C003E2FC (RegisterKernelCoordinatedStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0003740 (memmove.c)
 *     memset @ 0x1C0003A00 (memset.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C0036D8C (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x1C0037430 (ValidateCoordinatedState.c)
 *     PepQueryName @ 0x1C0041734 (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryCoordinatedStates(__int64 a1, PVOID **a2)
{
  __int64 v2; // rsi
  PVOID *v4; // rdi
  unsigned int *v5; // r14
  unsigned int *Pool2; // rax
  unsigned int *v7; // r13
  int v8; // ebx
  int v9; // ebx
  int v10; // r8d
  unsigned int v11; // ebp
  unsigned int *v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r15d
  unsigned int v17; // ebx
  __int64 v18; // rax
  unsigned int v19; // r12d
  __int64 v20; // rax
  char *v21; // r15
  unsigned int *v22; // r14
  __int64 v23; // r13
  char *v24; // rbx
  unsigned int v25; // edx
  __int64 v26; // rcx
  size_t v27; // rbx
  unsigned int v28; // ebp
  char *v29; // r15
  unsigned int v30; // r12d
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  unsigned int v34; // eax
  PVOID *v35; // r14
  unsigned int *v37; // [rsp+30h] [rbp-58h]
  size_t v40; // [rsp+A0h] [rbp+18h]
  PVOID *v41; // [rsp+A8h] [rbp+20h]

  v2 = (unsigned int)dword_1C001E33C;
  v4 = 0LL;
  v5 = 0LL;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, (unsigned int)(16 * dword_1C001E33C + 4), 1919119952LL);
  v37 = Pool2;
  v7 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v2;
    v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 29LL, Pool2);
    if ( v8 >= 0 )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      if ( (_DWORD)v2 )
      {
        v12 = v7 + 4;
        v13 = v2;
        do
        {
          v14 = *(v12 - 1);
          v15 = v11;
          v11 = *v12;
          v9 += v14;
          v12 += 4;
          v10 += v11 * v14;
          if ( v15 >= v11 )
            v11 = v15;
          --v13;
        }
        while ( v13 );
      }
      v16 = (320 * v2 + 55) & 0xFFFFFFF8;
      v17 = v16 + 16 * v9;
      v18 = ExAllocatePool2(64LL, v17 + 4 * v10, 1919119952LL);
      v41 = (PVOID *)v18;
      v4 = (PVOID *)v18;
      if ( !v18 )
        goto LABEL_10;
      v19 = 0;
      v20 = v18 + v16;
      v21 = (char *)v4 + v17;
      if ( (_DWORD)v2 )
      {
        v22 = v7 + 3;
        v23 = v20;
        v24 = (char *)(v4 + 42);
        do
        {
          KeInitializeAffinityEx2(v24 - 288, 32LL);
          v25 = 0;
          *(_DWORD *)v24 = *(v22 - 2);
          *((_DWORD *)v24 + 1) = *(v22 - 1);
          *((_DWORD *)v24 + 3) = *v22;
          *((_DWORD *)v24 + 2) = v22[1];
          *((_QWORD *)v24 + 3) = v23;
          v23 += 16LL * *v22;
          if ( *v22 )
          {
            do
            {
              v26 = v25++;
              *(_QWORD *)(*((_QWORD *)v24 + 3) + 16 * v26 + 8) = v21;
              v21 += 4 * v22[1];
            }
            while ( v25 < *v22 );
          }
          PepQueryName(a1, v19++, 27LL, v24 - 24);
          v24 += 320;
          v22 += 4;
        }
        while ( v19 < (unsigned int)v2 );
        v4 = v41;
        v7 = v37;
      }
      v27 = 4 * v11 + 24;
      v40 = v27;
      v5 = (unsigned int *)ExAllocatePool2(64LL, v27, 1919119952LL);
      if ( v5 )
      {
        v28 = 0;
        if ( (_DWORD)v2 )
        {
          v29 = (char *)(v4 + 43);
          while ( 1 )
          {
            v30 = 0;
            if ( *((_DWORD *)v29 + 1) )
              break;
LABEL_27:
            v8 = ValidateCoordinatedState((__int64)v4, v28);
            if ( v8 < 0 )
              goto LABEL_30;
            v27 = v40;
            ++v28;
            v29 += 320;
            if ( v28 >= (unsigned int)v2 )
              goto LABEL_29;
          }
          while ( 1 )
          {
            memset(v5, 0, v27);
            *v5 = v28;
            v5[1] = v30;
            v5[2] = *(_DWORD *)v29;
            v8 = ((__int64 (__fastcall *)(_QWORD, unsigned int *))qword_1C001E070)(*(_QWORD *)(a1 + 1120), v5);
            if ( v8 < 0 )
              break;
            v8 = ValidateCoordinatedDependencyOptions((__int64)v4, v28, v30, *(_DWORD *)v29, (__int64)v5);
            if ( v8 < 0 )
              break;
            v31 = *((_QWORD *)v5 + 2);
            v32 = *((_QWORD *)v29 + 2) + 16LL * v30;
            if ( v31 )
              v33 = *(_DWORD *)(v31 + 56);
            else
              v33 = -1;
            *(_DWORD *)v32 = v33;
            v34 = v5[3];
            *(_DWORD *)(v32 + 4) = v34;
            memmove(*(void **)(v32 + 8), v5 + 6, 4LL * v34);
            v27 = v40;
            if ( ++v30 >= *((_DWORD *)v29 + 1) )
              goto LABEL_27;
          }
        }
        else
        {
LABEL_29:
          v8 = 0;
          *a2 = v4;
          v4 = 0LL;
        }
      }
      else
      {
LABEL_10:
        v8 = -1073741670;
      }
    }
LABEL_30:
    ExFreePoolWithTag(v7, (ULONG)1919119952);
    if ( v5 )
      ExFreePoolWithTag(v5, (ULONG)1919119952);
    if ( v4 )
    {
      if ( (_DWORD)v2 )
      {
        v35 = v4 + 40;
        do
        {
          if ( *v35 )
            ExFreePoolWithTag(*v35, (ULONG)1919119952);
          v35 += 40;
          --v2;
        }
        while ( v2 );
      }
      ExFreePoolWithTag(v4, (ULONG)1919119952);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
