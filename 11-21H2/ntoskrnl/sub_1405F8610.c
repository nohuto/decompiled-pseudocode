/*
 * XREFs of sub_1405F8610 @ 0x1405F8610
 * Callers:
 *     sub_1405F8DD0 @ 0x1405F8DD0 (sub_1405F8DD0.c)
 *     sub_1405FA12C @ 0x1405FA12C (sub_1405FA12C.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1405FAE14 @ 0x1405FAE14 (sub_1405FAE14.c)
 *     sub_1405FD31C @ 0x1405FD31C (sub_1405FD31C.c)
 */

__int64 __fastcall sub_1405F8610(__int64 a1, __int64 *a2)
{
  int v4; // r8d
  __int64 *v5; // rdx
  unsigned __int64 v6; // rdi
  int *v7; // rsi
  unsigned int v8; // r12d
  unsigned int *v9; // r15
  int v10; // ebp
  unsigned int v11; // r12d
  unsigned int v12; // eax
  unsigned int v13; // r13d
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax

  v4 = -2147483634;
  while ( 1 )
  {
    v5 = (__int64 *)a2[1];
    if ( v5 == a2 )
      break;
    v6 = *a2;
    *a2 = *(_QWORD *)*a2 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (__int64 *)v6 == v5 )
    {
      *a2 = 0LL;
      a2[1] = (__int64)a2;
    }
    else
    {
      *v5 = *v5 & 7 | (8 * ((unsigned __int64)*v5 >> 3) - 8);
    }
    v7 = (int *)(v6 + 8);
    v8 = *(_DWORD *)(v6 + 24);
    v9 = *(unsigned int **)(v6 + 16);
    v10 = -*(_DWORD *)(a1 + 792) & (16 * (v8 & *(_DWORD *)(a1 + 808)));
    v11 = v8 >> *(_DWORD *)(a1 + 812);
    v12 = *(_DWORD *)(v6 + 28);
    v13 = v12 >> 5;
    v14 = v12;
    if ( *(_QWORD *)(a1 + 1816) && (v12 & 4) == 0 )
    {
      *(LARGE_INTEGER *)(v9 + 1) = KeQueryPerformanceCounter(0LL);
      v14 = *(_DWORD *)(v6 + 28);
    }
    sub_1405FAE14(*(_QWORD *)(a1 + 1000), v13, 0LL, (unsigned __int64)v7 | ((unsigned __int64)v14 >> 3) & 1);
    *(_DWORD *)(v6 + 28) |= 8u;
    v4 = sub_1405FD31C(
           *(_QWORD *)(a1 + 800),
           v11,
           v10,
           v13,
           -(__int64)*(unsigned int *)(a1 + 792) & ((unsigned __int64)&v9[4 * *v9 + 2] + *(unsigned int *)(a1 + 792) + 3),
           v6 | 1);
    if ( v4 < 0 )
    {
      *(_DWORD *)(v6 + 28) |= 1u;
      v15 = *(_QWORD *)(v6 + 16);
      if ( v15 )
        *(_DWORD *)(v15 + 4) = v4;
      else
        *v7 = v4;
      *(_QWORD *)v6 = *(_DWORD *)v6 & 7 | ((*(_QWORD *)a2[1] & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      *(_QWORD *)a2[1] = v6 | *(_DWORD *)a2[1] & 7;
      a2[1] = v6;
      return (unsigned int)v4;
    }
  }
  return (unsigned int)v4;
}
