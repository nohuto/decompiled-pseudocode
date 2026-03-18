/*
 * XREFs of ACPIIoctlCalculateOutputBufferV2 @ 0x1C00040B2
 * Callers:
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C00040B2 (ACPIIoctlCalculateOutputBufferV2.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C000449A (ACPIIoctlEvalPostProcessingV2.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x1C0003FB0 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C00040B2 (ACPIIoctlCalculateOutputBufferV2.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferV2(__int64 a1, unsigned __int64 a2, char a3, char a4)
{
  __int16 v5; // cx
  unsigned __int64 v8; // rbx
  unsigned int *v9; // r12
  __int64 result; // rax
  __int64 v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebp
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  int v17[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_WORD *)(a1 + 2);
  v8 = a2;
  if ( v5 == 1 )
  {
    *(_WORD *)a2 = 0;
    if ( a3 == 1 )
    {
      *(_DWORD *)(a2 + 4) = 8;
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 16);
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 4;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 16);
    }
  }
  else if ( (unsigned __int16)(v5 - 2) <= 1u )
  {
    *(_WORD *)a2 = (v5 != 2) + 1;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 24);
    memmove((void *)(a2 + 8), *(const void **)(a1 + 32), *(unsigned int *)(a1 + 24));
  }
  else
  {
    if ( v5 != 4 )
      return 3222536207LL;
    v9 = *(unsigned int **)(a1 + 32);
    v18 = 0;
    v17[0] = 0;
    result = ACPIIoctlCalculateOutputBufferSizeV2(a1, &v18, v17, a3, 1);
    if ( (int)result < 0 )
      return result;
    if ( a4 )
    {
      v13 = v18;
    }
    else
    {
      *(_WORD *)v8 = 3;
      v12 = v18;
      *(_DWORD *)(v8 + 4) = v18;
      v8 += 8LL;
      if ( v12 < 4 )
        v12 = 4;
      v13 = v12 + 8;
    }
    v14 = 0;
    v15 = v8 + v13;
    while ( v8 < v15 && v14 < *v9 )
    {
      LOBYTE(v11) = a3;
      result = ACPIIoctlCalculateOutputBufferV2(&v9[8 * v14 + 2 + 2 * v14], v8, v11, 0LL);
      if ( (int)result < 0 )
        return result;
      v16 = *(unsigned int *)(v8 + 4);
      ++v14;
      if ( (unsigned int)v16 < 4 )
        v16 = 4LL;
      v8 += v16 + 8;
    }
  }
  return 0LL;
}
