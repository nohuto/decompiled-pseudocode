/*
 * XREFs of PsspCaptureThreadInformation @ 0x18006117C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180060B70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x180034EC0 (RtlGetExtendedContextLength.c)
 *     PsspFreeLinkedHandleList @ 0x18006147C (PsspFreeLinkedHandleList.c)
 *     PsspDumpThread @ 0x180061500 (PsspDumpThread.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A49B0 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x1800A6020 (ZwGetNextThread.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, void *a2, unsigned int a3, ULONG a4)
{
  unsigned int v4; // ebx
  _WORD *v6; // r14
  _WORD *v7; // rdi
  ACCESS_MASK v8; // r12d
  unsigned int v9; // r15d
  NTSTATUS NextThread; // eax
  int v11; // ecx
  HANDLE v12; // rdx
  NTSTATUS v13; // esi
  unsigned __int16 v14; // ax
  int v15; // edi
  unsigned __int64 v16; // rcx
  PVOID v17; // rdx
  int v18; // r15d
  _WORD *v19; // rsi
  unsigned int v20; // r12d
  int v21; // eax
  NTSTATUS v22; // r15d
  NTSTATUS ExtendedContextLength; // eax
  int Flags; // [rsp+28h] [rbp-69h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-39h] BYREF
  HANDLE ThreadHandle; // [rsp+60h] [rbp-31h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-29h] BYREF
  HANDLE NewThreadHandle; // [rsp+70h] [rbp-21h] BYREF
  PVOID v30; // [rsp+78h] [rbp-19h] BYREF
  HANDLE SectionHandle; // [rsp+80h] [rbp-11h] BYREF
  int v32; // [rsp+88h] [rbp-9h]
  int v33[2]; // [rsp+90h] [rbp-1h] BYREF
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
  if ( NextThread != -2147483622 )
  {
    while ( 1 )
    {
      v11 = (int)NewThreadHandle;
      ThreadHandle = NewThreadHandle;
      v12 = NewThreadHandle;
      if ( NextThread < 0 )
        break;
      if ( !v7 || (v14 = v7[5], v14 >= v7[4]) )
      {
        RegionSize = 1LL;
        BaseAddress = 0LL;
        v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
        if ( v13 < 0 )
          goto LABEL_35;
        if ( v6 )
        {
          *(_QWORD *)v7 = BaseAddress;
          v7 = BaseAddress;
        }
        else
        {
          v7 = BaseAddress;
          v6 = BaseAddress;
        }
        v12 = ThreadHandle;
        v7[4] = (RegionSize - 16) >> 2;
        v14 = 0;
        v7[5] = 0;
        v11 = (int)NewThreadHandle;
      }
      ++v9;
      *(_DWORD *)&v7[2 * v14 + 6] = v11;
      ++v7[5];
      NextThread = ZwGetNextThread(a2, v12, v8, 0, 0, &NewThreadHandle);
      if ( NextThread == -2147483622 )
      {
        if ( !v9 )
          return 0LL;
        v15 = 0;
        LODWORD(ThreadHandle) = 0;
        if ( v32 )
        {
          if ( (a3 & 0x200) == 0
            || (ExtendedContextLength = RtlGetExtendedContextLength(a4, (PULONG)&ThreadHandle),
                v15 = (int)ThreadHandle,
                ExtendedContextLength < 0) )
          {
            v15 = 1232;
          }
        }
        *(_DWORD *)(a1 + 1024) = v15;
        v16 = v9 * (unsigned __int64)(((v15 + 15) & 0xFFFFFFF0) + 128);
        if ( v16 > 0xFFFFFFFF )
        {
          v13 = -1073741675;
        }
        else
        {
          MaximumSize.QuadPart = (unsigned int)v16;
          v13 = NtCreateSection(
                  &SectionHandle,
                  0xF0007u,
                  (POBJECT_ATTRIBUTES)&ObjectAttributes,
                  &MaximumSize,
                  4u,
                  0x8000000u,
                  0LL);
          if ( v13 >= 0 )
          {
            v30 = 0LL;
            RegionSize = 0LL;
            v13 = ZwMapViewOfSection(
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
            if ( v13 >= 0 )
            {
              v17 = v30;
              v18 = 0;
              v19 = v6;
              *(_QWORD *)v33 = v30;
              v34 = RegionSize;
              v35 = 0LL;
              if ( v6 )
              {
                do
                {
                  v20 = 0;
                  if ( v19[5] )
                  {
                    do
                    {
                      NewThreadHandle = (HANDLE)*(unsigned int *)&v19[2 * v20 + 6];
                      v21 = PsspDumpThread((int)v33, a3, a4, v15, Flags, NewThreadHandle);
                      v22 = v21;
                      if ( v21 == -1073741789 )
                        break;
                      if ( v21 < 0 )
                      {
                        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30);
                        NtClose(SectionHandle);
                        v13 = v22;
                        goto LABEL_35;
                      }
                      ++v20;
                    }
                    while ( v20 < (unsigned __int16)v19[5] );
                    if ( v21 < 0 )
                      break;
                  }
                  v19 = *(_WORD **)v19;
                }
                while ( v19 );
                v17 = v30;
                v18 = HIDWORD(v35);
                v4 = v35;
              }
              NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v17);
              PsspFreeLinkedHandleList(v6);
              *(_QWORD *)(a1 + 1000) = v4;
              *(_QWORD *)(a1 + 1008) = SectionHandle;
              *(_DWORD *)(a1 + 992) = v18;
              *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
              return 0LL;
            }
            NtClose(SectionHandle);
          }
        }
LABEL_35:
        PsspFreeLinkedHandleList(v6);
        return (unsigned int)v13;
      }
    }
    v13 = NextThread;
    goto LABEL_35;
  }
  return 0LL;
}
