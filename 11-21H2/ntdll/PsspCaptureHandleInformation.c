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
  void *Heap; // rax
  NTSTATUS v10; // esi
  ULONG v11; // r12d
  void *v12; // [rsp+58h] [rbp-19h] BYREF
  __int64 v13; // [rsp+60h] [rbp-11h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-9h] BYREF
  __int64 v15; // [rsp+70h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+7h] BYREF
  __int64 v17; // [rsp+80h] [rbp+Fh] BYREF
  int v18; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+8Ch] [rbp+1Bh]
  int ProcessInformation; // [rsp+98h] [rbp+27h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+2Fh] BYREF
  unsigned int v22; // [rsp+F0h] [rbp+7Fh] BYREF

  result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)20, &ProcessInformation, 8u, 0LL);
  if ( result < 0 )
    return result;
  v7 = 4 * ProcessInformation;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    v12 = 0LL;
    v13 = (unsigned int)(4 * ProcessInformation);
    result = ZwAllocateVirtualMemory(-1LL, &v12, 0LL, &v13, 4096, 4);
    if ( result < 0 )
      return result;
    Heap = v12;
  }
  else
  {
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(4 * ProcessInformation));
    v12 = Heap;
    if ( !Heap )
      return -1073741670;
  }
  v10 = NtQueryInformationProcess(a2, ProcessWow64Information|0x20, Heap, v7, &ReturnLength);
  if ( v10 < 0 )
  {
    if ( !v8 )
    {
LABEL_19:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v12);
      return v10;
    }
LABEL_15:
    v13 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v12, &v13, 0x8000LL);
    return v10;
  }
  v11 = ReturnLength >> 2;
  v22 = 0;
  PsspWalkHandleTable(
    (_DWORD)a2,
    (_DWORD)v12,
    ReturnLength >> 2,
    a3,
    (__int64)PsspHandleStreamSizeCalculator,
    (__int64)&v22);
  v21 = v22;
  v10 = NtCreateSection(&Handle, 983047LL, L"0", &v21, 4, 0x8000000, 0LL);
  if ( v10 < 0 )
  {
LABEL_18:
    if ( !v8 )
      goto LABEL_19;
    goto LABEL_15;
  }
  v15 = 0LL;
  v13 = 0LL;
  v10 = ZwMapViewOfSection(Handle, -1LL, &v15, 0LL, 0LL, 0LL, &v13, 1, 0, 4);
  if ( v10 < 0 )
  {
    NtClose(Handle);
    goto LABEL_18;
  }
  v17 = v15;
  v22 = v13;
  v18 = v13;
  v19 = 0LL;
  PsspWalkHandleTable((_DWORD)a2, (_DWORD)v12, v11, a3, (__int64)PsspHandleDumper, (__int64)&v17);
  NtUnmapViewOfSection(-1LL);
  if ( v8 )
  {
    v13 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v12, &v13, 0x8000LL);
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v12);
  }
  *(_DWORD *)(a1 + 960) = HIDWORD(v19);
  *(_QWORD *)(a1 + 968) = (unsigned int)v19;
  *(_QWORD *)(a1 + 976) = Handle;
  *(_QWORD *)(a1 + 984) = MEMORY[0x7FFE0014];
  return 0;
}
