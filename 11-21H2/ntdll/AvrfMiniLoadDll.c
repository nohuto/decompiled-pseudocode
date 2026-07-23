/*
 * XREFs of AvrfMiniLoadDll @ 0x1800E6C5C
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrintEx @ 0x180005CC0 (DbgPrintEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800342A8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180034354 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlInsertInvertedFunctionTable @ 0x18003449C (RtlInsertInvertedFunctionTable.c)
 *     RtlCopyUnicodeString @ 0x180034770 (RtlCopyUnicodeString.c)
 *     LdrpGenRandom @ 0x1800347F4 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x18003485C (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x1800354CC (LdrpCfgProcessLoadConfig.c)
 *     LdrpGetProcedureAddress @ 0x18003BD10 (LdrpGetProcedureAddress.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpCallInitRoutine @ 0x18003FFAC (LdrpCallInitRoutine.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlImageNtHeader @ 0x18004F1A0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x1800A46D0 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x1800A4810 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x1800A49B0 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x1800A4A70 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x1800A4A90 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x1800A4B70 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A66E0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A6D20 (NtQuerySymbolicLinkObject.c)
 *     ZwSystemDebugControl @ 0x1800A7980 (ZwSystemDebugControl.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E1AA4 (LdrpUnsuppressAddressTakenIat.c)
 */

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, void *a4, __int64 a5)
{
  __int64 *v5; // r13
  int appended; // esi
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  struct _TEB *v9; // rdi
  void *ArbitraryUserPointer; // rbx
  NTSTATUS v11; // eax
  PIMAGE_NT_HEADERS v12; // rax
  PIMAGE_NT_HEADERS v13; // r15
  char *v14; // r10
  __int128 v15; // xmm0
  unsigned __int16 v16; // r9
  unsigned __int64 v17; // r8
  _WORD *i; // rdx
  __int16 v19; // ax
  _WORD *v20; // rdx
  __int16 v21; // cx
  char *v22; // rax
  __int64 v23; // rax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  __int64 v26; // rcx
  NTSTATUS v27; // eax
  unsigned int *v28; // rdi
  __int64 v29; // r13
  __int64 v30; // r12
  _QWORD *v31; // rbx
  PVOID v32; // rsi
  PIMAGE_NT_HEADERS v33; // rax
  PVOID v35; // rdi
  __int64 v36; // r12
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 (__fastcall *v40)(__int64, _QWORD, __int64); // rcx
  _IMAGE_DATA_DIRECTORY v41; // rdx
  _OWORD *v42; // rcx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int64 v52; // rcx
  _UNICODE_STRING LinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BaseOfImage; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v56; // [rsp+70h] [rbp-90h] BYREF
  HANDLE SectionHandle; // [rsp+78h] [rbp-88h] BYREF
  _IMAGE_NT_HEADERS64 *p_SectionAlignment; // [rsp+80h] [rbp-80h] BYREF
  HANDLE FileHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE DirectoryHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE LinkHandle; // [rsp+98h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  ULONG OldProtect; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR ViewSize; // [rsp+D8h] [rbp-28h] BYREF
  __int64 SectionInformation; // [rsp+E0h] [rbp-20h] BYREF
  _IMAGE_NT_HEADERS64 OutHeaders; // [rsp+E8h] [rbp-18h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v68[26]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v69[40]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+410h] [rbp+310h] BYREF
  _DWORD v71[2]; // [rsp+440h] [rbp+340h] BYREF
  _BYTE v72[520]; // [rsp+448h] [rbp+348h] BYREF

  *(_QWORD *)&OutHeaders.OptionalHeader.SizeOfInitializedData = a2;
  BaseOfImage = a4;
  *(_QWORD *)&OutHeaders.OptionalHeader.AddressOfEntryPoint = a3;
  v5 = (__int64 *)(a5 + 312);
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  SectionHandle = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  p_SectionAlignment = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&OutHeaders.OptionalHeader.DataDirectory[10], L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&OutHeaders.OptionalHeader.DataDirectory[10];
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  appended = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
  if ( appended >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&OutHeaders.OptionalHeader.DataDirectory[12], L"KnownDllPath");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&OutHeaders.OptionalHeader.DataDirectory[12];
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( appended >= 0 )
    {
      LinkTarget.Buffer = (wchar_t *)v72;
      v71[0] = 4128860;
      v71[1] = 6029375;
      *(_DWORD *)&LinkTarget.Length = 0x2000000;
      appended = NtQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      if ( appended >= 0 )
      {
        LinkTarget.Buffer = (wchar_t *)v71;
        LinkTarget.Length += 8;
        LinkTarget.MaximumLength += 8;
        RtlInitUnicodeString((PUNICODE_STRING)&OutHeaders.FileHeader.TimeDateStamp, L"\\");
        appended = RtlAppendUnicodeStringToString(&LinkTarget, (PCUNICODE_STRING)&OutHeaders.FileHeader.TimeDateStamp);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&LinkTarget, &VerifierDllString);
          if ( appended >= 0 )
          {
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
            {
              *(_UNICODE_STRING *)&OutHeaders.OptionalHeader.DataDirectory[14].VirtualAddress = LinkTarget;
              ZwSystemDebugControl(
                SysDbgKdPullRemoteFile,
                &OutHeaders.OptionalHeader.DataDirectory[14],
                0x10u,
                0LL,
                0,
                0LL);
            }
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &LinkTarget;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v7 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
            if ( v7 < 0 && v7 != -1073741757 && v7 != -1073741790 )
              goto LABEL_11;
            v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            appended = v8;
            if ( v8 >= 0 )
            {
              appended = NtCreateSection(&SectionHandle, 0xDu, 0LL, 0LL, 0x10u, 0x1000000u, FileHandle);
              if ( appended >= 0 )
              {
                *(_WORD *)(a5 + 394) = 520;
                *(_WORD *)(a5 + 392) = 0;
                *(_QWORD *)(a5 + 400) = a5 + 408;
                LinkTarget.Buffer = (wchar_t *)v72;
                LinkTarget.Length -= 8;
                LinkTarget.MaximumLength -= 8;
                RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 392), &LinkTarget);
                v9 = NtCurrentTeb();
                ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
                v9->NtTib.ArbitraryUserPointer = LinkTarget.Buffer;
                v11 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseAddress,
                        0LL,
                        0LL,
                        0LL,
                        &ViewSize,
                        ViewShare,
                        0x800000u,
                        2u);
                v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                appended = v11;
                if ( v11 >= 0 )
                {
                  v12 = RtlImageNtHeader(BaseAddress);
                  v13 = v12;
                  if ( !v12 )
                    goto LABEL_18;
                  v14 = (char *)BaseAddress;
                  *(_QWORD *)(a5 + 48) = BaseAddress;
                  *(_DWORD *)(a5 + 64) = v12->OptionalHeader.SizeOfImage;
                  *(_DWORD *)(a5 + 128) = v12->FileHeader.TimeDateStamp;
                  *(_QWORD *)(a5 + 144) = 0LL;
                  v15 = *(_OWORD *)(a5 + 392);
                  *(_DWORD *)(a5 + 104) = 0;
                  *(_OWORD *)(a5 + 72) = v15;
                  v16 = *(_WORD *)(a5 + 72);
                  v17 = *(_QWORD *)(a5 + 80);
                  for ( i = (_WORD *)(v17 + 2 * (((unsigned __int64)v16 >> 1) - 1)); (unsigned __int64)i > v17; --i )
                  {
                    if ( *i == 92 )
                      goto LABEL_24;
                  }
                  if ( *i == 92 )
                  {
LABEL_24:
                    v19 = *(_WORD *)(a5 + 74);
                    v20 = i + 1;
                    *(_QWORD *)(a5 + 96) = v20;
                    v21 = 2 * ((__int64)((__int64)v20 - v17) >> 1);
                    *(_WORD *)(a5 + 88) = v16 - v21;
                    *(_WORD *)(a5 + 90) = v19 - v21;
                    goto LABEL_26;
                  }
                  *(_OWORD *)(a5 + 88) = v15;
LABEL_26:
                  if ( v13->OptionalHeader.AddressOfEntryPoint )
                    v22 = &v14[v13->OptionalHeader.AddressOfEntryPoint];
                  else
                    v22 = 0LL;
                  *(_QWORD *)(a5 + 56) = v22;
                  *(_QWORD *)(a5 + 248) = v13->OptionalHeader.ImageBase;
                  *(_QWORD *)(a5 + 152) = v5;
                  memset(v5, 0, 0x50uLL);
                  *(_QWORD *)(a5 + 160) = v5;
                  *(_QWORD *)(a5 + 168) = v5;
                  *v5 = a5 + 160;
                  *(_QWORD *)(a5 + 320) = a5 + 160;
                  *(_DWORD *)(a5 + 276) = 2;
                  v23 = *v5;
                  *(_DWORD *)(a5 + 336) = -1;
                  *(_WORD *)(v23 - 52) = -1;
                  v24 = NtQuerySection(SectionHandle, SectionRelocationInformation, &SectionInformation, 8uLL, 0LL);
                  if ( v24 < 0 )
                  {
                    appended = v24;
                    goto LABEL_49;
                  }
                  if ( SectionInformation )
                    *(_QWORD *)(a5 + 248) -= SectionInformation;
                  if ( (v13->FileHeader.Characteristics & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_DWORD *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v25 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 9u, &v56, &OutHeaders);
                  v26 = *(_QWORD *)&OutHeaders.Signature;
                  if ( v25 < 0 )
                    v26 = 0LL;
                  if ( v26 && v56 )
                  {
                    DbgPrintEx(0x5Du, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v27 = RtlpImageDirectoryEntryToDataEx(
                          *(_QWORD *)(a5 + 48),
                          1,
                          1u,
                          &v56,
                          (PIMAGE_NT_HEADERS)&OutHeaders.FileHeader.TimeDateStamp);
                  v28 = *(unsigned int **)&OutHeaders.FileHeader.TimeDateStamp;
                  if ( v27 < 0 )
                    v28 = 0LL;
                  if ( !v28 )
                  {
LABEL_18:
                    appended = -1073741701;
                    goto LABEL_49;
                  }
                  v29 = *v28;
                  v30 = v28[4];
                  v31 = (_QWORD *)(v29 + *(_QWORD *)(a5 + 48));
                  if ( *v31 )
                  {
                    memset(v68, 0, 0xC8uLL);
                    v68[7] = a5;
                    *(_QWORD *)(a5 + 176) = v68;
                    memset(v69, 0, 0x138uLL);
                    v32 = BaseOfImage;
                    *(_QWORD *)&OutHeaders.OptionalHeader.Magic = v69;
                    v33 = RtlImageNtHeader(BaseOfImage);
                    LODWORD(v69[13]) = 33554436;
                    v69[6] = v32;
                    LODWORD(v69[8]) = v33->OptionalHeader.SizeOfImage;
                    v68[11] = &OutHeaders.OptionalHeader;
                    LODWORD(v68[13]) = 1;
                    v68[17] = v28;
                    appended = LdrpPrepareImportAddressTableForSnap((__int64)v68);
                    if ( appended >= 0 )
                    {
                      if ( v68[14] )
                      {
                        v35 = BaseOfImage;
                        v36 = v30 - v29;
                        while ( 1 )
                        {
                          appended = LdrpGetProcedureAddress(
                                       (unsigned __int64)v35,
                                       (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v31 + 2LL),
                                       0,
                                       (char **)((char *)v31 + v36));
                          if ( appended < 0 )
                            break;
                          if ( !*++v31 )
                          {
                            ZwProtectVirtualMemory(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              (PVOID *)&v68[14],
                              &v68[15],
                              v68[18],
                              &OldProtect);
                            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
                            {
                              appended = LdrpUnsuppressAddressTakenIat(*(char **)(v68[7] + 48LL), 0, 0);
                              if ( appended < 0 )
                                break;
                            }
                            goto LABEL_67;
                          }
                        }
                      }
                      else
                      {
                        appended = -1073741701;
                      }
                    }
                  }
                  else
                  {
                    v35 = BaseOfImage;
LABEL_67:
                    v37 = *(_DWORD *)(a5 + 104);
                    if ( (v37 & 0x2004) == 4 )
                    {
                      BaseOfImage = 0LL;
                      v38 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(void **)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v38 ^ LdrSystemDllInitBlock.RngData,
                        &BaseOfImage);
                      appended = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v13, (__int64)BaseOfImage);
                      if ( appended < 0 )
                        goto LABEL_49;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                      v37 = *(_DWORD *)(a5 + 104);
                    }
                    if ( (v37 & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable((__int64)BaseAddress, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v39 = *(_QWORD *)(a5 + 48);
                    v40 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a5 + 56);
                    *(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion = RtlpGetStackTraceAddress;
                    OutHeaders.OptionalHeader.SectionAlignment = 152;
                    OutHeaders.OptionalHeader.DataDirectory[3] = (_IMAGE_DATA_DIRECTORY)RtlpGetStackTraceAddressEx;
                    OutHeaders.OptionalHeader.DataDirectory[2] = (_IMAGE_DATA_DIRECTORY)v35;
                    *(_QWORD *)&OutHeaders.OptionalHeader.MajorSubsystemVersion = AVrfInternalHeapFreeNotification;
                    *(_QWORD *)&OutHeaders.OptionalHeader.SizeOfImage = RtlLogStackTrace;
                    OutHeaders.OptionalHeader.DataDirectory[4] = (_IMAGE_DATA_DIRECTORY)RtlReleaseStackTrace;
                    OutHeaders.OptionalHeader.DataDirectory[5] = (_IMAGE_DATA_DIRECTORY)RtlStdInitializeStackDatabase;
                    OutHeaders.OptionalHeader.DataDirectory[6] = (_IMAGE_DATA_DIRECTORY)RtlStdDeleteStackDatabase;
                    OutHeaders.OptionalHeader.DataDirectory[7] = (_IMAGE_DATA_DIRECTORY)RtlStdLogStackTrace;
                    OutHeaders.OptionalHeader.DataDirectory[8] = (_IMAGE_DATA_DIRECTORY)RtlStdReleaseStackTrace;
                    *(_QWORD *)&OutHeaders.OptionalHeader.CheckSum = *(_QWORD *)&OutHeaders.OptionalHeader.SizeOfInitializedData;
                    OutHeaders.OptionalHeader.DataDirectory[1] = *(_IMAGE_DATA_DIRECTORY *)&OutHeaders.OptionalHeader.AddressOfEntryPoint;
                    OutHeaders.OptionalHeader.SizeOfStackReserve = (unsigned __int64)RtlCommitDebugInfo;
                    OutHeaders.OptionalHeader.SizeOfStackCommit = (unsigned __int64)RtlSetProcessDebugInformation;
                    OutHeaders.OptionalHeader.SizeOfHeapReserve = (unsigned __int64)RtlQueryImageFileExecutionOptions;
                    p_SectionAlignment = (_IMAGE_NT_HEADERS64 *)&OutHeaders.OptionalHeader.SectionAlignment;
                    memset(&OutHeaders.OptionalHeader.SizeOfHeapCommit, 0, 24);
                    if ( LdrpCallInitRoutine(v40, v39, 5u, (__int64)&p_SectionAlignment)
                      && p_SectionAlignment == (_IMAGE_NT_HEADERS64 *)&OutHeaders.OptionalHeader.SectionAlignment
                      && (v41 = OutHeaders.OptionalHeader.DataDirectory[0]) != 0LL
                      && **(_DWORD **)OutHeaders.OptionalHeader.DataDirectory == 80
                      && (v42 = *(_OWORD **)&OutHeaders.OptionalHeader.LoaderFlags) != 0LL
                      && **(_DWORD **)&OutHeaders.OptionalHeader.LoaderFlags == 176 )
                    {
                      v43 = *(_OWORD *)(*(_QWORD *)&OutHeaders.OptionalHeader.LoaderFlags + 16LL);
                      *(_OWORD *)&dword_180174248 = **(_OWORD **)&OutHeaders.OptionalHeader.LoaderFlags;
                      v44 = *(_OWORD *)(*(_QWORD *)&OutHeaders.OptionalHeader.LoaderFlags + 32LL);
                      *((_OWORD *)&dword_180174248 + 1) = v43;
                      v45 = v42[3];
                      *((_OWORD *)&dword_180174248 + 2) = v44;
                      v46 = v42[4];
                      *((_OWORD *)&dword_180174248 + 3) = v45;
                      v47 = v42[5];
                      *((_OWORD *)&dword_180174248 + 4) = v46;
                      v48 = v42[6];
                      *((_OWORD *)&dword_180174248 + 5) = v47;
                      v49 = v42[8];
                      *((_OWORD *)&dword_180174248 + 6) = v48;
                      *((_OWORD *)&dword_180174248 + 7) = v42[7];
                      v50 = v42[9];
                      *((_OWORD *)&dword_180174248 + 8) = v49;
                      v51 = v42[10];
                      *((_OWORD *)&dword_180174248 + 9) = v50;
                      *((_OWORD *)&dword_180174248 + 10) = v51;
                      RtlpDebugPageHeapTable = (PULONG)OutHeaders.OptionalHeader.SizeOfHeapCommit;
                      *(_DWORD *)(*(_QWORD *)&v41 + 40LL) = AVrfpVerifierFlags;
                      *(_DWORD *)(*(_QWORD *)&v41 + 44LL) = AVrfpDebug;
                      v52 = *(_QWORD *)(a5 + 48);
                      BaseAddress = 0LL;
                      LdrpLogDllState(v52, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 368) = 9;
                      *(_QWORD *)(a5 + 176) = 0LL;
                    }
                    else
                    {
                      appended = -1073741502;
                    }
                  }
                }
              }
            }
            else if ( v8 == -1073741772 )
            {
LABEL_11:
              appended = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_49:
  if ( BaseAddress )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( DirectoryHandle )
    NtClose(DirectoryHandle);
  if ( LinkHandle )
    NtClose(LinkHandle);
  return (unsigned int)appended;
}
