/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x18005FF34
 * Callers:
 *     EtwpLogger @ 0x18005E0E0 (EtwpLogger.c)
 *     EtwpStartUmLogger @ 0x18005EB9C (EtwpStartUmLogger.c)
 *     EtwpBufferingModeFlush @ 0x180123F00 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180010B40 (RtlQueryPerformanceCounter.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800604EC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryPartitionRegistryInformationUm @ 0x18006073C (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpGetTimeZoneInformation @ 0x180060C80 (EtwpGetTimeZoneInformation.c)
 *     EtwpCreateFile @ 0x180060DEC (EtwpCreateFile.c)
 *     EtwpAddProviderTrackingInfo @ 0x18006126C (EtwpAddProviderTrackingInfo.c)
 *     EtwpGenerateFileName @ 0x180062318 (EtwpGenerateFileName.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtReadFile @ 0x18009EEB0 (NtReadFile.c)
 *     NtWriteFile @ 0x18009EEF0 (NtWriteFile.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18009F290 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x18009F2D0 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x18009F4B0 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x18009F710 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpAddLogHeaderToLogFile(__int64 a1, LARGE_INTEGER a2, int a3, char a4)
{
  bool v7; // zf
  __int64 v8; // r14
  SIZE_T Length; // r15
  NTSTATUS File; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // r13d
  LARGE_INTEGER *Heap; // rax
  LARGE_INTEGER *Buffer; // rsi
  LARGE_INTEGER *v16; // r12
  char *QuadPart; // rbx
  LARGE_INTEGER v18; // rax
  struct _PEB *v19; // rcx
  char v20; // r9
  char v21; // al
  int v22; // eax
  __int64 v23; // rcx
  LARGE_INTEGER *v24; // rbx
  LARGE_INTEGER v25; // rax
  int PartitionRegistryInformationUm; // eax
  HANDLE v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 LowPart; // r13
  int HighPart; // r15d
  NTSTATUS v33; // eax
  size_t v34; // rcx
  unsigned int v35; // edx
  char v36; // al
  char v37; // r10
  int v38; // eax
  int v39; // ecx
  int ReturnLength; // [rsp+20h] [rbp-E0h]
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  size_t Size; // [rsp+78h] [rbp-88h]
  PCWSTR FileInformation; // [rsp+80h] [rbp-80h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  char ThreadInformation[16]; // [rsp+98h] [rbp-68h] BYREF
  int v51; // [rsp+A8h] [rbp-58h]
  unsigned int v52; // [rsp+B0h] [rbp-50h]
  __int128 v53; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-28h]
  _OWORD v55[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v56; // [rsp+108h] [rbp+8h]
  _BYTE SystemInformation[4]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v58; // [rsp+124h] [rbp+24h]
  char FsInformation[20]; // [rsp+160h] [rbp+60h] BYREF
  int v60; // [rsp+174h] [rbp+74h]

  ByteOffset = a2;
  LODWORD(Size) = a3;
  v45 = 0;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  v7 = (*(_BYTE *)(a1 + 308) & 8) == 0;
  memset(v55, 0, sizeof(v55));
  FileHandle = 0LL;
  v8 = 0LL;
  v56 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  if ( !v7 )
    EtwpGenerateFileName(a1 + 168, a1 + 184, a1 + 152);
  Length = *(unsigned int *)(a1 + 192);
  FileInformation = *(PCWSTR *)(a1 + 160);
  PerformanceCounter.LowPart = Length;
  if ( a2.QuadPart )
  {
    v44 = a3;
    v13 = a3 + 79;
LABEL_10:
    Heap = (LARGE_INTEGER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    Buffer = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v16 = Heap + 9;
    File = EtwpCreateFile(FileInformation, ReturnLength, (__int64)&FileHandle);
    if ( File < 0 )
    {
      v27 = FileHandle;
    }
    else if ( a4 )
    {
      v27 = FileHandle;
      ByteOffset.QuadPart = 0LL;
      File = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
      if ( File >= 0 )
      {
        if ( (Buffer[17].LowPart & 2) == 0
          && BYTE4(Buffer[13].QuadPart) == MEMORY[0x7FFE026C]
          && BYTE5(Buffer[13].QuadPart) == MEMORY[0x7FFE0270]
          && Buffer[18].HighPart == 8 )
        {
          LowPart = Buffer[13].LowPart;
          HighPart = Buffer[17].HighPart;
          if ( (unsigned int)(LowPart - 1024) <= 0xFFFC00
            && HighPart
            && Buffer[15].QuadPart
            && Buffer[14].HighPart == *(_DWORD *)(a1 + 188) )
          {
            Buffer[15].QuadPart = 0LL;
            v33 = NtWriteFile(v27, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, *(_DWORD *)(a1 + 192), &ByteOffset, 0LL);
            *(_DWORD *)(a1 + 376) = HighPart;
            File = v33;
            *(_DWORD *)(a1 + 320) = HighPart;
            *(_DWORD *)(a1 + 192) = LowPart;
            *(_QWORD *)(a1 + 336) = LowPart;
            *(_QWORD *)(a1 + 128) = v27;
            *(_QWORD *)(a1 + 344) = (unsigned int)(LowPart * HighPart);
LABEL_37:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
            return (unsigned int)File;
          }
        }
        File = -1073741811;
      }
    }
    else
    {
      QuadPart = (char *)ByteOffset.QuadPart;
      Buffer->LowPart = Length;
      Buffer[6].HighPart = 262145;
      Buffer[6].LowPart = v13 & 0xFFFFFFF8;
      if ( QuadPart )
      {
        v34 = (unsigned int)Size;
        v35 = 0;
        if ( (_DWORD)Size )
        {
          do
          {
            v8 = (__int64)&QuadPart[v35 + 32];
            *(_DWORD *)(v8 + 32) = *(_DWORD *)(a1 + 308) & 0x4101000 | 0x10001;
            *(_DWORD *)(v8 + 36) = 1;
            *(_DWORD *)v8 = *(_DWORD *)(a1 + 192);
            if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0
              || *(_DWORD *)(a1 + 192) > 0x100000u
              || *(_DWORD *)(v8 + 12) > 0x100u )
            {
              v36 = 0;
              v37 = 2;
            }
            else
            {
              v36 = 5;
              v37 = 1;
            }
            *(_BYTE *)(v8 + 6) = v37;
            *(_BYTE *)(v8 + 7) = v36;
            v35 += (*(unsigned __int16 *)&QuadPart[v35 + 4] + 7) & 0xFFFFFFF8;
          }
          while ( v35 < (unsigned int)v34 );
          LODWORD(Length) = PerformanceCounter.LowPart;
          v16 = Buffer + 9;
        }
        if ( *(_DWORD *)(v8 + 44) == 4 )
          v38 = *(_DWORD *)(v8 + 264);
        else
          v38 = *(_DWORD *)(v8 + 272);
        *(_DWORD *)(a1 + 16) = v38;
        memmove(v16, QuadPart, v34);
      }
      else
      {
        v16->HighPart = v44;
        v16->LowPart = -1073610752;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v18.QuadPart = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v18.QuadPart = __rdtsc();
        }
        else
        {
          PerformanceCounter.QuadPart = 0LL;
          RtlQueryPerformanceCounter(&PerformanceCounter);
          v18 = PerformanceCounter;
        }
        v16[2] = v18;
        v16[1].HighPart = v51;
        v16[1].LowPart = v52;
        v16[3].LowPart = (__int64)v54 / v58;
        v16[3].HighPart = *((_QWORD *)&v54 + 1) / (__int64)v58;
        v19 = NtCurrentPeb();
        BYTE4(Buffer[13].QuadPart) = v19->OSMajorVersion;
        BYTE5(Buffer[13].QuadPart) = v19->OSMinorVersion;
        if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0
          || *(_DWORD *)(a1 + 192) > 0x100000u
          || *(_DWORD *)(a1 + 188) > 0x100u )
        {
          v20 = 0;
          v21 = 2;
        }
        else
        {
          v20 = 5;
          v21 = 1;
        }
        BYTE6(Buffer[13].QuadPart) = v21;
        HIBYTE(Buffer[13].QuadPart) = v20;
        Buffer[14].LowPart = v19->OSBuildNumber;
        Buffer[47].LowPart = *(_DWORD *)(a1 + 16);
        Buffer[14].HighPart = *(_DWORD *)(a1 + 188);
        Buffer[18].HighPart = 8;
        Buffer[18].LowPart = 1;
        Buffer[13].LowPart = Length;
        Buffer[17].HighPart = 1;
        Buffer[16].HighPart = *(_DWORD *)(a1 + 304);
        Buffer[17].LowPart = *(_DWORD *)(a1 + 308);
        Buffer[16].LowPart = v58;
        Buffer[44].QuadPart = *(_QWORD *)&v55[0] - v56;
        v22 = v45;
        Buffer[20].QuadPart = 0LL;
        Buffer[21].QuadPart = 0LL;
        Buffer[19].HighPart = v22;
        memmove(&Buffer[48], *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
        memmove(
          (char *)&Buffer[48] + *(unsigned __int16 *)(a1 + 136) + 2,
          *(const void **)(a1 + 160),
          *(unsigned __int16 *)(a1 + 152) + 2LL);
        EtwpGetTimeZoneInformation(&Buffer[22]);
        Buffer[45].QuadPart = MEMORY[0x7FFE0300];
        Buffer[46] = *(LARGE_INTEGER *)a1;
        v16[2] = *(LARGE_INTEGER *)(a1 + 8);
        v23 = Buffer[6].LowPart;
        if ( (unsigned int)(v23 + 80) <= Buffer->LowPart )
        {
          v24 = (LARGE_INTEGER *)((char *)Buffer + v23);
          v24->HighPart = 5242960;
          v24->LowPart = -1073610750;
          v24[1].LowPart = v52;
          v24[1].HighPart = v51;
          v24[3].LowPart = (__int64)v54 / v58;
          v24[3].HighPart = *((_QWORD *)&v54 + 1) / (__int64)v58;
          if ( *(_DWORD *)(a1 + 16) == 2 )
          {
            v25.QuadPart = MEMORY[0x7FFE0014];
          }
          else if ( *(_DWORD *)(a1 + 16) == 3 )
          {
            v25.QuadPart = __rdtsc();
          }
          else
          {
            PerformanceCounter.QuadPart = 0LL;
            RtlQueryPerformanceCounter(&PerformanceCounter);
            v25 = PerformanceCounter;
          }
          v24[2] = v25;
          v24[4].LowPart = 0;
          PartitionRegistryInformationUm = EtwpQueryPartitionRegistryInformationUm(
                                             &v24[6],
                                             (char *)&v24[4].QuadPart + 4,
                                             &v24[5],
                                             &v24[8]);
          QuadPart = (char *)ByteOffset.QuadPart;
          if ( !PartitionRegistryInformationUm )
            Buffer[6].LowPart += 80;
        }
      }
      v27 = FileHandle;
      if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
      {
        Buffer[5].HighPart = 3;
        if ( ZwQueryVolumeInformationFile(v27, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation) >= 0 )
        {
          v39 = Buffer[6].LowPart + 80;
          if ( !QuadPart )
            v39 = Buffer[6].LowPart;
          LODWORD(Length) = -v60 & (v39 + v60 - 1);
          Buffer->LowPart = Length;
        }
      }
      Buffer->HighPart = Buffer[6].LowPart;
      EtwpAddProviderTrackingInfo(a1, Buffer, (unsigned int)Length);
      v28 = Buffer[6].LowPart;
      if ( (unsigned int)v28 < (unsigned int)Length && (unsigned int)v28 > 0x48 )
        memset_thunk_772440563353939046((char *)Buffer + v28, 255, (unsigned int)(Length - v28));
      File = NtWriteFile(v27, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, 0LL, 0LL);
      if ( File >= 0 )
      {
        v29 = *(unsigned int *)(a1 + 304);
        if ( !(_DWORD)v29
          || (*(_DWORD *)(a1 + 308) & 0x20) == 0
          || (FileInformation = (PCWSTR)(v29
                                       * ((-(__int64)((*(_DWORD *)(a1 + 308) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL)
                                        + 0x100000)),
              File = ZwSetInformationFile(v27, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation),
              File >= 0) )
        {
          *(_QWORD *)(a1 + 128) = v27;
          *(_DWORD *)(a1 + 376) = 1;
          *(_DWORD *)(a1 + 320) = 1;
          *(_QWORD *)(a1 + 344) = (unsigned int)Length;
          *(_QWORD *)(a1 + 336) = (unsigned int)Length;
          if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
          {
            *(_QWORD *)(a1 + 440) = 0LL;
            *(_DWORD *)(a1 + 436) = 0;
          }
          v27 = 0LL;
        }
      }
    }
    if ( v27 )
      NtClose(v27);
    goto LABEL_37;
  }
  File = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( File >= 0 )
  {
    File = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
    if ( File >= 0 )
    {
      File = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadTimes, &v53, 0x20u, 0LL);
      if ( File >= 0 )
      {
        File = NtQuerySystemInformation(SystemTimeOfDayInformation, v55, 0x30u, 0LL);
        if ( File >= 0 )
        {
          File = EtwpGetCpuSpeedFromRegistry(&v45);
          if ( File >= 0 )
          {
            v11 = *(unsigned __int16 *)(a1 + 136);
            v12 = *(unsigned __int16 *)(a1 + 152);
            v44 = v12 + v11 + 316;
            v13 = v12 + v11 + 395;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return (unsigned int)File;
}
