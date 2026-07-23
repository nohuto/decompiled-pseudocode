/*
 * XREFs of sub_1409980BC @ 0x1409980BC
 * Callers:
 *     sub_1408553A0 @ 0x1408553A0 (sub_1408553A0.c)
 * Callees:
 *     sub_140248720 @ 0x140248720 (sub_140248720.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1409980BC(_QWORD *a1, __int64 *a2, unsigned int a3, __int64 a4, int *a5, char a6)
{
  __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  char v12; // r12
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  unsigned int v19; // edx
  int v20; // ebp
  int v21; // ebx
  _DWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // r8
  _DWORD *v30; // rbx
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 result; // rax

  v10 = 0x4AD7E250BA138E10LL - *a2;
  if ( !v10 )
    v10 = 0xE710D47A1ACF1686uLL - a2[1];
  if ( v10 )
  {
    v12 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 1;
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23010, 0LL);
  }
  v13 = *a2;
  v14 = a1[46];
  v15 = 0x4BF47D405708CC20LL - *a2;
  if ( *a2 == 0x4BF47D405708CC20LL )
    v15 = 0x26018D33012BAAB4LL - a2[1];
  if ( v15 || !v14 )
  {
    v17 = 0x4AD7E250BA138E10LL - v13;
    if ( 0x4AD7E250BA138E10LL == v13 )
      v17 = 0xE710D47A1ACF1686uLL - a2[1];
    if ( v17 || !*a1 )
    {
      v18 = 0x40D20CFE7FD18652LL - *a2;
      if ( *a2 == 0x40D20CFE7FD18652LL )
        v18 = 0x9E75876A060BA1B0uLL - a2[1];
      if ( v18 || !v14 )
      {
        v21 = -1073741808;
        v20 = 0;
        goto LABEL_48;
      }
      v16 = 12;
    }
    else
    {
      v16 = 32 * *(_DWORD *)(*a1 + 32LL) + 56;
    }
  }
  else
  {
    v16 = 80;
  }
  v19 = a6 != 0 ? 72 : 64;
  v20 = v19 + v16;
  if ( a3 >= v19 + v16 )
  {
    v22 = (_DWORD *)(a4 + v19);
    *(_DWORD *)a4 = v20;
    if ( a6 )
    {
      v23 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 44) |= 0x10u;
      *(_QWORD *)(a4 + 16) = v23;
      *(_DWORD *)(a4 + 52) = 1;
      *(_DWORD *)(a4 + 48) = v19;
    }
    else
    {
      *(_DWORD *)(a4 + 56) = v19;
    }
    *(_DWORD *)(a4 + 60) = v16;
    memset(v22, 0, v16);
    v24 = *a2;
    v25 = 0x4BF47D405708CC20LL - *a2;
    if ( *a2 == 0x4BF47D405708CC20LL )
      v25 = 0x26018D33012BAAB4LL - a2[1];
    if ( v25 || !v14 )
    {
      v26 = 0x4AD7E250BA138E10LL - v24;
      if ( v24 == 0x4AD7E250BA138E10LL )
        v26 = 0xE710D47A1ACF1686uLL - a2[1];
      if ( v26 || !*a1 )
      {
        v32 = 0x40D20CFE7FD18652LL - *a2;
        if ( *a2 == 0x40D20CFE7FD18652LL )
          v32 = 0x9E75876A060BA1B0uLL - a2[1];
        if ( !v32 && v14 )
          sub_140248720((__int64)(a1 - 4200), (unsigned __int64)v22, 0LL, (unsigned __int64)(v22 + 2), v22 + 1, 0LL);
      }
      else
      {
        v22[1] = *(_DWORD *)(*a1 + 32LL);
        v22[2] = *(_DWORD *)(*a1 + 16LL);
        v22[3] = *(_DWORD *)(*a1 + 24LL);
        *((_QWORD *)v22 + 2) = *(a1 - 4175);
        v27 = *a1;
        v28 = *(_DWORD *)(*a1 + 32LL);
        if ( v28 )
        {
          v29 = 0LL;
          v30 = v22 + 8;
          v31 = v28;
          do
          {
            v29 += 344LL;
            *(v30 - 2) = *(_DWORD *)(v29 + *a1 + 1040) / 0xAu;
            *(v30 - 1) = *(_DWORD *)(v29 + *a1 + 1048);
            *v30 = *(_DWORD *)(v27 + 724);
            v30 += 8;
            *((_BYTE *)v30 - 28) = *(_BYTE *)(v27 + 728);
            *((_BYTE *)v30 - 27) = *(_BYTE *)(v27 + 729);
            *((_BYTE *)v30 - 26) = *(_BYTE *)(v29 + *a1 + 1096);
            *((_QWORD *)v30 - 3) = *(unsigned int *)(v29 + *a1 + 1052);
            *(v30 - 4) = 1;
            --v31;
          }
          while ( v31 );
        }
      }
    }
    else
    {
      *v22 = 0;
      v22[1] = *(_DWORD *)(v14 + 440);
      *((_QWORD *)v22 + 1) = 0LL;
      *((_QWORD *)v22 + 2) = 0LL;
      *((_BYTE *)v22 + 28) = 100;
      *((_BYTE *)v22 + 29) = *(_BYTE *)(v14 + 481);
      v22[8] = HIDWORD(off_140C03040[534 * dword_140C232CC + 7]);
      *((_QWORD *)v22 + 5) = *(_QWORD *)(v14 + 32);
      v22[16] = 1;
    }
  }
  else
  {
    if ( a3 < 0x38 )
    {
      v21 = -1073741789;
      goto LABEL_48;
    }
    *(_DWORD *)(a4 + 48) = v20;
    v20 = 56;
    *(_DWORD *)(a4 + 44) = 32;
  }
  v21 = 0;
LABEL_48:
  if ( v12 )
    sub_1402935D0((ULONG_PTR)&qword_140C23010);
  result = (unsigned int)v21;
  if ( v21 < 0 )
    v20 = 0;
  *a5 = v20;
  return result;
}
