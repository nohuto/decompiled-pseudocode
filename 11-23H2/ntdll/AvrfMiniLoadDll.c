/*
 * XREFs of AvrfMiniLoadDll @ 0x1800E6DE8
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800E5114 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800192F0 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021AD0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpGetProcedureAddress @ 0x180022CD0 (LdrpGetProcedureAddress.c)
 *     LdrpCallInitRoutine @ 0x180028BA4 (LdrpCallInitRoutine.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002B270 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpGenRandom @ 0x18002B614 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x18002B654 (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002B8E4 (LdrpCfgProcessLoadConfig.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002C14C (RtlInsertInvertedFunctionTable.c)
 *     RtlCopyUnicodeString @ 0x18002D690 (RtlCopyUnicodeString.c)
 *     RtlImageNtHeader @ 0x18002ECE0 (RtlImageNtHeader.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x1800A1510 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x1800A1650 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x1800A17F0 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x1800A18B0 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x1800A18D0 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x1800A19B0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A3560 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A3BC0 (NtQuerySymbolicLinkObject.c)
 *     ZwSystemDebugControl @ 0x1800A4840 (ZwSystemDebugControl.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E15E4 (LdrpUnsuppressAddressTakenIat.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 *v5; // r13
  int SymbolicLinkObject; // esi
  int AttributesFile; // eax
  NTSTATUS v8; // eax
  struct _TEB *v9; // rdi
  void *ArbitraryUserPointer; // rbx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // r10
  __int128 v15; // xmm0
  unsigned __int16 v16; // r9
  unsigned __int64 v17; // r8
  _WORD *i; // rdx
  __int16 v19; // ax
  _WORD *v20; // rdx
  __int16 v21; // cx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  int Section; // eax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  unsigned int *v28; // rdi
  __int64 v29; // r13
  __int64 v30; // r12
  _QWORD *v31; // rbx
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  unsigned __int64 v35; // rdi
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
  __int128 v54; // [rsp+50h] [rbp-B0h] BYREF
  int v55; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v56; // [rsp+68h] [rbp-98h]
  unsigned __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h]
  int *v59; // [rsp+80h] [rbp-80h] BYREF
  HANDLE FileHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v61; // [rsp+90h] [rbp-70h]
  HANDLE v62; // [rsp+98h] [rbp-68h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+D8h] [rbp-28h]
  __int64 v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v67; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE *v68; // [rsp+100h] [rbp+0h] BYREF
  __int64 v69; // [rsp+108h] [rbp+8h]
  __int64 v70; // [rsp+110h] [rbp+10h]
  int v71; // [rsp+120h] [rbp+20h] BYREF
  __int64 (__fastcall *v72)(); // [rsp+128h] [rbp+28h]
  struct _PEB *(__fastcall *v73)(__int64, __int64); // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v74)(); // [rsp+138h] [rbp+38h]
  __int64 v75; // [rsp+140h] [rbp+40h]
  char *(__fastcall *v76)(_QWORD *, unsigned int); // [rsp+148h] [rbp+48h]
  __int64 (__fastcall *v77)(void *, int, __int64); // [rsp+150h] [rbp+50h]
  __int64 (__fastcall *v78)(unsigned __int16 *, __int64, unsigned int, __int64, int, __int64); // [rsp+158h] [rbp+58h]
  __int128 v79; // [rsp+160h] [rbp+60h]
  _DWORD *v80; // [rsp+170h] [rbp+70h]
  __int64 v81; // [rsp+178h] [rbp+78h]
  unsigned __int64 v82; // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v83)(unsigned __int16, unsigned __int16); // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v84)(); // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v85)(); // [rsp+198h] [rbp+98h]
  __int64 (__fastcall *v86)(); // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v87)(_QWORD, _QWORD); // [rsp+1A8h] [rbp+A8h]
  __int64 (__fastcall *v88)(_QWORD, _QWORD, _QWORD); // [rsp+1B0h] [rbp+B0h]
  UNICODE_STRING DestinationString; // [rsp+1C0h] [rbp+C0h] BYREF
  UNICODE_STRING v90; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v91; // [rsp+1E0h] [rbp+E0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v93[56]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v94; // [rsp+238h] [rbp+138h]
  _QWORD *v95; // [rsp+258h] [rbp+158h]
  int v96; // [rsp+268h] [rbp+168h]
  __int64 v97; // [rsp+270h] [rbp+170h]
  unsigned int *v98; // [rsp+288h] [rbp+188h]
  _BYTE v99[48]; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned __int64 v100; // [rsp+300h] [rbp+200h]
  int v101; // [rsp+310h] [rbp+210h]
  int v102; // [rsp+338h] [rbp+238h]
  _DWORD v103[2]; // [rsp+440h] [rbp+340h] BYREF
  _BYTE v104[520]; // [rsp+448h] [rbp+348h] BYREF

  v69 = a2;
  v57 = a4;
  v70 = a3;
  v5 = (__int64 *)(a5 + 312);
  v61 = 0LL;
  v62 = 0LL;
  Handle = 0LL;
  FileHandle = 0LL;
  v56 = 0LL;
  v64 = 0LL;
  v59 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SymbolicLinkObject = ZwOpenDirectoryObject();
  if ( SymbolicLinkObject >= 0 )
  {
    RtlInitUnicodeString(&v90, L"KnownDllPath");
    ObjectAttributes.RootDirectory = v61;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v90;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = ZwOpenSymbolicLinkObject();
    if ( SymbolicLinkObject >= 0 )
    {
      *((_QWORD *)&v54 + 1) = v104;
      v103[0] = 4128860;
      v103[1] = 6029375;
      LODWORD(v54) = 0x2000000;
      SymbolicLinkObject = NtQuerySymbolicLinkObject();
      if ( SymbolicLinkObject >= 0 )
      {
        *((_QWORD *)&v54 + 1) = v103;
        LOWORD(v54) = v54 + 8;
        WORD1(v54) += 8;
        RtlInitUnicodeString(&v67, L"\\");
        SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v54, (const void **)&v67);
        if ( SymbolicLinkObject >= 0 )
        {
          SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v54, &VerifierDllString);
          if ( SymbolicLinkObject >= 0 )
          {
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
            {
              v91 = v54;
              ZwSystemDebugControl();
            }
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v54;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            AttributesFile = ZwQueryAttributesFile();
            if ( AttributesFile < 0 && AttributesFile != -1073741757 && AttributesFile != -1073741790 )
              goto LABEL_11;
            v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            SymbolicLinkObject = v8;
            if ( v8 >= 0 )
            {
              SymbolicLinkObject = NtCreateSection();
              if ( SymbolicLinkObject >= 0 )
              {
                *(_WORD *)(a5 + 394) = 520;
                *(_WORD *)(a5 + 392) = 0;
                *(_QWORD *)(a5 + 400) = a5 + 408;
                *((_QWORD *)&v54 + 1) = v104;
                LOWORD(v54) = v54 - 8;
                WORD1(v54) -= 8;
                RtlCopyUnicodeString((unsigned __int16 *)(a5 + 392), (unsigned __int16 *)&v54);
                v9 = NtCurrentTeb();
                ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
                v9->NtTib.ArbitraryUserPointer = (void *)*((_QWORD *)&v54 + 1);
                v11 = ZwMapViewOfSection();
                v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                SymbolicLinkObject = v11;
                if ( v11 >= 0 )
                {
                  v12 = RtlImageNtHeader(v56);
                  v13 = v12;
                  if ( !v12 )
                    goto LABEL_18;
                  v14 = v56;
                  *(_QWORD *)(a5 + 48) = v56;
                  *(_DWORD *)(a5 + 64) = *(_DWORD *)(v12 + 80);
                  *(_DWORD *)(a5 + 128) = *(_DWORD *)(v12 + 8);
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
                  if ( *(_DWORD *)(v13 + 40) )
                    v22 = v14 + *(unsigned int *)(v13 + 40);
                  else
                    v22 = 0LL;
                  *(_QWORD *)(a5 + 56) = v22;
                  *(_QWORD *)(a5 + 248) = *(_QWORD *)(v13 + 48);
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
                  Section = NtQuerySection();
                  if ( Section < 0 )
                  {
                    SymbolicLinkObject = Section;
                    goto LABEL_49;
                  }
                  if ( v65 )
                    *(_QWORD *)(a5 + 248) -= v65;
                  if ( (*(_WORD *)(v13 + 22) & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v25 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 9u, &v55, &v66);
                  v26 = v66;
                  if ( v25 < 0 )
                    v26 = 0LL;
                  if ( v26 && v55 )
                  {
                    DbgPrintEx(93, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v27 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 1u, &v55, (__int64 *)&v67);
                  v28 = *(unsigned int **)&v67.Length;
                  if ( v27 < 0 )
                    v28 = 0LL;
                  if ( !v28 )
                  {
LABEL_18:
                    SymbolicLinkObject = -1073741701;
                    goto LABEL_49;
                  }
                  v29 = *v28;
                  v30 = v28[4];
                  v31 = (_QWORD *)(v29 + *(_QWORD *)(a5 + 48));
                  if ( *v31 )
                  {
                    memset_thunk_772440563353939046(v93, 0, 0xC8uLL);
                    v94 = a5;
                    *(_QWORD *)(a5 + 176) = v93;
                    memset_thunk_772440563353939046(v99, 0, 0x138uLL);
                    v32 = v57;
                    v68 = v99;
                    v33 = RtlImageNtHeader(v57);
                    v102 = 33554436;
                    v100 = v32;
                    v101 = *(_DWORD *)(v33 + 80);
                    v95 = &v68;
                    v96 = 1;
                    v98 = v28;
                    SymbolicLinkObject = LdrpPrepareImportAddressTableForSnap((__int64)v93);
                    if ( SymbolicLinkObject >= 0 )
                    {
                      if ( v97 )
                      {
                        v35 = v57;
                        v36 = v30 - v29;
                        while ( 1 )
                        {
                          SymbolicLinkObject = LdrpGetProcedureAddress(
                                                 v35,
                                                 (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v31 + 2LL),
                                                 0,
                                                 (char **)((char *)v31 + v36));
                          if ( SymbolicLinkObject < 0 )
                            break;
                          if ( !*++v31 )
                          {
                            ZwProtectVirtualMemory();
                            LOBYTE(v37) = LdrControlFlowGuardEnforcedWithExportSuppression();
                            if ( v37 )
                            {
                              SymbolicLinkObject = LdrpUnsuppressAddressTakenIat(*(_QWORD *)(v94 + 48), 0, 0);
                              if ( SymbolicLinkObject < 0 )
                                break;
                            }
                            goto LABEL_67;
                          }
                        }
                      }
                      else
                      {
                        SymbolicLinkObject = -1073741701;
                      }
                    }
                  }
                  else
                  {
                    v35 = v57;
LABEL_67:
                    v38 = *(_DWORD *)(a5 + 104);
                    if ( (v38 & 0x2004) == 4 )
                    {
                      v57 = 0LL;
                      v39 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(_QWORD *)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v39 ^ (unsigned int)dword_18019C3A8,
                        &v57);
                      SymbolicLinkObject = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v13, v57);
                      if ( SymbolicLinkObject < 0 )
                        goto LABEL_49;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                      v38 = *(_DWORD *)(a5 + 104);
                    }
                    if ( (v38 & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable(v56, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v40 = *(_QWORD *)(a5 + 48);
                    v41 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a5 + 56);
                    v72 = RtlpGetStackTraceAddress;
                    v71 = 152;
                    v83 = RtlpGetStackTraceAddressEx;
                    v82 = v35;
                    v73 = AVrfInternalHeapFreeNotification;
                    v74 = RtlLogStackTrace;
                    v84 = RtlReleaseStackTrace;
                    v85 = RtlStdInitializeStackDatabase;
                    v86 = RtlStdDeleteStackDatabase;
                    v87 = RtlStdLogStackTrace;
                    v88 = RtlStdReleaseStackTrace;
                    v75 = v69;
                    v81 = v70;
                    v76 = RtlCommitDebugInfo;
                    v77 = RtlSetProcessDebugInformation;
                    v78 = RtlQueryImageFileExecutionOptions;
                    v59 = &v71;
                    v79 = 0LL;
                    v80 = 0LL;
                    if ( LdrpCallInitRoutine(v41, v40, 5LL, (__int64)&v59)
                      && v59 == &v71
                      && (v42 = v80) != 0LL
                      && *v80 == 80
                      && (v43 = (_OWORD *)*((_QWORD *)&v79 + 1)) != 0LL
                      && **((_DWORD **)&v79 + 1) == 176 )
                    {
                      v44 = *(_OWORD *)(*((_QWORD *)&v79 + 1) + 16LL);
                      *(_OWORD *)&dword_180181248 = **((_OWORD **)&v79 + 1);
                      v45 = *(_OWORD *)(*((_QWORD *)&v79 + 1) + 32LL);
                      *((_OWORD *)&dword_180181248 + 1) = v44;
                      v46 = v43[3];
                      *((_OWORD *)&dword_180181248 + 2) = v45;
                      v47 = v43[4];
                      *((_OWORD *)&dword_180181248 + 3) = v46;
                      v48 = v43[5];
                      *((_OWORD *)&dword_180181248 + 4) = v47;
                      v49 = v43[6];
                      *((_OWORD *)&dword_180181248 + 5) = v48;
                      v50 = v43[8];
                      *((_OWORD *)&dword_180181248 + 6) = v49;
                      *((_OWORD *)&dword_180181248 + 7) = v43[7];
                      v51 = v43[9];
                      *((_OWORD *)&dword_180181248 + 8) = v50;
                      v52 = v43[10];
                      *((_OWORD *)&dword_180181248 + 9) = v51;
                      *((_OWORD *)&dword_180181248 + 10) = v52;
                      RtlpDebugPageHeapTable = (_UNKNOWN *)v79;
                      v42[10] = AVrfpVerifierFlags;
                      v42[11] = AVrfpDebug;
                      v53 = *(_QWORD *)(a5 + 48);
                      v56 = 0LL;
                      LdrpLogDllState(v53, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 368) = 9;
                      *(_QWORD *)(a5 + 176) = 0LL;
                    }
                    else
                    {
                      SymbolicLinkObject = -1073741502;
                    }
                  }
                }
              }
            }
            else if ( v8 == -1073741772 )
            {
LABEL_11:
              SymbolicLinkObject = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_49:
  if ( v56 )
  {
    NtUnmapViewOfSection();
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v61 )
    NtClose(v61);
  if ( v62 )
    NtClose(v62);
  return (unsigned int)SymbolicLinkObject;
}
