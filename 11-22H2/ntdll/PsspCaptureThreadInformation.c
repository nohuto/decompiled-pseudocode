/*
 * XREFs of PsspCaptureThreadInformation @ 0x180129CD0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180127370 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x180054950 (RtlGetExtendedContextLength.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x1800A0DC0 (ZwGetNextThread.c)
 *     PsspDumpThread @ 0x18012A030 (PsspDumpThread.c)
 *     PsspFreeLinkedHandleList @ 0x18012A258 (PsspFreeLinkedHandleList.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, void *a2, unsigned int a3, ULONG a4)
{
  unsigned int v4; // ebx
  _WORD *v6; // rdi
  unsigned __int16 *v7; // rsi
  ACCESS_MASK v8; // r12d
  unsigned int v9; // r15d
  NTSTATUS NextThread; // r14d
  __int64 v11; // rdx
  int v12; // ecx
  ULONG_PTR v13; // rax
  unsigned int v14; // esi
  NTSTATUS ExtendedContextLength; // eax
  unsigned __int64 v16; // rcx
  PVOID v18; // rdx
  int v19; // r15d
  _WORD *v20; // r14
  unsigned int v21; // r12d
  int v22; // eax
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rdx
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-39h] BYREF
  HANDLE ThreadHandle; // [rsp+60h] [rbp-31h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-29h] BYREF
  HANDLE NewThreadHandle; // [rsp+70h] [rbp-21h] BYREF
  PVOID v30; // [rsp+78h] [rbp-19h] BYREF
  HANDLE SectionHandle; // [rsp+80h] [rbp-11h] BYREF
  int v32; // [rsp+88h] [rbp-9h]
  PVOID v33; // [rsp+90h] [rbp-1h] BYREF
  int v34; // [rsp+98h] [rbp+7h]
  __int64 v35; // [rsp+9Ch] [rbp+Bh]
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp+17h] BYREF

  v4 = 0;
  v32 = a3 & 0x100;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (a3 >> 7) & 8 | (v32 != 0 ? 72 : 64);
  v9 = 0;
  NextThread = ZwGetNextThread(a2, 0LL, v8, 0, 0, &NewThreadHandle);
  if ( NextThread == -2147483622 )
    return 0LL;
  v11 = 1LL;
  do
  {
    v12 = (int)NewThreadHandle;
    ThreadHandle = NewThreadHandle;
    if ( NextThread < 0 )
      goto LABEL_21;
    if ( !v7 || v7[5] >= v7[4] )
    {
      RegionSize = 1LL;
      BaseAddress = 0LL;
      NextThread = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( NextThread < 0 )
        goto LABEL_21;
      if ( v6 )
      {
        *(_QWORD *)v7 = BaseAddress;
        v7 = (unsigned __int16 *)BaseAddress;
      }
      else
      {
        v7 = (unsigned __int16 *)BaseAddress;
        v6 = BaseAddress;
      }
      LODWORD(v11) = 1;
      v13 = RegionSize - 16;
      v7[5] = 0;
      v7[4] = v13 >> 2;
      v12 = (int)NewThreadHandle;
    }
    v9 += v11;
    *(_DWORD *)&v7[2 * v7[5] + 6] = v12;
    v7[5] += v11;
    NextThread = ZwGetNextThread(a2, ThreadHandle, v8, 0, 0, &NewThreadHandle);
    v11 = 1LL;
  }
  while ( NextThread != -2147483622 );
  if ( !v9 )
    return 0LL;
  v14 = 0;
  LODWORD(ThreadHandle) = 0;
  if ( v32 )
  {
    if ( (a3 & 0x200) == 0
      || (ExtendedContextLength = RtlGetExtendedContextLength(a4, (PULONG)&ThreadHandle),
          v14 = (unsigned int)ThreadHandle,
          ExtendedContextLength < 0) )
    {
      v14 = 1232;
    }
  }
  *(_DWORD *)(a1 + 1024) = v14;
  v16 = v9 * (unsigned __int64)(((v14 + 15) & 0xFFFFFFF0) + 128);
  if ( v16 <= 0xFFFFFFFF )
  {
    MaximumSize.QuadPart = (unsigned int)v16;
    NextThread = NtCreateSection(
                   &SectionHandle,
                   0xF0007u,
                   (POBJECT_ATTRIBUTES)&stru_18015A100,
                   &MaximumSize,
                   4u,
                   0x8000000u,
                   0LL);
    if ( NextThread < 0 )
    {
LABEL_21:
      PsspFreeLinkedHandleList(v6, v11);
      return (unsigned int)NextThread;
    }
    v30 = 0LL;
    RegionSize = 0LL;
    NextThread = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &v30,
                   0LL,
                   0LL,
                   0LL,
                   &RegionSize,
                   ViewShare,
                   0,
                   4u);
    if ( NextThread < 0 )
    {
      NtClose(SectionHandle);
      goto LABEL_21;
    }
    v18 = v30;
    v19 = 0;
    v20 = v6;
    v33 = v30;
    v34 = RegionSize;
    v35 = 0LL;
    if ( v6 )
    {
      do
      {
        v21 = 0;
        if ( v20[5] )
        {
          do
          {
            NewThreadHandle = (HANDLE)*(unsigned int *)&v20[2 * v21 + 6];
            v22 = PsspDumpThread(&v33, a3, a4, v14);
            v23 = v22;
            if ( v22 == -1073741789 )
              break;
            if ( v22 < 0 )
            {
              NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30);
              NtClose(SectionHandle);
              PsspFreeLinkedHandleList(v6, v25);
              return v23;
            }
            ++v21;
          }
          while ( v21 < (unsigned __int16)v20[5] );
          if ( v22 < 0 )
            break;
        }
        v20 = *(_WORD **)v20;
      }
      while ( v20 );
      v18 = v30;
      v19 = HIDWORD(v35);
      v4 = v35;
    }
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v18);
    PsspFreeLinkedHandleList(v6, v24);
    *(_QWORD *)(a1 + 1000) = v4;
    *(_QWORD *)(a1 + 1008) = SectionHandle;
    *(_DWORD *)(a1 + 992) = v19;
    *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
    return 0LL;
  }
  PsspFreeLinkedHandleList(v6, v11);
  return 3221225621LL;
}
