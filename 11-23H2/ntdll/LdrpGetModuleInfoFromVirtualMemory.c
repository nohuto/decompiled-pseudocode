/*
 * XREFs of LdrpGetModuleInfoFromVirtualMemory @ 0x180088618
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpMUIEtwOutput @ 0x1800ED230 (LdrpMUIEtwOutput.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     wcsrchr @ 0x1800953B0 (wcsrchr.c)
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall LdrpGetModuleInfoFromVirtualMemory(
        PVOID BaseAddress,
        void *a2,
        unsigned __int16 a3,
        _DWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _BYTE *a7)
{
  SIZE_T MemoryInformationLength; // rbx
  const void **Heap; // rbp
  __int64 v12; // rsi
  NTSTATUS v13; // edi
  __int64 v14; // rax
  ULONG_PTR v15; // r8
  wchar_t *v16; // rax
  _WORD *v17; // rbx
  _QWORD *v18; // r14
  __int64 v19; // rsi
  PVOID v20; // rax
  ULONG_PTR ReturnLength; // [rsp+68h] [rbp+10h] BYREF

  MemoryInformationLength = a3;
  Heap = (const void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, a3);
  if ( !Heap )
    return (unsigned int)-1073741801;
  v12 = -1LL;
  v13 = ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          BaseAddress,
          MemoryMappedFilenameInformation,
          Heap,
          MemoryInformationLength,
          &ReturnLength);
  if ( v13 >= 0 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)Heap[1] + v14) );
    v15 = 2 * v14 + 2;
    ReturnLength = v15;
    if ( v15 >= MemoryInformationLength )
    {
      v13 = -2147483643;
    }
    else
    {
      memmove(a2, Heap[1], v15);
      v16 = wcsrchr((const wchar_t *)a2, 0x5Cu);
      if ( v16 )
      {
        v17 = v16 + 1;
        do
          ++v12;
        while ( v17[v12] );
        v18 = a5;
        v19 = (unsigned int)(2 * v12);
        if ( !a5 )
          goto LABEL_12;
        v20 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v19 + 2);
        *v18 = v20;
        if ( v20 )
        {
          memmove(v20, v17, v19 + 2);
LABEL_12:
          if ( a6 )
            *a6 = v19;
          if ( a4 )
            *a4 = 2 * (((char *)v17 - (_BYTE *)a2) >> 1);
          if ( a7 )
            *a7 = 1;
          goto LABEL_18;
        }
        v13 = -1073741801;
      }
      else
      {
        v13 = -1073741767;
      }
    }
  }
LABEL_18:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v13;
}
