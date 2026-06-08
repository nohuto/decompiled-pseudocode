/*
 * XREFs of PepNotifyCoordinatedLpiStates @ 0x1C00406AC
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003E18C (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     GetDevExtFromIndex @ 0x1C00071B0 (GetDevExtFromIndex.c)
 */

__int64 __fastcall PepNotifyCoordinatedLpiStates(__int64 a1, _DWORD *a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  _DWORD *v7; // rbp
  __int64 v8; // r13
  int v9; // r11d
  int v10; // edi
  _QWORD *v11; // r10
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // rdx
  _DWORD *v15; // rax
  unsigned int v16; // r14d
  unsigned int v17; // r12d
  _DWORD *Pool2; // rax
  __int64 v19; // r8
  _BYTE *v20; // rdi
  char *v21; // r11
  char *v22; // r14
  __int64 v23; // r13
  _QWORD *v24; // r10
  unsigned int v25; // esi
  __int64 v26; // rcx
  __int64 v27; // r15
  __int64 v28; // r9
  int v29; // eax
  unsigned int v30; // r12d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 i; // r9
  __int64 v34; // rdx
  unsigned int j; // r11d
  __int64 v36; // rcx
  char v37; // al

  v4 = *a3;
  v5 = 0;
  v7 = a2;
  v8 = a1;
  v9 = 0;
  v10 = 0;
  if ( (_DWORD)v4 )
  {
    v11 = a3 + 90;
    v12 = (unsigned int)v4;
    do
    {
      v13 = *((_DWORD *)v11 - 3);
      v9 += v13;
      if ( v13 )
      {
        v14 = v13;
        v15 = (_DWORD *)(*v11 + 4LL);
        do
        {
          v10 += *v15;
          v15 += 4;
          --v14;
        }
        while ( v14 );
      }
      v11 += 40;
      --v12;
    }
    while ( v12 );
  }
  v16 = (96 * v4 + 15) & 0xFFFFFFF8;
  v17 = v16 + 24 * v9;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v17 + 4 * v10, 1919119952LL);
  v20 = Pool2;
  if ( Pool2 )
  {
    v21 = (char *)Pool2 + v16;
    v22 = (char *)Pool2 + v17;
    *Pool2 = v4;
    if ( (_DWORD)v4 )
    {
      v19 = (__int64)(a3 + 87);
      v23 = v4;
      v24 = Pool2 + 24;
      do
      {
        v25 = 0;
        *((_DWORD *)v24 - 2) = *(_DWORD *)v19;
        *v24 = v21;
        v26 = *(unsigned int *)v19;
        v21 += 24 * v26;
        if ( (_DWORD)v26 )
        {
          do
          {
            v27 = *v24;
            v28 = *(_QWORD *)(v19 + 12) + 16LL * v25;
            if ( *(_DWORD *)v28 != -1 )
              *(_QWORD *)(v27 + 24LL * v25) = *(_QWORD *)(GetDevExtFromIndex(*(_DWORD *)v28) + 1120);
            v29 = *(_DWORD *)(v28 + 4);
            v30 = 0;
            *(_QWORD *)(v27 + 24LL * v25 + 16) = v22;
            *(_DWORD *)(v27 + 24LL * v25 + 8) = v29;
            v31 = *(unsigned int *)(v28 + 4);
            v22 += 4 * v31;
            if ( (_DWORD)v31 )
            {
              do
              {
                v32 = v30++;
                *(_DWORD *)(*(_QWORD *)(v27 + 24LL * v25 + 16) + 4 * v32) = *(unsigned __int8 *)(*(_QWORD *)(v28 + 8)
                                                                                               + 4 * v32);
              }
              while ( v30 < *(_DWORD *)(v28 + 4) );
            }
            ++v25;
          }
          while ( v25 < *(_DWORD *)v19 );
        }
        v24 += 12;
        v19 += 320LL;
        --v23;
      }
      while ( v23 );
      v7 = a2;
      v8 = a1;
    }
    for ( i = 0LL; (unsigned int)i < *v7; i = (unsigned int)(i + 1) )
    {
      v34 = *(_QWORD *)&v7[10 * (unsigned int)i + 6];
      if ( v34 )
      {
        for ( j = 0; j < *(_DWORD *)(v34 + 16); *(_QWORD *)&v20[v36 + 80] = *(_QWORD *)(v34 + 8 * v19 + 96) )
        {
          v19 = 10LL * j;
          v36 = 96LL * (j + *(_DWORD *)(a4 + 4LL * (unsigned int)i));
          *(_DWORD *)&v20[v36 + 8] = *(_DWORD *)(v34 + 80LL * j + 24);
          *(_DWORD *)&v20[v36 + 12] = *(_DWORD *)(v34 + 80LL * j + 28);
          *(_DWORD *)&v20[v36 + 16] = *(_DWORD *)(v34 + 80LL * j + 32);
          *(_DWORD *)&v20[v36 + 20] = *(_DWORD *)(v34 + 80LL * j + 36);
          *(_DWORD *)&v20[v36 + 24] = *(_DWORD *)(v34 + 80LL * j + 40);
          v37 = *(_BYTE *)(v34 + 80LL * j + 48);
          if ( v37 == 126 )
          {
            v20[v36 + 28] = 1;
            *(_QWORD *)&v20[v36 + 32] = *(_QWORD *)(v34 + 80LL * j + 52);
          }
          else
          {
            v20[v36 + 32] = v37;
            v20[v36 + 33] = *(_BYTE *)(v34 + 80LL * j + 49);
            v20[v36 + 34] = *(_BYTE *)(v34 + 80LL * j + 50);
            v20[v36 + 35] = *(_BYTE *)(v34 + 80LL * j + 51);
            *(_QWORD *)&v20[v36 + 40] = *(_QWORD *)(v34 + 80LL * j + 52);
          }
          ++j;
          v20[v36 + 48] = *(_BYTE *)(v34 + 8 * v19 + 60);
          v20[v36 + 49] = *(_BYTE *)(v34 + 8 * v19 + 61);
          v20[v36 + 50] = *(_BYTE *)(v34 + 8 * v19 + 62);
          v20[v36 + 51] = *(_BYTE *)(v34 + 8 * v19 + 63);
          *(_QWORD *)&v20[v36 + 56] = *(_QWORD *)(v34 + 8 * v19 + 64);
          v20[v36 + 64] = *(_BYTE *)(v34 + 8 * v19 + 72);
          v20[v36 + 65] = *(_BYTE *)(v34 + 8 * v19 + 73);
          v20[v36 + 66] = *(_BYTE *)(v34 + 8 * v19 + 74);
          v20[v36 + 67] = *(_BYTE *)(v34 + 8 * v19 + 75);
          *(_QWORD *)&v20[v36 + 72] = *(_QWORD *)(v34 + 8 * v19 + 76);
        }
      }
    }
    ((void (__fastcall *)(_QWORD, _BYTE *, __int64, __int64))qword_1C001E078)(*(_QWORD *)(v8 + 1120), v20, v19, i);
    ExFreePoolWithTag(v20, (ULONG)1919119952);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
