/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x1800DD9FC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180058F20 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007689C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlUnicodeStringToInteger @ 0x180076E90 (RtlUnicodeStringToInteger.c)
 *     RtlQueryApplicationKeyOption @ 0x18007D77C (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D900 (RtlQueryImageFileKeyOption.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A3D80 (_alloca_probe.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800AD6AE (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800AE694 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x1800D7834 (RtlpInitializeLegacyDosDevicePathState.c)
 *     LdrpConstructModernAppKeyName @ 0x1800DD1B0 (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DD4F8 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800DD8B0 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800DEBB8 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800DF020 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800DF14C (LdrpQueryIllegalCWDDevices.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800E4844 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800EC3D8 (RtlOpenModernAppOptionsKey.c)
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
  int v19; // edi
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  char *v26; // rdi
  int v27; // eax
  __int64 v28; // r14
  int v29; // ecx
  void *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdi
  wchar_t *v34; // rdx
  bool *v35; // rax
  char *v36; // rdi
  int v37; // eax
  __int64 v38; // r14
  int v39; // ecx
  void *v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // r14
  int v45; // edi
  __int64 v46; // rdx
  unsigned __int16 *v47; // r14
  __int64 v48; // r12
  char *v49; // r14
  int v50; // eax
  int v51; // edi
  void *v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  int v55; // ecx
  __int64 v56; // rcx
  int v57; // eax
  HANDLE *v58; // rbx
  HANDLE *v59; // rbx
  int v61; // [rsp+30h] [rbp-D0h]
  int v62; // [rsp+30h] [rbp-D0h]
  int v63; // [rsp+30h] [rbp-D0h]
  int v64; // [rsp+30h] [rbp-D0h]
  int v65; // [rsp+30h] [rbp-D0h]
  int v66; // [rsp+30h] [rbp-D0h]
  int v67; // [rsp+30h] [rbp-D0h]
  int v68; // [rsp+30h] [rbp-D0h]
  int v69; // [rsp+30h] [rbp-D0h]
  int v70; // [rsp+30h] [rbp-D0h]
  int v71; // [rsp+30h] [rbp-D0h]
  unsigned int v72; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v73; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v74; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v75; // [rsp+5Ch] [rbp-A4h]
  unsigned int v76; // [rsp+60h] [rbp-A0h]
  unsigned int v77; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 *v78; // [rsp+68h] [rbp-98h]
  int v79; // [rsp+70h] [rbp-90h] BYREF
  void *v80; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v82; // [rsp+88h] [rbp-78h] BYREF
  int v83; // [rsp+90h] [rbp-70h] BYREF
  __int64 v84[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 v85[4]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v86; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v87[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v88; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v89[4]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *v90; // [rsp+D0h] [rbp-30h]
  unsigned __int16 v91[4]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD *v92; // [rsp+E0h] [rbp-20h]
  __int64 v93; // [rsp+E8h] [rbp-18h]
  HANDLE *v94; // [rsp+F0h] [rbp-10h]
  HANDLE *v95; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  int v97; // [rsp+110h] [rbp+10h]
  __int64 v98; // [rsp+118h] [rbp+18h]
  void *v99; // [rsp+120h] [rbp+20h]
  int v100; // [rsp+128h] [rbp+28h]
  __int128 v101; // [rsp+130h] [rbp+30h]
  char v102; // [rsp+140h] [rbp+40h] BYREF
  char v103; // [rsp+540h] [rbp+440h] BYREF
  char v104; // [rsp+940h] [rbp+840h] BYREF
  char v105; // [rsp+D40h] [rbp+C40h] BYREF
  char v106; // [rsp+1140h] [rbp+1040h] BYREF
  WCHAR SourceString[200]; // [rsp+1160h] [rbp+1060h] BYREF

  v93 = a6;
  *a4 = 0LL;
  v8 = 0;
  v94 = a4;
  v9 = 0LL;
  v84[0] = a3;
  v10 = 0;
  v11 = 1;
  v78 = a1;
  v95 = a5;
  v74 = 0LL;
  Handle = 0LL;
  v73 = 0;
  v80 = 0LL;
  *a5 = 0LL;
  v82 = 0LL;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) != 0 )
    goto LABEL_107;
  v12 = RtlpOpenImageFileOptionsKeyEx(v78, 9u, 0, &v74);
  v9 = v74;
  if ( v12 < 0 )
    goto LABEL_107;
  *a4 = (HANDLE)v74;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
  {
    v13 = 0LL;
    if ( (int)LdrpConstructModernAppKeyName(SourceString) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( (int)RtlOpenModernAppOptionsKey(&DestinationString, v9, &v80) >= 0 )
        *a5 = v80;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (__int64)v80;
  RtlQueryApplicationKeyOption(
    (__int64)v80,
    v9,
    (__int64)L"DisableHeapLookaside",
    4u,
    (__int64)&RtlpDisableHeapLookaside,
    4,
    v61,
    0LL);
  RtlQueryApplicationKeyOption(v14, v9, (__int64)L"FrontEndHeapDebugOptions", 4u, (__int64)&v73, 4, v62, 0LL);
  RtlQueryApplicationKeyOption(v14, v9, (__int64)L"ShutdownFlags", 4u, (__int64)&RtlpShutdownProcessFlags, 4, v63, 0LL);
  v72 = 0;
  RtlQueryApplicationKeyOption(v14, v9, (__int64)L"UnloadEventTraceDepth", 4u, (__int64)&v72, 4, v64, 0LL);
  v15 = RtlpUnloadEventTraceExNumber;
  if ( v72 )
    v15 = v72;
  RtlpUnloadEventTraceExNumber = v15;
  v72 = 0;
  RtlQueryApplicationKeyOption(v14, v9, (__int64)L"MaxLoaderThreads", 4u, (__int64)&v72, 4, v65, 0LL);
  if ( v72 )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v72;
  v72 = 0;
  RtlQueryApplicationKeyOption((__int64)v80, v9, (__int64)L"UseImpersonatedDeviceMap", 4u, (__int64)&v72, 4, v66, 0LL);
  v16 = LdrpUseImpersonatedDeviceMap;
  if ( v72 )
    v16 = 1;
  LdrpUseImpersonatedDeviceMap = v16;
  v72 = 0;
  RtlQueryApplicationKeyOption((__int64)v80, v9, (__int64)L"TracingFlags", 4u, (__int64)&v72, 4, v67, 0LL);
  if ( v72 )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), v72);
    v9 = v74;
  }
  v72 = 0;
  if ( (int)RtlQueryApplicationKeyOption(
              (__int64)v80,
              v9,
              (__int64)L"RaiseExceptionOnPossibleDeadlock",
              4u,
              (__int64)&v72,
              4,
              v68,
              0LL) >= 0 )
    RtlpRaiseExceptionOnPossibleDeadlock = v72 != 0;
  v72 = 0;
  if ( (int)RtlQueryApplicationKeyOption(
              (__int64)v80,
              v9,
              (__int64)L"LegacyDosDevicePaths",
              4u,
              (__int64)&v72,
              4,
              v69,
              0LL) >= 0 )
    RtlpInitializeLegacyDosDevicePathState(v72);
  v72 = 0;
  if ( (int)RtlInitUnicodeStringEx((__int64)v85, (__int64)L"CFGOptions") >= 0 )
  {
    v17 = &v102;
    ValueKey = NtQueryValueKey();
    v19 = ValueKey;
    if ( ValueKey < 0 )
    {
      if ( ValueKey == -2147483643 )
      {
        while ( 1 )
        {
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v75);
          v13 = Heap;
          if ( !Heap )
            break;
          v17 = (char *)Heap;
          v9 = v74;
          v22 = NtQueryValueKey();
          v19 = v22;
          if ( v22 >= 0 )
            goto LABEL_28;
          if ( v22 != -2147483643 )
            goto LABEL_39;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v17);
        }
        v9 = v74;
      }
      goto LABEL_44;
    }
LABEL_28:
    v23 = *((_DWORD *)v17 + 1);
    if ( ((v23 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v23 == 4 )
      {
        if ( *((_DWORD *)v17 + 2) == 4 )
        {
          v75 = 4;
          v72 = *((_DWORD *)v17 + 3);
        }
        else
        {
          v19 = -1073741820;
        }
        goto LABEL_38;
      }
      if ( v23 == 1 )
      {
        if ( ((unsigned __int8)&v72 & 3) != 0 )
        {
          v19 = -2147483646;
        }
        else
        {
          v75 = 4;
          v86 = v17 + 12;
          v85[0] = *((_WORD *)v17 + 4);
          v85[1] = *((_WORD *)v17 + 4);
          v19 = RtlUnicodeStringToInteger(v85, 0, (int *)&v72);
        }
        goto LABEL_38;
      }
    }
    v19 = -1073741788;
LABEL_38:
    if ( v13 )
    {
LABEL_39:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
      v9 = v74;
    }
    if ( v19 >= 0 && (v72 & 1) != 0 )
    {
      LdrProtectMrdata(0);
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
    }
  }
LABEL_44:
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    v97 = 48;
    v99 = &unk_180132670;
    v98 = v9;
    v100 = 64;
    v101 = 0LL;
    v24 = NtOpenKey();
    v25 = v24;
    if ( v24 == -1073741772 )
    {
      LdrpLargePageDllKeyHandle = 0LL;
    }
    else if ( v24 < 0 )
    {
      goto LABEL_155;
    }
  }
  if ( (int)RtlInitUnicodeStringEx((__int64)v87, (__int64)L"MinimumStackCommitInBytes") >= 0 )
  {
    v26 = &v103;
    v27 = NtQueryValueKey();
    if ( v27 < 0 )
    {
      if ( v27 != -2147483643 )
        goto LABEL_67;
      while ( 1 )
      {
        v30 = NtCurrentPeb()->ProcessHeap;
        if ( !v30 )
          goto LABEL_66;
        v31 = RtlAllocateHeap((__int64)v30, NtdllBaseTag + 1572864, v76);
        v28 = v31;
        if ( !v31 )
          goto LABEL_66;
        v26 = (char *)v31;
        v9 = v74;
        v32 = NtQueryValueKey();
        if ( v32 >= 0 )
          goto LABEL_51;
        if ( v32 != -2147483643 )
          goto LABEL_65;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v26);
      }
    }
    v28 = 0LL;
LABEL_51:
    v29 = *((_DWORD *)v26 + 1);
    if ( ((v29 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v29 == 4 )
      {
        if ( *((_DWORD *)v26 + 2) == 4 )
        {
          v76 = 4;
          v72 = *((_DWORD *)v26 + 3);
        }
      }
      else if ( v29 == 1 && ((unsigned __int8)&v72 & 3) == 0 )
      {
        v76 = 4;
        v88 = v26 + 12;
        v87[0] = *((_WORD *)v26 + 4);
        v87[1] = *((_WORD *)v26 + 4);
        RtlUnicodeStringToInteger(v87, 0, (int *)&v72);
      }
    }
    if ( v28 )
    {
LABEL_65:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v28);
LABEL_66:
      v9 = v74;
    }
  }
LABEL_67:
  if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v72 )
    *(_QWORD *)(a2 + 792) = v72;
  v33 = 0LL;
  v11 = 1;
  do
  {
    v34 = (&off_180132600)[v33];
    v72 = 0;
    RtlQueryImageFileKeyOption(v9, (__int64)v34, 4, &v72, 4u, 0LL);
    v35 = (bool *)*(&off_180132600 + v33 + 1);
    v33 += 2LL;
    *v35 = v72 != 0;
  }
  while ( v33 != 6 );
  v72 = 0;
  if ( (int)RtlInitUnicodeStringEx((__int64)v89, (__int64)L"MaxDeadActivationContexts") >= 0 )
  {
    v36 = &v104;
    v37 = NtQueryValueKey();
    if ( v37 < 0 )
    {
      if ( v37 == -2147483643 )
      {
        while ( 1 )
        {
          v40 = NtCurrentPeb()->ProcessHeap;
          if ( !v40 )
            break;
          v41 = RtlAllocateHeap((__int64)v40, NtdllBaseTag + 1572864, v77);
          v38 = v41;
          if ( !v41 )
            break;
          v36 = (char *)v41;
          v9 = v74;
          v42 = NtQueryValueKey();
          if ( v42 >= 0 )
            goto LABEL_74;
          if ( v42 != -2147483643 )
            goto LABEL_88;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v36);
        }
        v9 = v74;
      }
    }
    else
    {
      v38 = 0LL;
LABEL_74:
      v39 = *((_DWORD *)v36 + 1);
      if ( ((v39 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v39 == 4 )
        {
          if ( *((_DWORD *)v36 + 2) == 4 )
          {
            v77 = 4;
            v72 = *((_DWORD *)v36 + 3);
          }
        }
        else if ( v39 == 1 && ((unsigned __int8)&v72 & 3) == 0 )
        {
          v77 = 4;
          v90 = v36 + 12;
          v89[0] = *((_WORD *)v36 + 4);
          v89[1] = *((_WORD *)v36 + 4);
          RtlUnicodeStringToInteger(v89, 0, (int *)&v72);
        }
      }
      if ( v38 )
      {
LABEL_88:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v38);
        v9 = v74;
      }
      v43 = g_SxsMaxDeadActivationContexts;
      if ( v72 )
        v43 = v72;
      g_SxsMaxDeadActivationContexts = v43;
    }
  }
  v44 = (__int64)v80;
  v8 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
  if ( (int)RtlQueryApplicationKeyOption((__int64)v80, v9, (__int64)L"GlobalFlag", 4u, (__int64)&v79, 4, v70, &v82) < 0 )
    goto LABEL_102;
  v45 = v79;
  if ( (v79 & 0x2000100) == 0 )
    goto LABEL_101;
  if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v44, v9) )
  {
    v45 &= 0xFDFFFEFF;
    v79 = v45;
  }
  if ( (v45 & 0x2000100) == 0 )
    goto LABEL_101;
  if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(v78, &v83) >= 0 )
  {
    if ( !v83 )
    {
      v45 &= 0xFDFFFEFF;
      v79 = v45;
    }
LABEL_101:
    *(_DWORD *)(a2 + 188) = v45;
  }
LABEL_102:
  if ( (int)RtlQueryApplicationKeyOption((__int64)v80, v9, (__int64)L"GlobalFlag2", 4u, (__int64)&v79, 4, v71, 0LL) >= 0 )
    *(_DWORD *)(a2 + 1988) = v79;
  v10 = v73;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    v11 = 0;
  else
    v82 = 0LL;
LABEL_107:
  if ( LdrControlFlowGuardEnforced() )
    v10 |= 1u;
  RtlSetLowFragHeapGlobalFlags(v10, *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
  if ( !v11 || LdrpIsSecureProcess )
  {
    v47 = v78;
  }
  else
  {
    v47 = v78;
    if ( (MEMORY[0x7FFE03A0] & 1) != 0 )
    {
      if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v78, v46, &Handle) < 0 )
      {
        Handle = 0LL;
      }
      else
      {
        v48 = 0LL;
        if ( (int)RtlInitUnicodeStringEx((__int64)v91, (__int64)L"GlobalFlag") >= 0 )
        {
          v49 = &v105;
          v50 = NtQueryValueKey();
          v51 = v50;
          if ( v50 < 0 )
          {
            if ( v50 == -2147483643 )
            {
              while ( 1 )
              {
                v52 = NtCurrentPeb()->ProcessHeap;
                if ( !v52 )
                  break;
                v53 = RtlAllocateHeap((__int64)v52, NtdllBaseTag + 1572864, v73);
                v48 = v53;
                if ( !v53 )
                  break;
                v49 = (char *)v53;
                v54 = NtQueryValueKey();
                v51 = v54;
                if ( v54 >= 0 )
                {
                  v9 = v74;
                  goto LABEL_122;
                }
                if ( v54 != -2147483643 )
                  goto LABEL_133;
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v49);
              }
              v9 = v74;
            }
            v47 = v78;
            goto LABEL_138;
          }
LABEL_122:
          v55 = *((_DWORD *)v49 + 1);
          if ( ((v55 - 3) & 0xFFFFFFFB) != 0 )
          {
            if ( v55 == 4 )
            {
              if ( *((_DWORD *)v49 + 2) == 4 )
              {
                v73 = 4;
                v79 = *((_DWORD *)v49 + 3);
              }
              else
              {
                v51 = -1073741820;
              }
              goto LABEL_132;
            }
            if ( v55 == 1 )
            {
              if ( ((unsigned __int8)&v79 & 3) != 0 )
              {
                v51 = -2147483646;
              }
              else
              {
                v73 = 4;
                v92 = v49 + 12;
                v91[0] = *((_WORD *)v49 + 4);
                v91[1] = *((_WORD *)v49 + 4);
                v51 = RtlUnicodeStringToInteger(v91, 0, &v79);
              }
              goto LABEL_132;
            }
          }
          v51 = -1073741788;
LABEL_132:
          if ( v48 )
          {
LABEL_133:
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v48);
            v9 = v74;
          }
          v47 = v78;
          if ( v51 >= 0 )
          {
            *(_DWORD *)(a2 + 188) |= v79 & 0x2000100;
            v82 = Handle;
          }
        }
      }
    }
  }
LABEL_138:
  v25 = 0;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 || LdrpPayloadRestrictionMitigationsEnabled() )
  {
    v57 = LdrpInitializeApplicationVerifierPackage(v47, a2, v8, (__int64)v82, v84[0], v93);
    v25 = v57;
    if ( v57 < 0 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        9405LL,
        (__int64)"LdrpInitializeExecutionOptions",
        0LL,
        "Initializing the application verifier package failed with status 0x%08lx\n",
        v57);
      goto LABEL_155;
    }
  }
  else if ( !v80 && !v9 )
  {
    if ( *(_BYTE *)(a2 + 2) )
    {
      v56 = *(_QWORD *)(a2 + 32);
      v84[1] = (__int64)&v106;
      LODWORD(v84[0]) = 0x200000;
      if ( (int)RtlQueryEnvironmentVariable_U(*(_WORD **)(v56 + 128), &qword_1801325E0, (__int64)v84) < 0
        || (v25 = RtlUnicodeStringToInteger((unsigned __int16 *)v84, 0, (int *)&v72), v25 < 0)
        || !v72 )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 1988) & 1) != 0 )
    *(_DWORD *)(a2 + 1984) |= 1u;
  if ( v25 >= 0 )
  {
    LdrpQueryIllegalCWDDevices(v9);
    goto LABEL_159;
  }
LABEL_155:
  v58 = v94;
  if ( *v94 )
  {
    NtClose(*v94);
    *v58 = 0LL;
  }
  v59 = v95;
  if ( *v95 )
  {
    NtClose(*v95);
    *v59 = 0LL;
  }
LABEL_159:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v25;
}
