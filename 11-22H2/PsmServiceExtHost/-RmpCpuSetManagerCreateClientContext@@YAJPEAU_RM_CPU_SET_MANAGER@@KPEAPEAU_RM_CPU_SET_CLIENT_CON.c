/*
 * XREFs of ?RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x1800456A0
 * Callers:
 *     ?RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180044AF0 (-RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x180083924 (-RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

__int64 __fastcall RmpCpuSetManagerCreateClientContext(
        struct _RM_CPU_SET_MANAGER *a1,
        int a2,
        struct _RM_CPU_SET_CLIENT_CONTEXT **a3)
{
  char *Heap; // rax
  unsigned int v7; // edi
  char *v8; // rbx
  struct _RM_CPU_SET_MANAGER *v9; // rax
  struct _RM_CPU_SET_MANAGER **v10; // rdx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x40uLL);
    *(_QWORD *)v8 = a1;
    *((_QWORD *)v8 + 4) = v8 + 24;
    *((_QWORD *)v8 + 3) = v8 + 24;
    *((_QWORD *)v8 + 6) = v8 + 40;
    *((_QWORD *)v8 + 5) = v8 + 40;
    v9 = (struct _RM_CPU_SET_MANAGER *)(v8 + 8);
    *((_DWORD *)v8 + 14) = a2;
    v10 = (struct _RM_CPU_SET_MANAGER **)*((_QWORD *)a1 + 2);
    if ( *v10 != (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 8) )
      __fastfail(3u);
    *(_QWORD *)v9 = (char *)a1 + 8;
    *((_QWORD *)v8 + 2) = v10;
    *v10 = v9;
    *((_QWORD *)a1 + 2) = v9;
    *a3 = (struct _RM_CPU_SET_CLIENT_CONTEXT *)v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
