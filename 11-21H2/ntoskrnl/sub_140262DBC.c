/*
 * XREFs of sub_140262DBC @ 0x140262DBC
 * Callers:
 *     sub_140262D00 @ 0x140262D00 (sub_140262D00.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140262DBC(__int64 a1, int **a2, _QWORD *a3)
{
  unsigned int v4; // edi
  LARGE_INTEGER v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r12
  int *v9; // r14
  int *v10; // rax
  unsigned int v11; // ebp
  int *PoolWithTag; // rax
  int *v13; // r8
  int *v14; // r9
  __int64 v15; // r10
  __int64 v16; // rcx
  int v17; // eax
  LARGE_INTEGER v20; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v20.QuadPart = 0LL;
  KeQueryPerformanceCounter(&v20);
  v6 = v20;
  if ( v20.QuadPart )
  {
    v7 = 0LL;
    v8 = a1 - (_QWORD)a2;
    while ( 1 )
    {
      v9 = *a2;
      if ( *a2 )
      {
        v10 = *a2;
        v11 = 1;
        if ( *v9 != -1 )
        {
          do
          {
            v10 += 2;
            ++v11;
          }
          while ( *v10 != -1 );
        }
        PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 32 * v11, 0x74496D73u);
        v13 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741670;
        if ( v11 )
        {
          v14 = PoolWithTag;
          v15 = v11;
          do
          {
            v16 = (unsigned int)v9[1];
            v17 = *v9;
            v9 += 2;
            v14[1] = 0;
            *((_QWORD *)v14 + 2) = 0LL;
            *((_QWORD *)v14 + 3) = 0LL;
            *v14 = v17;
            v14 += 8;
            *((_QWORD *)v14 - 3) = v6.QuadPart * v16 / 1000000;
            --v15;
          }
          while ( v15 );
        }
        *(int **)((char *)a2 + v8 + 16) = v13;
      }
      ++v7;
      ++a2;
      if ( v7 >= 2 )
      {
        *(_QWORD *)(a1 + 32) = *a3;
        return v4;
      }
    }
  }
  return (unsigned int)-1073741637;
}
