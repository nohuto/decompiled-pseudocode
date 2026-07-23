/*
 * XREFs of AvrfMiniLoadDll @ 0x1800E5AB8
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogDllState @ 0x180019CC4 (LdrpLogDllState.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021CB0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpGetProcedureAddress @ 0x180022DE0 (LdrpGetProcedureAddress.c)
 *     LdrpCallInitRoutine @ 0x180028D74 (LdrpCallInitRoutine.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002B440 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpGenRandom @ 0x18002B7E4 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x18002B824 (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002BAB4 (LdrpCfgProcessLoadConfig.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002C31C (RtlInsertInvertedFunctionTable.c)
 *     RtlCopyUnicodeString @ 0x18002D860 (RtlCopyUnicodeString.c)
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     DbgPrintEx @ 0x180053A30 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18009F450 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x18009F590 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x18009F7F0 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x18009F810 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x18009F8F0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A14A0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A1B00 (NtQuerySymbolicLinkObject.c)
 *     ZwSystemDebugControl @ 0x1800A2780 (ZwSystemDebugControl.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E02B4 (LdrpUnsuppressAddressTakenIat.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
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
  int v37; // eax
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 (__fastcall *v41)(__int64, _QWORD, __int64); // rcx
  _DWORD *v42; // rdx
  _OWORD *v43; // rcx
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int64 v53; // rcx
  _UNICODE_STRING LinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v55; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-98h] BYREF
  PVOID BaseOfImage; // [rsp+70h] [rbp-90h] BYREF
  HANDLE SectionHandle; // [rsp+78h] [rbp-88h] BYREF
  int *v59; // [rsp+80h] [rbp-80h] BYREF
  HANDLE FileHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE DirectoryHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE LinkHandle; // [rsp+98h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  ULONG OldProtect; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR ViewSize; // [rsp+D8h] [rbp-28h] BYREF
  __int64 SectionInformation; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v67; // [rsp+E8h] [rbp-18h] BYREF
  _UNICODE_STRING Source; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE *v69; // [rsp+100h] [rbp+0h] BYREF
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int64 v71; // [rsp+110h] [rbp+10h]
  int v72; // [rsp+120h] [rbp+20h] BYREF
  __int64 (__fastcall *v73)(); // [rsp+128h] [rbp+28h]
  int (__fastcall *v74)(__int64, __int64); // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v75)(); // [rsp+138h] [rbp+38h]
  __int64 v76; // [rsp+140h] [rbp+40h]
  PVOID (__cdecl *v77)(PRTL_DEBUG_INFORMATION, SIZE_T); // [rsp+148h] [rbp+48h]
  NTSTATUS (__cdecl *v78)(HANDLE, ULONG, PRTL_DEBUG_INFORMATION); // [rsp+150h] [rbp+50h]
  __int64 (__fastcall *v79)(unsigned __int16 *, __int64, __int64, __int64, int, __int64); // [rsp+158h] [rbp+58h]
  __int128 v80; // [rsp+160h] [rbp+60h]
  _DWORD *v81; // [rsp+170h] [rbp+70h]
  __int64 v82; // [rsp+178h] [rbp+78h]
  PVOID v83; // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v84)(unsigned __int16, unsigned __int16); // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v85)(); // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v86)(); // [rsp+198h] [rbp+98h]
  __int64 (__fastcall *v87)(); // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v88)(_QWORD, _QWORD); // [rsp+1A8h] [rbp+A8h]
  __int64 (__fastcall *v89)(_QWORD, _QWORD, _QWORD); // [rsp+1B0h] [rbp+B0h]
  _UNICODE_STRING DestinationString; // [rsp+1C0h] [rbp+C0h] BYREF
  _UNICODE_STRING v91; // [rsp+1D0h] [rbp+D0h] BYREF
  _UNICODE_STRING InputBuffer; // [rsp+1E0h] [rbp+E0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v94[56]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v95; // [rsp+238h] [rbp+138h]
  _QWORD *v96; // [rsp+258h] [rbp+158h]
  int v97; // [rsp+268h] [rbp+168h]
  PVOID v98; // [rsp+270h] [rbp+170h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+278h] [rbp+178h] BYREF
  ULONG NewProtect; // [rsp+290h] [rbp+190h]
  _BYTE v101[48]; // [rsp+2D0h] [rbp+1D0h] BYREF
  PVOID v102; // [rsp+300h] [rbp+200h]
  unsigned int SizeOfImage; // [rsp+310h] [rbp+210h]
  int v104; // [rsp+338h] [rbp+238h]
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+410h] [rbp+310h] BYREF
  _DWORD v106[2]; // [rsp+440h] [rbp+340h] BYREF
  _BYTE v107[520]; // [rsp+448h] [rbp+348h] BYREF

  v70 = a2;
  BaseOfImage = a4;
  v71 = a3;
  v5 = (__int64 *)(a5 + 312);
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  SectionHandle = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v59 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  appended = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
  if ( appended >= 0 )
  {
    RtlInitUnicodeString(&v91, L"KnownDllPath");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v91;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( appended >= 0 )
    {
      LinkTarget.Buffer = (wchar_t *)v107;
      v106[0] = 4128860;
      v106[1] = 6029375;
      *(_DWORD *)&LinkTarget.Length = 0x2000000;
      appended = NtQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      if ( appended >= 0 )
      {
        LinkTarget.Buffer = (wchar_t *)v106;
        LinkTarget.Length += 8;
        LinkTarget.MaximumLength += 8;
        RtlInitUnicodeString(&Source, L"\\");
        appended = RtlAppendUnicodeStringToString(&LinkTarget, &Source);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&LinkTarget, &VerifierDllString);
          if ( appended >= 0 )
          {
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
            {
              InputBuffer = LinkTarget;
              ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
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
                LinkTarget.Buffer = (wchar_t *)v107;
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
                  memset_thunk_772440563353939046(v5, 0, 0x50uLL);
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
                  if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v25 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 9u, &v55, &v67);
                  v26 = v67;
                  if ( v25 < 0 )
                    v26 = 0LL;
                  if ( v26 && v55 )
                  {
                    DbgPrintEx(0x5Du, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v27 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 1u, &v55, &Source);
                  v28 = *(unsigned int **)&Source.Length;
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
                    memset_thunk_772440563353939046(v94, 0, 0xC8uLL);
                    v95 = a5;
                    *(_QWORD *)(a5 + 176) = v94;
                    memset_thunk_772440563353939046(v101, 0, 0x138uLL);
                    v32 = BaseOfImage;
                    v69 = v101;
                    v33 = RtlImageNtHeader(BaseOfImage);
                    v104 = 33554436;
                    v102 = v32;
                    SizeOfImage = v33->OptionalHeader.SizeOfImage;
                    v96 = &v69;
                    v97 = 1;
                    RegionSize[2] = (ULONG_PTR)v28;
                    appended = LdrpPrepareImportAddressTableForSnap((__int64)v94);
                    if ( appended >= 0 )
                    {
                      if ( v98 )
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
                              &v98,
                              RegionSize,
                              NewProtect,
                              &OldProtect);
                            LOBYTE(v37) = LdrControlFlowGuardEnforcedWithExportSuppression();
                            if ( v37 )
                            {
                              appended = LdrpUnsuppressAddressTakenIat(*(char **)(v95 + 48), 0, 0);
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
                    v38 = *(_DWORD *)(a5 + 104);
                    if ( (v38 & 0x2004) == 4 )
                    {
                      BaseOfImage = 0LL;
                      v39 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(void **)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v39 ^ LdrSystemDllInitBlock.RngData,
                        &BaseOfImage);
                      appended = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v13, (__int64)BaseOfImage);
                      if ( appended < 0 )
                        goto LABEL_49;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                      v38 = *(_DWORD *)(a5 + 104);
                    }
                    if ( (v38 & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable((__int64)BaseAddress, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v40 = *(_QWORD *)(a5 + 48);
                    v41 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a5 + 56);
                    v73 = RtlpGetStackTraceAddress;
                    v72 = 152;
                    v84 = RtlpGetStackTraceAddressEx;
                    v83 = v35;
                    v74 = AVrfInternalHeapFreeNotification;
                    v75 = RtlLogStackTrace;
                    v85 = RtlReleaseStackTrace;
                    v86 = RtlStdInitializeStackDatabase;
                    v87 = RtlStdDeleteStackDatabase;
                    v88 = RtlStdLogStackTrace;
                    v89 = RtlStdReleaseStackTrace;
                    v76 = v70;
                    v82 = v71;
                    v77 = RtlCommitDebugInfo;
                    v78 = RtlSetProcessDebugInformation;
                    v79 = RtlQueryImageFileExecutionOptions;
                    v59 = &v72;
                    v80 = 0LL;
                    v81 = 0LL;
                    if ( LdrpCallInitRoutine(v41, v40, 5u, (__int64)&v59)
                      && v59 == &v72
                      && (v42 = v81) != 0LL
                      && *v81 == 80
                      && (v43 = (_OWORD *)*((_QWORD *)&v80 + 1)) != 0LL
                      && **((_DWORD **)&v80 + 1) == 176 )
                    {
                      v44 = *(_OWORD *)(*((_QWORD *)&v80 + 1) + 16LL);
                      *(_OWORD *)&dword_18017E838 = **((_OWORD **)&v80 + 1);
                      v45 = *(_OWORD *)(*((_QWORD *)&v80 + 1) + 32LL);
                      *((_OWORD *)&dword_18017E838 + 1) = v44;
                      v46 = v43[3];
                      *((_OWORD *)&dword_18017E838 + 2) = v45;
                      v47 = v43[4];
                      *((_OWORD *)&dword_18017E838 + 3) = v46;
                      v48 = v43[5];
                      *((_OWORD *)&dword_18017E838 + 4) = v47;
                      v49 = v43[6];
                      *((_OWORD *)&dword_18017E838 + 5) = v48;
                      v50 = v43[8];
                      *((_OWORD *)&dword_18017E838 + 6) = v49;
                      *((_OWORD *)&dword_18017E838 + 7) = v43[7];
                      v51 = v43[9];
                      *((_OWORD *)&dword_18017E838 + 8) = v50;
                      v52 = v43[10];
                      *((_OWORD *)&dword_18017E838 + 9) = v51;
                      *((_OWORD *)&dword_18017E838 + 10) = v52;
                      RtlpDebugPageHeapTable = (PULONG)v80;
                      v42[10] = AVrfpVerifierFlags;
                      v42[11] = AVrfpDebug;
                      v53 = *(_QWORD *)(a5 + 48);
                      BaseAddress = 0LL;
                      LdrpLogDllState(v53, a5 + 72, 0x14AEu);
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
