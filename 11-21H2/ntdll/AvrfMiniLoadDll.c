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
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 (__fastcall *v40)(__int64, _QWORD, __int64); // rcx
  _DWORD *v41; // rdx
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
  __int128 v53; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v54; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v55; // [rsp+68h] [rbp-98h] BYREF
  int v56; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h]
  int *v58; // [rsp+80h] [rbp-80h] BYREF
  HANDLE FileHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v60; // [rsp+90h] [rbp-70h]
  HANDLE v61; // [rsp+98h] [rbp-68h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v63; // [rsp+D8h] [rbp-28h]
  __int64 v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v66; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v67; // [rsp+100h] [rbp+0h] BYREF
  __int64 v68; // [rsp+108h] [rbp+8h]
  __int64 v69; // [rsp+110h] [rbp+10h]
  int v70; // [rsp+120h] [rbp+20h] BYREF
  __int64 (__fastcall *v71)(); // [rsp+128h] [rbp+28h]
  struct _PEB *(__fastcall *v72)(__int64, __int64); // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v73)(); // [rsp+138h] [rbp+38h]
  __int64 v74; // [rsp+140h] [rbp+40h]
  char *(__fastcall *v75)(_QWORD *, unsigned int); // [rsp+148h] [rbp+48h]
  __int64 (__fastcall *v76)(void *, int, __int64); // [rsp+150h] [rbp+50h]
  __int64 (__fastcall *v77)(unsigned __int16 *, __int64, unsigned int, __int64, int, __int64); // [rsp+158h] [rbp+58h]
  __int128 v78; // [rsp+160h] [rbp+60h]
  _DWORD *v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  unsigned __int64 v81; // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v82)(unsigned __int16, unsigned __int16); // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v83)(); // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v84)(); // [rsp+198h] [rbp+98h]
  __int64 (__fastcall *v85)(); // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v86)(_QWORD, _QWORD); // [rsp+1A8h] [rbp+A8h]
  __int64 (__fastcall *v87)(_QWORD, _QWORD, _QWORD); // [rsp+1B0h] [rbp+B0h]
  UNICODE_STRING DestinationString; // [rsp+1C0h] [rbp+C0h] BYREF
  UNICODE_STRING v89; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v90; // [rsp+1E0h] [rbp+E0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v92[26]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v93[40]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _DWORD v94[2]; // [rsp+440h] [rbp+340h] BYREF
  _BYTE v95[520]; // [rsp+448h] [rbp+348h] BYREF

  v68 = a2;
  v55 = a4;
  v69 = a3;
  v5 = (__int64 *)(a5 + 312);
  v60 = 0LL;
  v61 = 0LL;
  Handle = 0LL;
  FileHandle = 0LL;
  v54 = 0LL;
  v63 = 0LL;
  v58 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SymbolicLinkObject = ZwOpenDirectoryObject();
  if ( SymbolicLinkObject >= 0 )
  {
    RtlInitUnicodeString(&v89, L"KnownDllPath");
    ObjectAttributes.RootDirectory = v60;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v89;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = ZwOpenSymbolicLinkObject();
    if ( SymbolicLinkObject >= 0 )
    {
      *((_QWORD *)&v53 + 1) = v95;
      v94[0] = 4128860;
      v94[1] = 6029375;
      LODWORD(v53) = 0x2000000;
      SymbolicLinkObject = NtQuerySymbolicLinkObject();
      if ( SymbolicLinkObject >= 0 )
      {
        *((_QWORD *)&v53 + 1) = v94;
        LOWORD(v53) = v53 + 8;
        WORD1(v53) += 8;
        RtlInitUnicodeString(&v66, L"\\");
        SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v53, (const void **)&v66);
        if ( SymbolicLinkObject >= 0 )
        {
          SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v53, &VerifierDllString);
          if ( SymbolicLinkObject >= 0 )
          {
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
            {
              v90 = v53;
              ZwSystemDebugControl();
            }
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v53;
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
                *((_QWORD *)&v53 + 1) = v95;
                LOWORD(v53) = v53 - 8;
                WORD1(v53) -= 8;
                RtlCopyUnicodeString((unsigned __int16 *)(a5 + 392), (unsigned __int16 *)&v53);
                v9 = NtCurrentTeb();
                ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
                v9->NtTib.ArbitraryUserPointer = (void *)*((_QWORD *)&v53 + 1);
                v11 = ZwMapViewOfSection();
                v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                SymbolicLinkObject = v11;
                if ( v11 >= 0 )
                {
                  v12 = RtlImageNtHeader(v54);
                  v13 = v12;
                  if ( !v12 )
                    goto LABEL_18;
                  v14 = v54;
                  *(_QWORD *)(a5 + 48) = v54;
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
                  memset(v5, 0, 0x50uLL);
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
                  if ( v64 )
                    *(_QWORD *)(a5 + 248) -= v64;
                  if ( (*(_WORD *)(v13 + 22) & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_DWORD *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v25 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 9u, &v56, (__int64)&v65);
                  v26 = v65;
                  if ( v25 < 0 )
                    v26 = 0LL;
                  if ( v26 && v56 )
                  {
                    DbgPrintEx(93, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v27 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 1u, &v56, (__int64)&v66);
                  v28 = *(unsigned int **)&v66.Length;
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
                    memset(v92, 0, 0xC8uLL);
                    v92[7] = a5;
                    *(_QWORD *)(a5 + 176) = v92;
                    memset(v93, 0, 0x138uLL);
                    v32 = v55;
                    v67 = v93;
                    v33 = RtlImageNtHeader(v55);
                    LODWORD(v93[13]) = 33554436;
                    v93[6] = v32;
                    LODWORD(v93[8]) = *(_DWORD *)(v33 + 80);
                    v92[11] = &v67;
                    LODWORD(v92[13]) = 1;
                    v92[17] = v28;
                    SymbolicLinkObject = LdrpPrepareImportAddressTableForSnap((__int64)v92);
                    if ( SymbolicLinkObject >= 0 )
                    {
                      if ( v92[14] )
                      {
                        v35 = v55;
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
                            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
                            {
                              SymbolicLinkObject = LdrpUnsuppressAddressTakenIat(*(_QWORD *)(v92[7] + 48LL), 0, 0);
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
                    v35 = v55;
LABEL_67:
                    v37 = *(_DWORD *)(a5 + 104);
                    if ( (v37 & 0x2004) == 4 )
                    {
                      v55 = 0LL;
                      v38 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(_QWORD *)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v38 ^ (unsigned int)dword_18018F388,
                        &v55);
                      SymbolicLinkObject = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v13, v55);
                      if ( SymbolicLinkObject < 0 )
                        goto LABEL_49;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                      v37 = *(_DWORD *)(a5 + 104);
                    }
                    if ( (v37 & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable(v54, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v39 = *(_QWORD *)(a5 + 48);
                    v40 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a5 + 56);
                    v71 = RtlpGetStackTraceAddress;
                    v70 = 152;
                    v82 = RtlpGetStackTraceAddressEx;
                    v81 = v35;
                    v72 = AVrfInternalHeapFreeNotification;
                    v73 = RtlLogStackTrace;
                    v83 = RtlReleaseStackTrace;
                    v84 = RtlStdInitializeStackDatabase;
                    v85 = RtlStdDeleteStackDatabase;
                    v86 = RtlStdLogStackTrace;
                    v87 = RtlStdReleaseStackTrace;
                    v74 = v68;
                    v80 = v69;
                    v75 = RtlCommitDebugInfo;
                    v76 = RtlSetProcessDebugInformation;
                    v77 = RtlQueryImageFileExecutionOptions;
                    v58 = &v70;
                    v78 = 0LL;
                    v79 = 0LL;
                    if ( LdrpCallInitRoutine(v40, v39, 5u, (__int64)&v58)
                      && v58 == &v70
                      && (v41 = v79) != 0LL
                      && *v79 == 80
                      && (v42 = (_OWORD *)*((_QWORD *)&v78 + 1)) != 0LL
                      && **((_DWORD **)&v78 + 1) == 176 )
                    {
                      v43 = *(_OWORD *)(*((_QWORD *)&v78 + 1) + 16LL);
                      *(_OWORD *)&dword_180174248 = **((_OWORD **)&v78 + 1);
                      v44 = *(_OWORD *)(*((_QWORD *)&v78 + 1) + 32LL);
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
                      RtlpDebugPageHeapTable = (_UNKNOWN *)v78;
                      v41[10] = AVrfpVerifierFlags;
                      v41[11] = AVrfpDebug;
                      v52 = *(_QWORD *)(a5 + 48);
                      v54 = 0LL;
                      LdrpLogDllState(v52, a5 + 72, 0x14AEu);
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
  if ( v54 )
  {
    NtUnmapViewOfSection();
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v60 )
    NtClose(v60);
  if ( v61 )
    NtClose(v61);
  return (unsigned int)SymbolicLinkObject;
}
