/*
 * XREFs of PsspCaptureHandleInformation @ 0x1800616F0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180060B70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     PsspWalkHandleTable @ 0x180061930 (PsspWalkHandleTable.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A49B0 (NtCreateSection.c)
 */

NTSTATUS __fastcall PsspCaptureHandleInformation(__int64 a1, void *a2, int a3)
{
  NTSTATUS result; // eax
  ULONG v7; // esi
  int v8; // ebx
  PVOID Heap; // rax
  NTSTATUS v10; // esi
  PVOID v11; // [rsp+58h] [rbp-19h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-11h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-9h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-1h] BYREF
  HANDLE SectionHandle; // [rsp+78h] [rbp+7h] BYREF
  __int64 v16; // [rsp+80h] [rbp+Fh] BYREF
  int v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+8Ch] [rbp+1Bh]
  int ProcessInformation; // [rsp+98h] [rbp+27h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 v21; // [rsp+F0h] [rbp+7Fh] BYREF

  result = NtQueryInformationProcess(a2, ProcessHandleCount, &ProcessInformation, 8u, 0LL);
  if ( result < 0 )
    return result;
  v7 = 4 * ProcessInformation;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    v11 = 0LL;
    ViewSize = (unsigned int)(4 * ProcessInformation);
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v11, 0LL, &ViewSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    Heap = v11;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(4 * ProcessInformation));
    v11 = Heap;
    if ( !Heap )
      return -1073741670;
  }
  v10 = NtQueryInformationProcess(a2, ProcessHandleTable, Heap, v7, &ReturnLength);
  if ( v10 < 0 )
  {
    if ( !v8 )
    {
LABEL_19:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      return v10;
    }
LABEL_15:
    ViewSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v11, &ViewSize, 0x8000u);
    return v10;
  }
  LODWORD(v21) = 0;
  PsspWalkHandleTable(a2, (__int64)PsspHandleStreamSizeCalculator, (__int64)&v21);
  MaximumSize.QuadPart = (unsigned int)v21;
  v10 = NtCreateSection(
          &SectionHandle,
          0xF0007u,
          (POBJECT_ATTRIBUTES)&stru_180131FC8,
          &MaximumSize,
          4u,
          0x8000000u,
          0LL);
  if ( v10 < 0 )
  {
LABEL_18:
    if ( !v8 )
      goto LABEL_19;
    goto LABEL_15;
  }
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v10 = ZwMapViewOfSection(
          SectionHandle,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          0LL,
          0LL,
          &ViewSize,
          ViewShare,
          0,
          4u);
  if ( v10 < 0 )
  {
    NtClose(SectionHandle);
    goto LABEL_18;
  }
  v16 = (__int64)BaseAddress;
  LODWORD(v21) = ViewSize;
  v17 = ViewSize;
  v18 = 0LL;
  PsspWalkHandleTable(a2, (__int64)PsspHandleDumper, (__int64)&v16);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( v8 )
  {
    ViewSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v11, &ViewSize, 0x8000u);
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  }
  *(_DWORD *)(a1 + 960) = HIDWORD(v18);
  *(_QWORD *)(a1 + 968) = (unsigned int)v18;
  *(_QWORD *)(a1 + 976) = SectionHandle;
  *(_QWORD *)(a1 + 984) = MEMORY[0x7FFE0014];
  return 0;
}
