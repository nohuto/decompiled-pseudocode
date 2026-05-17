/*
 * XREFs of RtlAllocateHandle @ 0x180062CB0
 * Callers:
 *     RtlpInsertStringAtom @ 0x180062C20 (RtlpInsertStringAtom.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180024530 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 */

unsigned __int64 *__fastcall RtlAllocateHandle(__int64 a1, _DWORD *a2)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 *v5; // rcx
  unsigned int v7; // ecx
  int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // esi
  void *ProcessHeap; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  char *v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // rax
  unsigned __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 *v21; // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+80h] [rbp+40h] BYREF
  __int64 v23; // [rsp+88h] [rbp+48h] BYREF

  v2 = (unsigned __int64 *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      v7 = *(_DWORD *)(a1 + 12);
      if ( v7 <= *(_DWORD *)a1 )
      {
        v8 = *(_DWORD *)(a1 + 4);
        v9 = *(_QWORD *)(a1 + 24);
        v10 = v7 * v8;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        v12 = v10 + 8 * v8;
        v13 = v9
            ? RtlReAllocateHeap((__int64)ProcessHeap, 8, v9, (unsigned int)v12)
            : RtlAllocateHeap((__int64)ProcessHeap, 8u, v10 + 8 * v8);
        v22 = v13;
        if ( v13 )
        {
          *(_DWORD *)(a1 + 12) += 8;
          v14 = (char *)(v12 + v13);
          v15 = v13 + v10;
          *(_QWORD *)(a1 + 24) = v13;
          v21 = (unsigned __int64 *)v15;
          goto LABEL_11;
        }
      }
    }
    else
    {
      v17 = *(unsigned __int64 **)(a1 + 32);
      if ( !v17 )
      {
        v18 = (unsigned int)(*(_DWORD *)a1 * *(_DWORD *)(a1 + 4));
        v22 = 0LL;
        v23 = v18;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v22, 0LL, &v23, 0x2000, 4) < 0 )
          return 0LL;
        v19 = v22;
        *(_QWORD *)(a1 + 32) = v22;
        v17 = *(unsigned __int64 **)(a1 + 32);
        *(_QWORD *)(a1 + 24) = v19;
        *(_QWORD *)(a1 + 40) = v23 + v19;
      }
      v21 = v17;
      if ( (unsigned __int64)v17 < *(_QWORD *)(a1 + 40) )
      {
        v20 = 4096LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v21, 0LL, &v20, 4096, 4) >= 0 )
        {
          v15 = (unsigned __int64)v21;
          v14 = (char *)v21 + v20;
LABEL_11:
          *(_QWORD *)(a1 + 32) = v14;
          v16 = v2;
          if ( v15 < (unsigned __int64)v14 )
          {
            do
            {
              *v16 = v15;
              v16 = v21;
              v15 = (unsigned __int64)v21 + *(unsigned int *)(a1 + 4);
              v21 = (unsigned __int64 *)v15;
            }
            while ( v15 < *(_QWORD *)(a1 + 32) );
          }
          goto LABEL_2;
        }
      }
    }
    return 0LL;
  }
LABEL_2:
  v5 = (unsigned __int64 *)*v2;
  v21 = v5;
  *v2 = *v5;
  *v5 = 0LL;
  if ( a2 )
    *a2 = ((__int64)v21 - *(_QWORD *)(a1 + 24)) / *(unsigned int *)(a1 + 4);
  return v21;
}
