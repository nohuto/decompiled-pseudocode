/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x1800DD27C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlQueryEnvironmentVariable_U @ 0x18000CE60 (RtlQueryEnvironmentVariable_U.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x18007C230 (RtlUnicodeStringToInteger.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007C3A8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryApplicationKeyOption @ 0x180081D9C (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileKeyOption @ 0x180081F20 (RtlQueryImageFileKeyOption.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A8F40 (_alloca_probe.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800B0844 (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800B0E10 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x1800D77B8 (RtlpInitializeLegacyDosDevicePathState.c)
 *     LdrpConstructModernAppKeyName @ 0x1800DCA30 (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DCD78 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800DD130 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800E02A0 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800E0708 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800E0834 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800E59B4 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800ECB08 (RtlOpenModernAppOptionsKey.c)
 */

__int64 __fastcall LdrpInitializeExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        HANDLE *a5,
        __int64 a6)
{
  char v8; // r13
  __int64 v9; // rbx
  unsigned int v10; // edi
  char v11; // r12
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // r14
  unsigned int v15; // ecx
  char v16; // al
  char *v17; // r14
  int ValueKey; // eax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  int v22; // edi
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v25; // eax
  int v26; // ecx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  int v30; // eax
  int v31; // edi
  char *v32; // rdi
  int v33; // eax
  __int64 v34; // r14
  int v35; // ecx
  void *v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 i; // rdi
  wchar_t *v40; // rdx
  bool *v41; // rcx
  char *v42; // rdi
  int v43; // eax
  __int64 v44; // r14
  int v45; // ecx
  void *v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // r14
  int v51; // edi
  __int64 v52; // rdx
  unsigned __int16 *v53; // r14
  __int64 v54; // r12
  char *v55; // r14
  int v56; // eax
  int v57; // edi
  void *v58; // rcx
  __int64 v59; // rax
  int v60; // eax
  int v61; // ecx
  __int64 v62; // rcx
  int v63; // eax
  HANDLE *v64; // rbx
  HANDLE *v65; // rbx
  int v67; // [rsp+30h] [rbp-D0h]
  int v68; // [rsp+30h] [rbp-D0h]
  int v69; // [rsp+30h] [rbp-D0h]
  int v70; // [rsp+30h] [rbp-D0h]
  int v71; // [rsp+30h] [rbp-D0h]
  int v72; // [rsp+30h] [rbp-D0h]
  int v73; // [rsp+30h] [rbp-D0h]
  int v74; // [rsp+30h] [rbp-D0h]
  int v75; // [rsp+30h] [rbp-D0h]
  int v76; // [rsp+30h] [rbp-D0h]
  int v77; // [rsp+30h] [rbp-D0h]
  unsigned int v78; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v79; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v80; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v81; // [rsp+58h] [rbp-A8h]
  unsigned int v82; // [rsp+5Ch] [rbp-A4h]
  unsigned int v83; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v84; // [rsp+68h] [rbp-98h]
  int v85; // [rsp+70h] [rbp-90h] BYREF
  void *v86; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v88; // [rsp+88h] [rbp-78h] BYREF
  int v89; // [rsp+90h] [rbp-70h] BYREF
  __int64 v90[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 v91[4]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v92; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v93[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v94; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v95[4]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *v96; // [rsp+D0h] [rbp-30h]
  unsigned __int16 v97[4]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD *v98; // [rsp+E0h] [rbp-20h]
  __int64 v99; // [rsp+E8h] [rbp-18h]
  HANDLE *v100; // [rsp+F0h] [rbp-10h]
  HANDLE *v101; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  int v103; // [rsp+110h] [rbp+10h]
  __int64 v104; // [rsp+118h] [rbp+18h]
  void *v105; // [rsp+120h] [rbp+20h]
  int v106; // [rsp+128h] [rbp+28h]
  __int128 v107; // [rsp+130h] [rbp+30h]
  char v108; // [rsp+140h] [rbp+40h] BYREF
  char v109; // [rsp+540h] [rbp+440h] BYREF
  char v110; // [rsp+940h] [rbp+840h] BYREF
  char v111; // [rsp+D40h] [rbp+C40h] BYREF
  char v112; // [rsp+1140h] [rbp+1040h] BYREF
  WCHAR SourceString[200]; // [rsp+1160h] [rbp+1060h] BYREF

  v99 = a6;
  *a4 = 0LL;
  v8 = 0;
  v100 = a4;
  v9 = 0LL;
  v90[0] = a3;
  v10 = 0;
  v11 = 1;
  v84 = a1;
  v101 = a5;
  v80 = 0LL;
  Handle = 0LL;
  v79 = 0;
  v86 = 0LL;
  *a5 = 0LL;
  v88 = 0LL;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) != 0 )
    goto LABEL_107;
  v12 = RtlpOpenImageFileOptionsKeyEx(v84, 9LL, 0, &v80);
  v9 = v80;
  if ( v12 < 0 )
    goto LABEL_107;
  *a4 = (HANDLE)v80;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
  {
    v13 = 0LL;
    if ( (int)LdrpConstructModernAppKeyName(SourceString) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( (int)RtlOpenModernAppOptionsKey(&DestinationString, v9, &v86) >= 0 )
        *a5 = v86;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (__int64)v86;
  RtlQueryApplicationKeyOption(
    (__int64)v86,
    v9,
    (__int64)L"DisableHeapLookaside",
    4u,
    (__int64)&RtlpDisableHeapLookaside,
    4,
    v67,
    0LL);
  RtlQueryApplicationKeyOption(v14, v9, (__int64)L"FrontEndHeapDebugOptions", 4u, (__int64)&v79, 4, v68, 0LL);
  RtlQueryApplicationKeyOption(v14, v9, (__int64)L"ShutdownFlags", 4u, (__int64)&RtlpShutdownProcessFlags, 4, v69, 0LL);
  v78 = 0;
  RtlQueryApplicationKeyOption(v14, v9, (__int64)L"UnloadEventTraceDepth", 4u, (__int64)&v78, 4, v70, 0LL);
  v15 = RtlpUnloadEventTraceExNumber;
  if ( v78 )
    v15 = v78;
  RtlpUnloadEventTraceExNumber = v15;
  v78 = 0;
  RtlQueryApplicationKeyOption(v14, v9, (__int64)L"MaxLoaderThreads", 4u, (__int64)&v78, 4, v71, 0LL);
  if ( v78 )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v78;
  v78 = 0;
  RtlQueryApplicationKeyOption((__int64)v86, v9, (__int64)L"UseImpersonatedDeviceMap", 4u, (__int64)&v78, 4, v72, 0LL);
  v16 = LdrpUseImpersonatedDeviceMap;
  if ( v78 )
    v16 = 1;
  LdrpUseImpersonatedDeviceMap = v16;
  v78 = 0;
  RtlQueryApplicationKeyOption((__int64)v86, v9, (__int64)L"TracingFlags", 4u, (__int64)&v78, 4, v73, 0LL);
  if ( v78 )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), v78);
    v9 = v80;
  }
  v78 = 0;
  if ( (int)RtlQueryApplicationKeyOption(
              (__int64)v86,
              v9,
              (__int64)L"RaiseExceptionOnPossibleDeadlock",
              4u,
              (__int64)&v78,
              4,
              v74,
              0LL) >= 0 )
    RtlpRaiseExceptionOnPossibleDeadlock = v78 != 0;
  v78 = 0;
  if ( (int)RtlQueryApplicationKeyOption(
              (__int64)v86,
              v9,
              (__int64)L"LegacyDosDevicePaths",
              4u,
              (__int64)&v78,
              4,
              v75,
              0LL) >= 0 )
    RtlpInitializeLegacyDosDevicePathState(v78);
  v78 = 0;
  if ( (int)RtlInitUnicodeStringEx((__int64)v91, (__int64)L"CFGOptions") >= 0 )
  {
    v17 = &v108;
    ValueKey = NtQueryValueKey();
    v22 = ValueKey;
    if ( ValueKey < 0 )
    {
      if ( ValueKey == -2147483643 )
      {
        while ( 1 )
        {
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v81);
          v13 = Heap;
          if ( !Heap )
            break;
          v17 = (char *)Heap;
          v9 = v80;
          v25 = NtQueryValueKey();
          v22 = v25;
          if ( v25 >= 0 )
            goto LABEL_28;
          if ( v25 != -2147483643 )
            goto LABEL_39;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v17);
        }
        v9 = v80;
      }
      goto LABEL_44;
    }
LABEL_28:
    v26 = *((_DWORD *)v17 + 1);
    if ( ((v26 - 3) & 0xFFFFFFFB) != 0 )
    {
      v19 = 4LL;
      if ( v26 == 4 )
      {
        if ( *((_DWORD *)v17 + 2) == 4 )
        {
          v81 = 4;
          v78 = *((_DWORD *)v17 + 3);
        }
        else
        {
          v22 = -1073741820;
        }
        goto LABEL_38;
      }
      if ( v26 == 1 )
      {
        if ( ((unsigned __int8)&v78 & 3) != 0 )
        {
          v22 = -2147483646;
        }
        else
        {
          v81 = 4;
          v92 = v17 + 12;
          v91[0] = *((_WORD *)v17 + 4);
          v91[1] = *((_WORD *)v17 + 4);
          v22 = RtlUnicodeStringToInteger(v91, 0, (int *)&v78);
        }
        goto LABEL_38;
      }
    }
    v22 = -1073741788;
LABEL_38:
    if ( v13 )
    {
LABEL_39:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
      v9 = v80;
    }
    if ( v22 >= 0 && (v78 & 1) != 0 )
    {
      LdrProtectMrdata(0, v19, v20, v21);
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1, v27, v28, v29);
    }
  }
LABEL_44:
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    v103 = 48;
    v105 = &unk_18012D648;
    v104 = v9;
    v106 = 64;
    v107 = 0LL;
    v30 = NtOpenKey();
    v31 = v30;
    if ( v30 == -1073741772 )
    {
      LdrpLargePageDllKeyHandle = 0LL;
    }
    else if ( v30 < 0 )
    {
      goto LABEL_155;
    }
  }
  if ( (int)RtlInitUnicodeStringEx((__int64)v93, (__int64)L"MinimumStackCommitInBytes") >= 0 )
  {
    v32 = &v109;
    v33 = NtQueryValueKey();
    if ( v33 < 0 )
    {
      if ( v33 != -2147483643 )
        goto LABEL_67;
      while ( 1 )
      {
        v36 = NtCurrentPeb()->ProcessHeap;
        if ( !v36 )
          goto LABEL_66;
        v37 = RtlAllocateHeap((__int64)v36, NtdllBaseTag + 1572864, v82);
        v34 = v37;
        if ( !v37 )
          goto LABEL_66;
        v32 = (char *)v37;
        v9 = v80;
        v38 = NtQueryValueKey();
        if ( v38 >= 0 )
          goto LABEL_51;
        if ( v38 != -2147483643 )
          goto LABEL_65;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v32);
      }
    }
    v34 = 0LL;
LABEL_51:
    v35 = *((_DWORD *)v32 + 1);
    if ( ((v35 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v35 == 4 )
      {
        if ( *((_DWORD *)v32 + 2) == 4 )
        {
          v82 = 4;
          v78 = *((_DWORD *)v32 + 3);
        }
      }
      else if ( v35 == 1 && ((unsigned __int8)&v78 & 3) == 0 )
      {
        v82 = 4;
        v94 = v32 + 12;
        v93[0] = *((_WORD *)v32 + 4);
        v93[1] = *((_WORD *)v32 + 4);
        RtlUnicodeStringToInteger(v93, 0, (int *)&v78);
      }
    }
    if ( v34 )
    {
LABEL_65:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v34);
LABEL_66:
      v9 = v80;
    }
  }
LABEL_67:
  if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v78 )
    *(_QWORD *)(a2 + 792) = v78;
  for ( i = 0LL; i != 6; i += 2LL )
  {
    v40 = (&off_18012D5E8)[i];
    v78 = 0;
    RtlQueryImageFileKeyOption(v9, (__int64)v40, 4, &v78, 4u, 0LL);
    v41 = (bool *)*(&off_18012D5E8 + i + 1);
    *v41 = v78 != 0;
  }
  v78 = 0;
  if ( (int)RtlInitUnicodeStringEx((__int64)v95, (__int64)L"MaxDeadActivationContexts") >= 0 )
  {
    v42 = &v110;
    v43 = NtQueryValueKey();
    if ( v43 < 0 )
    {
      if ( v43 == -2147483643 )
      {
        while ( 1 )
        {
          v46 = NtCurrentPeb()->ProcessHeap;
          if ( !v46 )
            break;
          v47 = RtlAllocateHeap((__int64)v46, NtdllBaseTag + 1572864, v83);
          v44 = v47;
          if ( !v47 )
            break;
          v42 = (char *)v47;
          v9 = v80;
          v48 = NtQueryValueKey();
          if ( v48 >= 0 )
            goto LABEL_74;
          if ( v48 != -2147483643 )
            goto LABEL_88;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v42);
        }
        v9 = v80;
      }
    }
    else
    {
      v44 = 0LL;
LABEL_74:
      v45 = *((_DWORD *)v42 + 1);
      if ( ((v45 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v45 == 4 )
        {
          if ( *((_DWORD *)v42 + 2) == 4 )
          {
            v83 = 4;
            v78 = *((_DWORD *)v42 + 3);
          }
        }
        else if ( v45 == 1 && ((unsigned __int8)&v78 & 3) == 0 )
        {
          v83 = 4;
          v96 = v42 + 12;
          v95[0] = *((_WORD *)v42 + 4);
          v95[1] = *((_WORD *)v42 + 4);
          RtlUnicodeStringToInteger(v95, 0, (int *)&v78);
        }
      }
      if ( v44 )
      {
LABEL_88:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v44);
        v9 = v80;
      }
      v49 = g_SxsMaxDeadActivationContexts;
      if ( v78 )
        v49 = v78;
      g_SxsMaxDeadActivationContexts = v49;
    }
  }
  v50 = (__int64)v86;
  v8 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
  if ( (int)RtlQueryApplicationKeyOption((__int64)v86, v9, (__int64)L"GlobalFlag", 4u, (__int64)&v85, 4, v76, &v88) < 0 )
    goto LABEL_102;
  v51 = v85;
  if ( (v85 & 0x2000100) == 0 )
    goto LABEL_101;
  if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v50, v9) )
  {
    v51 &= 0xFDFFFEFF;
    v85 = v51;
  }
  if ( (v51 & 0x2000100) == 0 )
    goto LABEL_101;
  if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(v84, &v89) >= 0 )
  {
    if ( !v89 )
    {
      v51 &= 0xFDFFFEFF;
      v85 = v51;
    }
LABEL_101:
    *(_DWORD *)(a2 + 188) = v51;
  }
LABEL_102:
  if ( (int)RtlQueryApplicationKeyOption((__int64)v86, v9, (__int64)L"GlobalFlag2", 4u, (__int64)&v85, 4, v77, 0LL) >= 0 )
    *(_DWORD *)(a2 + 1988) = v85;
  v10 = v79;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    v11 = 0;
  else
    v88 = 0LL;
LABEL_107:
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    v10 |= 1u;
  RtlSetLowFragHeapGlobalFlags(v10, *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
  if ( !v11 || LdrpIsSecureProcess )
  {
    v53 = v84;
  }
  else
  {
    v53 = v84;
    if ( (MEMORY[0x7FFE03A0] & 1) != 0 )
    {
      if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v84, v52, &Handle) < 0 )
      {
        Handle = 0LL;
      }
      else
      {
        v54 = 0LL;
        if ( (int)RtlInitUnicodeStringEx((__int64)v97, (__int64)L"GlobalFlag") >= 0 )
        {
          v55 = &v111;
          v56 = NtQueryValueKey();
          v57 = v56;
          if ( v56 < 0 )
          {
            if ( v56 == -2147483643 )
            {
              while ( 1 )
              {
                v58 = NtCurrentPeb()->ProcessHeap;
                if ( !v58 )
                  break;
                v59 = RtlAllocateHeap((__int64)v58, NtdllBaseTag + 1572864, v79);
                v54 = v59;
                if ( !v59 )
                  break;
                v55 = (char *)v59;
                v60 = NtQueryValueKey();
                v57 = v60;
                if ( v60 >= 0 )
                {
                  v9 = v80;
                  goto LABEL_122;
                }
                if ( v60 != -2147483643 )
                  goto LABEL_133;
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v55);
              }
              v9 = v80;
            }
            v53 = v84;
            goto LABEL_138;
          }
LABEL_122:
          v61 = *((_DWORD *)v55 + 1);
          if ( ((v61 - 3) & 0xFFFFFFFB) != 0 )
          {
            if ( v61 == 4 )
            {
              if ( *((_DWORD *)v55 + 2) == 4 )
              {
                v79 = 4;
                v85 = *((_DWORD *)v55 + 3);
              }
              else
              {
                v57 = -1073741820;
              }
              goto LABEL_132;
            }
            if ( v61 == 1 )
            {
              if ( ((unsigned __int8)&v85 & 3) != 0 )
              {
                v57 = -2147483646;
              }
              else
              {
                v79 = 4;
                v98 = v55 + 12;
                v97[0] = *((_WORD *)v55 + 4);
                v97[1] = *((_WORD *)v55 + 4);
                v57 = RtlUnicodeStringToInteger(v97, 0, &v85);
              }
              goto LABEL_132;
            }
          }
          v57 = -1073741788;
LABEL_132:
          if ( v54 )
          {
LABEL_133:
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v54);
            v9 = v80;
          }
          v53 = v84;
          if ( v57 >= 0 )
          {
            *(_DWORD *)(a2 + 188) |= v85 & 0x2000100;
            v88 = Handle;
          }
        }
      }
    }
  }
LABEL_138:
  v31 = 0;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 || LdrpPayloadRestrictionMitigationsEnabled() )
  {
    v63 = LdrpInitializeApplicationVerifierPackage(v53, a2, v8, (__int64)v88, v90[0], v99);
    v31 = v63;
    if ( v63 < 0 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        9282,
        (__int64)"LdrpInitializeExecutionOptions",
        0,
        "Initializing the application verifier package failed with status 0x%08lx\n",
        v63);
      goto LABEL_155;
    }
  }
  else if ( !v86 && !v9 )
  {
    if ( *(_BYTE *)(a2 + 2) )
    {
      v62 = *(_QWORD *)(a2 + 32);
      v90[1] = (__int64)&v112;
      LODWORD(v90[0]) = 0x200000;
      if ( (int)RtlQueryEnvironmentVariable_U(*(_QWORD *)(v62 + 128), word_18012D5C8, (__int64)v90) < 0
        || (v31 = RtlUnicodeStringToInteger((unsigned __int16 *)v90, 0, (int *)&v78), v31 < 0)
        || !v78 )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 1988) & 1) != 0 )
    *(_DWORD *)(a2 + 1984) |= 1u;
  if ( v31 >= 0 )
  {
    LdrpQueryIllegalCWDDevices(v9);
    goto LABEL_159;
  }
LABEL_155:
  v64 = v100;
  if ( *v100 )
  {
    NtClose(*v100);
    *v64 = 0LL;
  }
  v65 = v101;
  if ( *v101 )
  {
    NtClose(*v101);
    *v65 = 0LL;
  }
LABEL_159:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v31;
}
