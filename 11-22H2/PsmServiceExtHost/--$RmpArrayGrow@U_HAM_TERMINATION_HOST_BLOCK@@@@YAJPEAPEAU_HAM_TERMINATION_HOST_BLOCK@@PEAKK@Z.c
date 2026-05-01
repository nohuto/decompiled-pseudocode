/*
 * XREFs of ??$RmpArrayGrow@U_HAM_TERMINATION_HOST_BLOCK@@@@YAJPEAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAKK@Z @ 0x18003EF4C
 * Callers:
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003EEB0 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

__int64 __fastcall RmpArrayGrow<_HAM_TERMINATION_HOST_BLOCK>(void **a1, unsigned int *a2, unsigned int a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // ebp
  unsigned int v8; // ebx
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // kr00_8
  void *v11; // r8
  PVOID ProcessHeap; // rcx
  char *Heap; // rax
  PVOID v14; // rdi

  if ( *a2 >= a3 )
  {
    return 0;
  }
  else
  {
    v5 = a3 - 1;
    if ( ((unsigned int)v5 & a3) != 0 )
      v6 = ((((((((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 4) | (((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 8) | (((((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 4) | (((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5 | (((((((((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 4) | (((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 8) | (((((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 4) | (((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 16))
         + 1;
    else
      v6 = 2 * a3;
    if ( v6 <= 0xFFFFFFFF
      && (v7 = v6,
          v8 = 0,
          v10 = (unsigned int)v6,
          v9 = (unsigned int)v6 * (unsigned __int128)0x10uLL,
          is_mul_ok(v10, 0x10uLL)) )
    {
      v11 = *a1;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( *a1 )
        Heap = (char *)RtlReAllocateHeap(ProcessHeap, DWORD2(v9), v11, v9);
      else
        Heap = (char *)RtlAllocateHeap(ProcessHeap, DWORD2(v9), v9);
      v14 = Heap;
      if ( Heap )
      {
        memset_0(&Heap[16 * *a2], 0, 16LL * (v7 - *a2));
        *a2 = v7;
        *a1 = v14;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  return v8;
}
