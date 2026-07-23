/*
 * XREFs of LdrAddLoadAsDataTable @ 0x1800088C0
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 * Callees:
 *     LdrRemoveLoadAsDataTable @ 0x180008560 (LdrRemoveLoadAsDataTable.c)
 *     LdrpInitMuiCrits @ 0x180008BC4 (LdrpInitMuiCrits.c)
 *     LdrLogNewDataDllLoad @ 0x180008C28 (LdrLogNewDataDllLoad.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlReAllocateHeap @ 0x180042320 (RtlReAllocateHeap.c)
 *     Feature_Servicing_CritsecInit__private_IsEnabled @ 0x18009E30C (Feature_Servicing_CritsecInit__private_IsEnabled.c)
 *     LdrpInitMuiCritsRtlInitOnce @ 0x18009E3DC (LdrpInitMuiCritsRtlInitOnce.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

NTSTATUS __cdecl LdrAddLoadAsDataTable(
        PVOID Module,
        PWSTR FilePath,
        SIZE_T Size,
        HANDLE Handle,
        PACTIVATION_CONTEXT ActCtx)
{
  NTSTATUS v9; // ebx
  unsigned int v11; // edi
  PVOID *v12; // r8
  PVOID *v13; // rax
  PVOID *Heap; // rax
  PVOID v15; // rdi
  __int64 v16; // rax
  size_t v17; // rbx
  PVOID v18; // rax
  __int64 v19; // rdx

  v9 = 0;
  if ( !Module )
    return -1073741811;
  if ( (unsigned int)Feature_Servicing_CritsecInit__private_IsEnabled() )
    LdrpInitMuiCritsRtlInitOnce();
  else
    LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v11 = 0;
  v12 = (PVOID *)LoadAsDataTable;
  while ( v11 < LoadAsDataTableCount )
  {
    if ( v12[6 * v11] == Module )
    {
      LdrRemoveLoadAsDataTable(Module, 0LL, 0LL, 0);
      v12 = (PVOID *)LoadAsDataTable;
    }
    ++v11;
  }
  if ( v12 )
  {
    if ( LoadAsDataTableCount < (unsigned int)LoadAsDataTableBlockCount )
      goto LABEL_19;
    Heap = (PVOID *)RtlReAllocateHeap(
                      NtCurrentPeb()->ProcessHeap,
                      0,
                      LoadAsDataTable,
                      48LL * (unsigned int)(LoadAsDataTableBlockCount + 32));
    v12 = Heap;
    if ( !Heap )
      goto LABEL_13;
    LoadAsDataTable = Heap;
    LoadAsDataTableBlockCount += 32;
  }
  else
  {
    v13 = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x600uLL);
    v12 = v13;
    if ( !v13 )
    {
LABEL_13:
      v9 = -1073741801;
      goto LABEL_25;
    }
    LoadAsDataTable = v13;
    LoadAsDataTableBlockCount = 32;
  }
  v9 = 0;
LABEL_19:
  v15 = 0LL;
  if ( FilePath )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( FilePath[v16] );
    v17 = 2 * v16;
    v18 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v16 + 2);
    v15 = v18;
    if ( !v18 )
      goto LABEL_13;
    memmove(v18, FilePath, v17);
    v9 = 0;
    v12 = (PVOID *)LoadAsDataTable;
  }
  v19 = 6LL * (unsigned int)LoadAsDataTableCount;
  v12[v19] = Module;
  v12[v19 + 1] = v15;
  v12[v19 + 2] = (PVOID)Size;
  v12[v19 + 3] = Handle;
  LODWORD(v12[v19 + 4]) = 1;
  v12[v19 + 5] = ActCtx;
  ++LoadAsDataTableCount;
LABEL_25:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  if ( v9 >= 0 && FilePath )
    LdrLogNewDataDllLoad(Module, FilePath);
  return v9;
}
