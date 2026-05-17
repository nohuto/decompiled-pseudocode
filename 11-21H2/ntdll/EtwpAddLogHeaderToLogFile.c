/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x18000851C
 * Callers:
 *     EtwpLogger @ 0x1800041C0 (EtwpLogger.c)
 *     EtwpStartUmLogger @ 0x180006FB0 (EtwpStartUmLogger.c)
 *     EtwpBufferingModeFlush @ 0x180122230 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpAddProviderTrackingInfo @ 0x180008B70 (EtwpAddProviderTrackingInfo.c)
 *     EtwpCreateFile @ 0x180008BCC (EtwpCreateFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180008D64 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180008FB4 (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpGetTimeZoneInformation @ 0x1800092D8 (EtwpGetTimeZoneInformation.c)
 *     EtwpGenerateFileName @ 0x18000ACA8 (EtwpGenerateFileName.c)
 *     RtlQueryPerformanceCounter @ 0x1800129A0 (RtlQueryPerformanceCounter.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A4130 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A4170 (NtWriteFile.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x1800A4550 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x1800A4730 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A4990 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall EtwpAddLogHeaderToLogFile(__int64 a1, void *a2, int a3, char a4)
{
  bool v7; // zf
  _DWORD *v8; // r13
  __int64 v9; // r15
  NTSTATUS File; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // r12d
  __int64 Heap; // rax
  __int64 v15; // rsi
  _DWORD *v16; // r14
  char *v17; // rbx
  size_t v18; // rax
  struct _PEB *v19; // rcx
  char v20; // r9
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rbx
  size_t v24; // rax
  int PartitionRegistryInformationUm; // eax
  HANDLE v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rdx
  size_t v30; // rdx
  unsigned int v31; // r8d
  char *v32; // rcx
  char v33; // al
  char v34; // r10
  int v35; // eax
  __int64 v36; // r13
  int v37; // r15d
  NTSTATUS v38; // eax
  int v39; // ecx
  int v40; // [rsp+20h] [rbp-E0h]
  size_t Size; // [rsp+58h] [rbp-A8h] BYREF
  void *Src; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR SourceString; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v48[16]; // [rsp+80h] [rbp-80h] BYREF
  char v49[16]; // [rsp+90h] [rbp-70h] BYREF
  int v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A8h] [rbp-58h]
  __int128 v52; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-30h]
  _OWORD v54[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v55; // [rsp+100h] [rbp+0h]
  _DWORD SystemInformation[16]; // [rsp+110h] [rbp+10h] BYREF
  char v57[20]; // [rsp+150h] [rbp+50h] BYREF
  int v58; // [rsp+164h] [rbp+64h]

  Src = a2;
  LODWORD(Size) = a3;
  v45 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v7 = (*(_BYTE *)(a1 + 308) & 8) == 0;
  memset(v54, 0, sizeof(v54));
  Handle = 0LL;
  v8 = 0LL;
  v55 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  if ( !v7 )
    EtwpGenerateFileName(a1 + 168, a1 + 184, a1 + 152);
  v9 = *(unsigned int *)(a1 + 192);
  SourceString = *(PCWSTR *)(a1 + 160);
  if ( a2 )
  {
    v44 = a3;
    v13 = a3 + 79;
LABEL_10:
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v9);
    v15 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v16 = (_DWORD *)(Heap + 72);
    File = EtwpCreateFile(SourceString, v40, (__int64)&Handle);
    if ( File < 0 )
    {
      v26 = Handle;
    }
    else if ( a4 )
    {
      v26 = Handle;
      Src = 0LL;
      File = NtReadFile(Handle, 0LL, 0LL, 0LL, v48, v15, v9, &Src, 0LL);
      if ( File >= 0 )
      {
        if ( (*(_BYTE *)(v15 + 136) & 2) == 0
          && *(_BYTE *)(v15 + 108) == MEMORY[0x7FFE026C]
          && *(_BYTE *)(v15 + 109) == MEMORY[0x7FFE0270]
          && *(_DWORD *)(v15 + 148) == 8 )
        {
          v36 = *(unsigned int *)(v15 + 104);
          v37 = *(_DWORD *)(v15 + 140);
          if ( (unsigned int)(v36 - 1024) <= 0xFFFC00
            && v37
            && *(_QWORD *)(v15 + 120)
            && *(_DWORD *)(v15 + 116) == *(_DWORD *)(a1 + 188) )
          {
            *(_QWORD *)(v15 + 120) = 0LL;
            v38 = NtWriteFile(v26, 0LL, 0LL, 0LL, v48, v15, *(_DWORD *)(a1 + 192), &Src, 0LL);
            *(_DWORD *)(a1 + 376) = v37;
            File = v38;
            *(_DWORD *)(a1 + 320) = v37;
            *(_DWORD *)(a1 + 192) = v36;
            *(_QWORD *)(a1 + 336) = v36;
            *(_QWORD *)(a1 + 128) = v26;
            *(_QWORD *)(a1 + 344) = (unsigned int)(v36 * v37);
LABEL_37:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v15);
            return (unsigned int)File;
          }
        }
        File = -1073741811;
      }
    }
    else
    {
      v17 = (char *)Src;
      *(_DWORD *)v15 = v9;
      *(_DWORD *)(v15 + 52) = 262145;
      *(_DWORD *)(v15 + 48) = v13 & 0xFFFFFFF8;
      if ( v17 )
      {
        v30 = (unsigned int)Size;
        v31 = 0;
        if ( (_DWORD)Size )
        {
          do
          {
            v32 = &v17[v31];
            *((_DWORD *)v32 + 16) = *(_DWORD *)(a1 + 308) & 0x4101000 | 0x10001;
            v8 = v32 + 32;
            *((_DWORD *)v32 + 17) = 1;
            *((_DWORD *)v32 + 8) = *(_DWORD *)(a1 + 192);
            if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0
              || *(_DWORD *)(a1 + 192) > 0x100000u
              || *((_DWORD *)v32 + 11) > 0x100u )
            {
              v33 = 0;
              v34 = 2;
            }
            else
            {
              v33 = 5;
              v34 = 1;
            }
            v32[38] = v34;
            v32[39] = v33;
            v31 += (*((unsigned __int16 *)v32 + 2) + 7) & 0xFFFFFFF8;
          }
          while ( v31 < (unsigned int)v30 );
          v16 = (_DWORD *)(v15 + 72);
        }
        if ( v8[11] == 4 )
          v35 = v8[66];
        else
          v35 = v8[68];
        *(_DWORD *)(a1 + 16) = v35;
        memmove(v16, v17, v30);
      }
      else
      {
        v16[1] = v44;
        *v16 = -1073610752;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v18 = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v18 = __rdtsc();
        }
        else
        {
          Size = 0LL;
          RtlQueryPerformanceCounter(&Size);
          v18 = Size;
        }
        *((_QWORD *)v16 + 2) = v18;
        v16[3] = v50;
        v16[2] = v51;
        v16[6] = (__int64)v53 / SystemInformation[1];
        v16[7] = *((_QWORD *)&v53 + 1) / (__int64)SystemInformation[1];
        v19 = NtCurrentPeb();
        *(_BYTE *)(v15 + 108) = v19->OSMajorVersion;
        *(_BYTE *)(v15 + 109) = v19->OSMinorVersion;
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
        *(_BYTE *)(v15 + 110) = v21;
        *(_BYTE *)(v15 + 111) = v20;
        *(_DWORD *)(v15 + 112) = v19->OSBuildNumber;
        *(_DWORD *)(v15 + 376) = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(v15 + 116) = *(_DWORD *)(a1 + 188);
        *(_DWORD *)(v15 + 144) = 1;
        *(_DWORD *)(v15 + 140) = 1;
        *(_DWORD *)(v15 + 148) = 8;
        *(_DWORD *)(v15 + 104) = v9;
        *(_DWORD *)(v15 + 132) = *(_DWORD *)(a1 + 304);
        *(_DWORD *)(v15 + 136) = *(_DWORD *)(a1 + 308);
        *(_DWORD *)(v15 + 128) = SystemInformation[1];
        *(_QWORD *)(v15 + 352) = *(_QWORD *)&v54[0] - v55;
        *(_DWORD *)(v15 + 156) = v45;
        *(_QWORD *)(v15 + 160) = 0LL;
        *(_QWORD *)(v15 + 168) = 0LL;
        memmove((void *)(v15 + 384), *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
        memmove(
          (void *)(v15 + *(unsigned __int16 *)(a1 + 136) + 386LL),
          *(const void **)(a1 + 160),
          *(unsigned __int16 *)(a1 + 152) + 2LL);
        EtwpGetTimeZoneInformation((void *)(v15 + 176));
        *(_QWORD *)(v15 + 360) = MEMORY[0x7FFE0300];
        *(_QWORD *)(v15 + 368) = *(_QWORD *)a1;
        *((_QWORD *)v16 + 2) = *(_QWORD *)(a1 + 8);
        v22 = *(unsigned int *)(v15 + 48);
        if ( (unsigned int)(v22 + 80) <= *(_DWORD *)v15 )
        {
          v23 = v15 + v22;
          *(_DWORD *)(v23 + 4) = 5242960;
          *(_DWORD *)v23 = -1073610750;
          *(_DWORD *)(v23 + 8) = v51;
          *(_DWORD *)(v23 + 12) = v50;
          *(_DWORD *)(v23 + 24) = (__int64)v53 / SystemInformation[1];
          *(_DWORD *)(v23 + 28) = *((_QWORD *)&v53 + 1) / (__int64)SystemInformation[1];
          if ( *(_DWORD *)(a1 + 16) == 2 )
          {
            v24 = MEMORY[0x7FFE0014];
          }
          else if ( *(_DWORD *)(a1 + 16) == 3 )
          {
            v24 = __rdtsc();
          }
          else
          {
            Size = 0LL;
            RtlQueryPerformanceCounter(&Size);
            v24 = Size;
          }
          *(_QWORD *)(v23 + 16) = v24;
          *(_DWORD *)(v23 + 32) = 0;
          PartitionRegistryInformationUm = EtwpQueryPartitionRegistryInformationUm(
                                             v23 + 48,
                                             v23 + 36,
                                             v23 + 40,
                                             v23 + 64);
          v17 = (char *)Src;
          if ( !PartitionRegistryInformationUm )
            *(_DWORD *)(v15 + 48) += 80;
        }
      }
      v26 = Handle;
      if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
      {
        *(_DWORD *)(v15 + 44) = 3;
        if ( (int)ZwQueryVolumeInformationFile(v26, v48, v57, 24LL, 3) >= 0 )
        {
          v39 = *(_DWORD *)(v15 + 48) + 80;
          if ( !v17 )
            v39 = *(_DWORD *)(v15 + 48);
          LODWORD(v9) = -v58 & (v39 + v58 - 1);
          *(_DWORD *)v15 = v9;
        }
      }
      *(_DWORD *)(v15 + 4) = *(_DWORD *)(v15 + 48);
      EtwpAddProviderTrackingInfo(a1, v15, (unsigned int)v9);
      v27 = *(unsigned int *)(v15 + 48);
      if ( (unsigned int)v27 < (unsigned int)v9 && (unsigned int)v27 > 0x48 )
        memset((void *)(v15 + v27), 255, (unsigned int)(v9 - v27));
      File = NtWriteFile(v26, 0LL, 0LL, 0LL, v48, v15, v9, 0LL, 0LL);
      if ( File >= 0 )
      {
        v28 = *(unsigned int *)(a1 + 304);
        if ( !(_DWORD)v28
          || (*(_DWORD *)(a1 + 308) & 0x20) == 0
          || (SourceString = (PCWSTR)(v28
                                    * ((-(__int64)((*(_DWORD *)(a1 + 308) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL)
                                     + 0x100000)),
              File = ZwSetInformationFile(v26, v48, &SourceString, 8LL, 20),
              File >= 0) )
        {
          *(_QWORD *)(a1 + 128) = v26;
          *(_DWORD *)(a1 + 376) = 1;
          *(_DWORD *)(a1 + 320) = 1;
          *(_QWORD *)(a1 + 344) = (unsigned int)v9;
          *(_QWORD *)(a1 + 336) = (unsigned int)v9;
          if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
          {
            *(_QWORD *)(a1 + 440) = 0LL;
            *(_DWORD *)(a1 + 436) = 0;
          }
          v26 = 0LL;
        }
      }
    }
    if ( v26 )
      NtClose(v26);
    goto LABEL_37;
  }
  File = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( File >= 0 )
  {
    File = ZwQueryInformationThread(-2LL, 0LL, v49, 48LL, 0LL);
    if ( File >= 0 )
    {
      File = ZwQueryInformationThread(-2LL, 1LL, &v52, 32LL, 0LL);
      if ( File >= 0 )
      {
        File = NtQuerySystemInformation(SystemTimeOfDayInformation, v54, 0x30u, 0LL);
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
