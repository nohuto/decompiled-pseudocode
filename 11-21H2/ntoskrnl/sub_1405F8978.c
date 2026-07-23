/*
 * XREFs of sub_1405F8978 @ 0x1405F8978
 * Callers:
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_140391D3C @ 0x140391D3C (sub_140391D3C.c)
 *     sub_1405F8DD0 @ 0x1405F8DD0 (sub_1405F8DD0.c)
 *     sub_1405FA12C @ 0x1405FA12C (sub_1405FA12C.c)
 * Callees:
 *     sub_14023814C @ 0x14023814C (sub_14023814C.c)
 *     sub_140261818 @ 0x140261818 (sub_140261818.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1405F85E0 @ 0x1405F85E0 (sub_1405F85E0.c)
 *     sub_1405F87B8 @ 0x1405F87B8 (sub_1405F87B8.c)
 *     sub_1405F8850 @ 0x1405F8850 (sub_1405F8850.c)
 *     sub_1405F8CD4 @ 0x1405F8CD4 (sub_1405F8CD4.c)
 *     sub_1405F97E0 @ 0x1405F97E0 (sub_1405F97E0.c)
 *     sub_1405FA930 @ 0x1405FA930 (sub_1405FA930.c)
 *     sub_1405FB2F0 @ 0x1405FB2F0 (sub_1405FB2F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405F8978(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v5; // r15
  __int64 k; // rsi
  __int64 v7; // r13
  __int64 m; // rbp
  LARGE_INTEGER v9; // rax
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // ebp
  _DWORD *v13; // rax
  __int16 v14; // r8
  int v15; // r13d
  ULONGLONG *v16; // rax
  __int64 v17; // rdx
  char v18; // r8
  __int64 v19; // r9
  int v20; // r10d
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rbp
  unsigned int v24; // eax
  __int64 i; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  _DWORD *v29; // rax
  LARGE_INTEGER v30; // rax
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 j; // rcx
  __int64 v37; // [rsp+80h] [rbp+8h] BYREF
  __int64 v38; // [rsp+88h] [rbp+10h]

  v2 = a2 + 8;
  v5 = (unsigned int)(*(_DWORD *)(a2 + 24) >> *(_DWORD *)(a1 + 812));
  LODWORD(v37) = 0;
  v38 = *(_QWORD *)(a1 + 1032);
  if ( *(_QWORD *)(a2 + 16) )
  {
    v22 = *(_DWORD *)(a2 + 28);
    if ( (v22 & 8) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 1000);
      v24 = v22 >> 5;
      for ( i = *(_QWORD *)(v23 + 16); *(_DWORD *)i < v24; i += 32LL )
        ;
      if ( v2 == *(_QWORD *)(i + 24) )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v27 = 7LL * *(_QWORD *)(i + 8);
        *(_QWORD *)(i + 24) |= 1uLL;
        *(_QWORD *)(i + 8) = (unsigned __int64)(PerformanceCounter.QuadPart + v27 - *(_QWORD *)(i + 16)) >> 3;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v23 + 8));
    }
    if ( (unsigned int)sub_1405F85E0(v2, &v37) )
    {
      v12 = v37;
      sub_1405F8850(a1, 1, v37);
    }
    else
    {
      v12 = sub_1405F8CD4(a1, v28, v2);
      v29 = *(_DWORD **)(a1 + 1816);
      if ( v29 )
      {
        if ( v12 >= 0 )
          ++*v29;
        if ( (*(_DWORD *)(a2 + 28) & 4) == 0 )
        {
          v30 = KeQueryPerformanceCounter(0LL);
          v31 = *(_QWORD *)(a2 + 16);
          LODWORD(v37) = *(_DWORD *)(v31 + 4);
          v32 = *(_DWORD *)(v31 + 8);
          v33 = *(_QWORD *)(a1 + 1816);
          HIDWORD(v37) = v32;
          v34 = v30.QuadPart - v37;
          j = *(_QWORD *)(v33 + 1328);
          if ( *(_QWORD *)j < v34 || j != *(_QWORD *)(v33 + 1344) && *(_QWORD *)(j - 16) >= v34 )
          {
            for ( j = *(_QWORD *)(v33 + 1344); *(_QWORD *)j < v34; j += 16LL )
              ;
            *(_QWORD *)(v33 + 1328) = j;
          }
          ++*(_DWORD *)(j + 8);
        }
      }
    }
    sub_1405F87B8((_DWORD *)a1, a2);
  }
  else
  {
    for ( k = a1 + 1104; *(_DWORD *)k != (_DWORD)v5; k += 24LL )
      ;
    v7 = *(_QWORD *)(a1 + 1000);
    for ( m = *(_QWORD *)(v7 + 24); *(_DWORD *)m < *(_DWORD *)(a1 + 784); m += 32LL )
      ;
    if ( v2 == *(_QWORD *)(m + 24) )
    {
      v9 = KeQueryPerformanceCounter(0LL);
      v10 = 7LL * *(_QWORD *)(m + 8);
      *(_QWORD *)(m + 24) |= 1uLL;
      *(_QWORD *)(m + 8) = (unsigned __int64)(v9.QuadPart + v10 - *(_QWORD *)(m + 16)) >> 3;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 8));
    if ( (unsigned int)sub_1405F85E0(v2, &v37) )
    {
      v12 = v37;
      sub_1405F8850(a1, 1, v37);
      v11 = 0;
    }
    else
    {
      v13 = *(_DWORD **)(a1 + 1816);
      v12 = v11;
      if ( v13 )
        ++*v13;
    }
    v14 = *(_WORD *)(v38 + 2 * v5);
    if ( v14 >= 0 )
    {
      if ( (*(_DWORD *)(a2 + 28) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1892);
        v15 = 1;
      }
      else
      {
        v15 = v11;
      }
      sub_1405FA930(a1, (unsigned int)v5);
    }
    else
    {
      v15 = 1;
      *(_WORD *)(v38 + 2 * v5) = v14 & 0x7FFF;
      v16 = sub_140261818(0);
      if ( v16 )
      {
        sub_1405FB2F0((_DWORD)v16, 4, a1, v5, v12, v18, *(_BYTE *)(*(_QWORD *)(a1 + 1048) + v5));
        v19 = v38;
        v20 = 0;
        v17 = (unsigned int)v5;
      }
      if ( (*(_DWORD *)(a2 + 28) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1888);
        if ( (*(_WORD *)(v19 + 2 * v17) & 0x1FFF) != 0 )
          v15 = v20;
      }
    }
    *(_OWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    if ( v15 )
    {
      if ( *(_DWORD *)k != -1 )
      {
        ExFreePoolWithTag(*(PVOID *)(k + 8), 0);
        ExFreePoolWithTag(*(PVOID *)(k + 16), 0);
      }
      *(_OWORD *)k = 0LL;
      *(_QWORD *)(k + 16) = 0LL;
      *(_DWORD *)k = -1;
      v21 = sub_1405F97E0(a1, (unsigned int)v5);
      if ( v21 != 8 )
        sub_14023814C(a1, v21, 0xFFFFFFFF);
    }
  }
  return (unsigned int)v12;
}
