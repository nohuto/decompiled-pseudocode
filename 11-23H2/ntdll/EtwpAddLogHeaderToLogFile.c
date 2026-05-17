/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x18005D0A4
 * Callers:
 *     EtwpLogger @ 0x18005B0E0 (EtwpLogger.c)
 *     EtwpStartUmLogger @ 0x18005BB9C (EtwpStartUmLogger.c)
 *     EtwpBufferingModeFlush @ 0x1801253B0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180010930 (RtlQueryPerformanceCounter.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x18005D65C (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryPartitionRegistryInformationUm @ 0x18005D8AC (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpGetTimeZoneInformation @ 0x18005DDF0 (EtwpGetTimeZoneInformation.c)
 *     EtwpCreateFile @ 0x18005DF5C (EtwpCreateFile.c)
 *     EtwpAddProviderTrackingInfo @ 0x18005E3DC (EtwpAddProviderTrackingInfo.c)
 *     EtwpGenerateFileName @ 0x18005F488 (EtwpGenerateFileName.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A0F70 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A0FB0 (NtWriteFile.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x1800A1390 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x1800A1570 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A17D0 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpAddLogHeaderToLogFile(__int64 a1, void *a2, int a3, char a4)
{
  bool v7; // zf
  __int64 v8; // r14
  __int64 v9; // r15
  NTSTATUS File; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // r13d
  __int64 Heap; // rax
  __int64 v15; // rsi
  _DWORD *v16; // r12
  __int64 v17; // rdx
  char *v18; // rbx
  unsigned __int64 v19; // rax
  struct _PEB *v20; // rcx
  char v21; // r9
  char v22; // al
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  int PartitionRegistryInformationUm; // eax
  HANDLE v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v33; // r13
  int v34; // r15d
  NTSTATUS v35; // eax
  size_t v36; // rcx
  unsigned int v37; // edx
  char v38; // al
  char v39; // r10
  int v40; // eax
  int v41; // ecx
  int v42; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  void *Src; // [rsp+60h] [rbp-A0h] BYREF
  int v46; // [rsp+68h] [rbp-98h]
  int v47; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  size_t Size; // [rsp+78h] [rbp-88h]
  PCWSTR SourceString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v51[16]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v52[16]; // [rsp+98h] [rbp-68h] BYREF
  int v53; // [rsp+A8h] [rbp-58h]
  int v54; // [rsp+B0h] [rbp-50h]
  __int128 v55; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v56; // [rsp+D8h] [rbp-28h]
  _OWORD v57[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v58; // [rsp+108h] [rbp+8h]
  _BYTE SystemInformation[4]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v60; // [rsp+124h] [rbp+24h]
  _BYTE v61[20]; // [rsp+160h] [rbp+60h] BYREF
  int v62; // [rsp+174h] [rbp+74h]

  Src = a2;
  LODWORD(Size) = a3;
  v47 = 0;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  v7 = (*(_BYTE *)(a1 + 308) & 8) == 0;
  memset(v57, 0, sizeof(v57));
  Handle = 0LL;
  v8 = 0LL;
  v58 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  if ( !v7 )
    EtwpGenerateFileName(a1 + 168, a1 + 184, a1 + 152);
  v9 = *(unsigned int *)(a1 + 192);
  SourceString = *(PCWSTR *)(a1 + 160);
  LODWORD(v44) = v9;
  if ( a2 )
  {
    v46 = a3;
    v13 = a3 + 79;
LABEL_10:
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v9);
    v15 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v16 = (_DWORD *)(Heap + 72);
    File = EtwpCreateFile(SourceString, v42, (__int64)&Handle);
    if ( File < 0 )
    {
      v29 = Handle;
    }
    else if ( a4 )
    {
      v29 = Handle;
      Src = 0LL;
      File = NtReadFile(Handle, 0LL, 0LL, 0LL, v51, v15, v9, &Src, 0LL);
      if ( File >= 0 )
      {
        if ( (*(_BYTE *)(v15 + 136) & 2) == 0
          && *(_BYTE *)(v15 + 108) == MEMORY[0x7FFE026C]
          && *(_BYTE *)(v15 + 109) == MEMORY[0x7FFE0270]
          && *(_DWORD *)(v15 + 148) == 8 )
        {
          v33 = *(unsigned int *)(v15 + 104);
          v34 = *(_DWORD *)(v15 + 140);
          if ( (unsigned int)(v33 - 1024) <= 0xFFFC00
            && v34
            && *(_QWORD *)(v15 + 120)
            && *(_DWORD *)(v15 + 116) == *(_DWORD *)(a1 + 188) )
          {
            *(_QWORD *)(v15 + 120) = 0LL;
            v35 = NtWriteFile(v29, 0LL, 0LL, 0LL, v51, v15, *(_DWORD *)(a1 + 192), &Src, 0LL);
            *(_DWORD *)(a1 + 376) = v34;
            File = v35;
            *(_DWORD *)(a1 + 320) = v34;
            *(_DWORD *)(a1 + 192) = v33;
            *(_QWORD *)(a1 + 336) = v33;
            *(_QWORD *)(a1 + 128) = v29;
            *(_QWORD *)(a1 + 344) = (unsigned int)(v33 * v34);
LABEL_37:
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
            return (unsigned int)File;
          }
        }
        File = -1073741811;
      }
    }
    else
    {
      v18 = (char *)Src;
      *(_DWORD *)v15 = v9;
      *(_DWORD *)(v15 + 52) = 262145;
      *(_DWORD *)(v15 + 48) = v13 & 0xFFFFFFF8;
      if ( v18 )
      {
        v36 = (unsigned int)Size;
        v37 = 0;
        if ( (_DWORD)Size )
        {
          do
          {
            v8 = (__int64)&v18[v37 + 32];
            *(_DWORD *)(v8 + 32) = *(_DWORD *)(a1 + 308) & 0x4101000 | 0x10001;
            *(_DWORD *)(v8 + 36) = 1;
            *(_DWORD *)v8 = *(_DWORD *)(a1 + 192);
            if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0
              || *(_DWORD *)(a1 + 192) > 0x100000u
              || *(_DWORD *)(v8 + 12) > 0x100u )
            {
              v38 = 0;
              v39 = 2;
            }
            else
            {
              v38 = 5;
              v39 = 1;
            }
            *(_BYTE *)(v8 + 6) = v39;
            *(_BYTE *)(v8 + 7) = v38;
            v37 += (*(unsigned __int16 *)&v18[v37 + 4] + 7) & 0xFFFFFFF8;
          }
          while ( v37 < (unsigned int)v36 );
          LODWORD(v9) = v44;
          v16 = (_DWORD *)(v15 + 72);
        }
        if ( *(_DWORD *)(v8 + 44) == 4 )
          v40 = *(_DWORD *)(v8 + 264);
        else
          v40 = *(_DWORD *)(v8 + 272);
        *(_DWORD *)(a1 + 16) = v40;
        memmove(v16, v18, v36);
      }
      else
      {
        v16[1] = v46;
        *v16 = -1073610752;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v19 = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v19 = __rdtsc();
        }
        else
        {
          v44 = 0LL;
          RtlQueryPerformanceCounter(&v44, v17);
          v19 = v44;
        }
        *((_QWORD *)v16 + 2) = v19;
        v16[3] = v53;
        v16[2] = v54;
        v16[6] = (__int64)v56 / v60;
        v16[7] = *((_QWORD *)&v56 + 1) / (__int64)v60;
        v20 = NtCurrentPeb();
        *(_BYTE *)(v15 + 108) = v20->OSMajorVersion;
        *(_BYTE *)(v15 + 109) = v20->OSMinorVersion;
        if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0
          || *(_DWORD *)(a1 + 192) > 0x100000u
          || *(_DWORD *)(a1 + 188) > 0x100u )
        {
          v21 = 0;
          v22 = 2;
        }
        else
        {
          v21 = 5;
          v22 = 1;
        }
        *(_BYTE *)(v15 + 110) = v22;
        *(_BYTE *)(v15 + 111) = v21;
        *(_DWORD *)(v15 + 112) = v20->OSBuildNumber;
        *(_DWORD *)(v15 + 376) = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(v15 + 116) = *(_DWORD *)(a1 + 188);
        *(_DWORD *)(v15 + 148) = 8;
        *(_DWORD *)(v15 + 144) = 1;
        *(_DWORD *)(v15 + 104) = v9;
        *(_DWORD *)(v15 + 140) = 1;
        *(_DWORD *)(v15 + 132) = *(_DWORD *)(a1 + 304);
        *(_DWORD *)(v15 + 136) = *(_DWORD *)(a1 + 308);
        *(_DWORD *)(v15 + 128) = v60;
        *(_QWORD *)(v15 + 352) = *(_QWORD *)&v57[0] - v58;
        v23 = v47;
        *(_QWORD *)(v15 + 160) = 0LL;
        *(_QWORD *)(v15 + 168) = 0LL;
        *(_DWORD *)(v15 + 156) = v23;
        memmove((void *)(v15 + 384), *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
        memmove(
          (void *)(v15 + *(unsigned __int16 *)(a1 + 136) + 386LL),
          *(const void **)(a1 + 160),
          *(unsigned __int16 *)(a1 + 152) + 2LL);
        EtwpGetTimeZoneInformation((void *)(v15 + 176));
        *(_QWORD *)(v15 + 360) = MEMORY[0x7FFE0300];
        *(_QWORD *)(v15 + 368) = *(_QWORD *)a1;
        *((_QWORD *)v16 + 2) = *(_QWORD *)(a1 + 8);
        v24 = *(unsigned int *)(v15 + 48);
        if ( (unsigned int)(v24 + 80) <= *(_DWORD *)v15 )
        {
          v25 = v15 + v24;
          *(_DWORD *)(v25 + 4) = 5242960;
          *(_DWORD *)v25 = -1073610750;
          *(_DWORD *)(v25 + 8) = v54;
          *(_DWORD *)(v25 + 12) = v53;
          *(_DWORD *)(v25 + 24) = (__int64)v56 / v60;
          v26 = *((_QWORD *)&v56 + 1) % (__int64)v60;
          *(_DWORD *)(v25 + 28) = *((_QWORD *)&v56 + 1) / (__int64)v60;
          if ( *(_DWORD *)(a1 + 16) == 2 )
          {
            v27 = MEMORY[0x7FFE0014];
          }
          else if ( *(_DWORD *)(a1 + 16) == 3 )
          {
            v27 = __rdtsc();
          }
          else
          {
            v44 = 0LL;
            RtlQueryPerformanceCounter(&v44, v26);
            v27 = v44;
          }
          *(_QWORD *)(v25 + 16) = v27;
          *(_DWORD *)(v25 + 32) = 0;
          PartitionRegistryInformationUm = EtwpQueryPartitionRegistryInformationUm(
                                             v25 + 48,
                                             v25 + 36,
                                             v25 + 40,
                                             v25 + 64);
          v18 = (char *)Src;
          if ( !PartitionRegistryInformationUm )
            *(_DWORD *)(v15 + 48) += 80;
        }
      }
      v29 = Handle;
      if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
      {
        *(_DWORD *)(v15 + 44) = 3;
        if ( (int)ZwQueryVolumeInformationFile(v29, v51, v61, 24LL, 3) >= 0 )
        {
          v41 = *(_DWORD *)(v15 + 48) + 80;
          if ( !v18 )
            v41 = *(_DWORD *)(v15 + 48);
          LODWORD(v9) = -v62 & (v41 + v62 - 1);
          *(_DWORD *)v15 = v9;
        }
      }
      *(_DWORD *)(v15 + 4) = *(_DWORD *)(v15 + 48);
      EtwpAddProviderTrackingInfo(a1, v15, (unsigned int)v9);
      v30 = *(unsigned int *)(v15 + 48);
      if ( (unsigned int)v30 < (unsigned int)v9 && (unsigned int)v30 > 0x48 )
        memset_thunk_772440563353939046((void *)(v15 + v30), 255, (unsigned int)(v9 - v30));
      File = NtWriteFile(v29, 0LL, 0LL, 0LL, v51, v15, v9, 0LL, 0LL);
      if ( File >= 0 )
      {
        v31 = *(unsigned int *)(a1 + 304);
        if ( !(_DWORD)v31
          || (*(_DWORD *)(a1 + 308) & 0x20) == 0
          || (SourceString = (PCWSTR)(v31
                                    * ((-(__int64)((*(_DWORD *)(a1 + 308) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL)
                                     + 0x100000)),
              File = ZwSetInformationFile(v29, v51, &SourceString, 8LL, 20),
              File >= 0) )
        {
          *(_QWORD *)(a1 + 128) = v29;
          *(_DWORD *)(a1 + 376) = 1;
          *(_DWORD *)(a1 + 320) = 1;
          *(_QWORD *)(a1 + 344) = (unsigned int)v9;
          *(_QWORD *)(a1 + 336) = (unsigned int)v9;
          if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
          {
            *(_QWORD *)(a1 + 440) = 0LL;
            *(_DWORD *)(a1 + 436) = 0;
          }
          v29 = 0LL;
        }
      }
    }
    if ( v29 )
      NtClose(v29);
    goto LABEL_37;
  }
  File = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( File >= 0 )
  {
    File = ZwQueryInformationThread(-2LL, 0LL, v52, 48LL, 0LL);
    if ( File >= 0 )
    {
      File = ZwQueryInformationThread(-2LL, 1LL, &v55, 32LL, 0LL);
      if ( File >= 0 )
      {
        File = NtQuerySystemInformation(SystemTimeOfDayInformation, v57, 0x30u, 0LL);
        if ( File >= 0 )
        {
          File = EtwpGetCpuSpeedFromRegistry(&v47);
          if ( File >= 0 )
          {
            v11 = *(unsigned __int16 *)(a1 + 136);
            v12 = *(unsigned __int16 *)(a1 + 152);
            v46 = v12 + v11 + 316;
            v13 = v12 + v11 + 395;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return (unsigned int)File;
}
