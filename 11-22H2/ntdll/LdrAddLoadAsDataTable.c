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

__int64 __fastcall LdrAddLoadAsDataTable(wchar_t *String2, _WORD *Src, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  unsigned int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 Heap; // rax
  void *v15; // rdi
  __int64 v16; // rax
  size_t v17; // rbx
  void *v18; // rax
  __int64 v19; // rdx

  v9 = 0;
  if ( !String2 )
    return 3221225485LL;
  if ( (unsigned int)Feature_Servicing_CritsecInit__private_IsEnabled() )
    LdrpInitMuiCritsRtlInitOnce();
  else
    LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v11 = 0;
  v12 = LoadAsDataTable;
  while ( v11 < LoadAsDataTableCount )
  {
    if ( *(wchar_t **)(v12 + 48LL * v11) == String2 )
    {
      LdrRemoveLoadAsDataTable(String2, 0LL, 0LL, 0);
      v12 = LoadAsDataTable;
    }
    ++v11;
  }
  if ( v12 )
  {
    if ( LoadAsDataTableCount < (unsigned int)LoadAsDataTableBlockCount )
      goto LABEL_19;
    Heap = RtlReAllocateHeap(
             NtCurrentPeb()->ProcessHeap,
             0LL,
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
    v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 1536LL);
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
  if ( Src )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( Src[v16] );
    v17 = 2 * v16;
    v18 = (void *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 2 * v16 + 2);
    v15 = v18;
    if ( !v18 )
      goto LABEL_13;
    memmove(v18, Src, v17);
    v9 = 0;
    v12 = LoadAsDataTable;
  }
  v19 = 6LL * (unsigned int)LoadAsDataTableCount;
  *(_QWORD *)(v12 + 8 * v19) = String2;
  *(_QWORD *)(v12 + 8 * v19 + 8) = v15;
  *(_QWORD *)(v12 + 8 * v19 + 16) = a3;
  *(_QWORD *)(v12 + 8 * v19 + 24) = a4;
  *(_DWORD *)(v12 + 8 * v19 + 32) = 1;
  *(_QWORD *)(v12 + 8 * v19 + 40) = a5;
  ++LoadAsDataTableCount;
LABEL_25:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  if ( v9 >= 0 && Src )
    LdrLogNewDataDllLoad(String2, Src);
  return (unsigned int)v9;
}
