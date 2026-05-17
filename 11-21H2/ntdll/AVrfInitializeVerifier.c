/*
 * XREFs of AVrfInitializeVerifier @ 0x1800E4F54
 * Callers:
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DCD78 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     DbgPrintEx @ 0x180005CC0 (DbgPrintEx.c)
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlInitializeCriticalSectionEx @ 0x18001DA80 (RtlInitializeCriticalSectionEx.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByName @ 0x180041240 (LdrpFindLoadedDllByName.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     LdrpInitializeGraphRecurse @ 0x18007322C (LdrpInitializeGraphRecurse.c)
 *     RtlUnicodeStringToInteger @ 0x18007C230 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A8F40 (_alloca_probe.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800B0844 (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800E5BBC (AVrfpChainDuplicateVerificationLayers.c)
 *     AVrfpEnableVerifierOptions @ 0x1800E60B8 (AVrfpEnableVerifierOptions.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E630C (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpParseVerifierDllsString @ 0x1800E6638 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800E690C (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpVerifierStopInitialize @ 0x1800E6B9C (AVrfpVerifierStopInitialize.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 */

__int64 __fastcall AVrfInitializeVerifier(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rdi
  struct _PEB *v7; // rsi
  int Dll; // ebx
  __int64 *i; // rbx
  int LoadedDllByName; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rbx
  int ProcedureAddressForCaller; // ebx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // rdx
  unsigned int NtGlobalFlag; // r11d
  char v29; // al
  int v30; // ecx
  int v31; // ebx
  char *v32; // rbx
  int ValueKey; // eax
  __int64 v34; // rsi
  int v35; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v38; // eax
  int v39; // eax
  char *v40; // rbx
  int v41; // eax
  void *v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  int v45; // ecx
  char *v46; // rbx
  int v47; // eax
  void *v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  int v51; // ecx
  char *v52; // rdi
  int v53; // eax
  __int64 v54; // rbx
  unsigned int v55; // eax
  int v56; // ecx
  unsigned int v57; // eax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // r9
  void *v65; // rcx
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // [rsp+20h] [rbp-E0h]
  _BYTE v69[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v70; // [rsp+34h] [rbp-CCh]
  unsigned int v71; // [rsp+38h] [rbp-C8h]
  unsigned int v72; // [rsp+3Ch] [rbp-C4h]
  __int64 v73; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v74; // [rsp+48h] [rbp-B8h] BYREF
  int v75; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v76[4]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v77; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v78[4]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v79; // [rsp+70h] [rbp-90h]
  unsigned __int16 v80[4]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v81; // [rsp+80h] [rbp-80h]
  _QWORD *v82; // [rsp+88h] [rbp-78h] BYREF
  __int64 v83; // [rsp+90h] [rbp-70h]
  __int64 v84; // [rsp+98h] [rbp-68h]
  _BYTE v85[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v86; // [rsp+B0h] [rbp-50h] BYREF
  char v87; // [rsp+4B0h] [rbp+3B0h] BYREF
  char v88; // [rsp+8B0h] [rbp+7B0h] BYREF
  char v89; // [rsp+CB0h] [rbp+BB0h] BYREF
  unsigned __int64 retaddr; // [rsp+10F8h] [rbp+FF8h]

  v6 = 0LL;
  v7 = NtCurrentPeb();
  v83 = a5;
  v82 = a6;
  v84 = a2;
  v75 = 0;
  if ( !(_DWORD)a4 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    *a6 = 0LL;
    NtGlobalFlag = v7->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x2000100) != 0 )
    {
      LODWORD(v74) = 1;
    }
    else
    {
      v29 = LdrpPayloadRestrictionMitigationsEnabled();
      v30 = 0;
      if ( v29 )
        v30 = 2;
      LODWORD(v74) = v30;
    }
    if ( (NtGlobalFlag & 0x100) != 0 || (v31 = 0, a1) )
      v31 = 294916;
    AVrfpVerifierFlags = v31;
    AVrfpVerifierDllsString = 0;
    if ( a3 && (int)RtlInitUnicodeStringEx((__int64)v76, (__int64)L"VerifierFlags") >= 0 )
    {
      v32 = &v86;
      ValueKey = NtQueryValueKey();
      if ( ValueKey < 0 )
      {
        if ( ValueKey == -2147483643 )
        {
          while ( 1 )
          {
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v70);
            v34 = Heap;
            if ( !Heap )
              break;
            v32 = (char *)Heap;
            v38 = NtQueryValueKey();
            v6 = 0LL;
            if ( v38 >= 0 )
              goto LABEL_42;
            if ( v38 != -2147483643 )
              goto LABEL_56;
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v32);
          }
          v6 = 0LL;
        }
      }
      else
      {
        v34 = 0LL;
LABEL_42:
        v35 = *((_DWORD *)v32 + 1);
        if ( ((v35 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v35 == 4 )
          {
            if ( *((_DWORD *)v32 + 2) == 4 )
            {
              v70 = 4;
              v75 = *((_DWORD *)v32 + 3);
            }
          }
          else if ( v35 == 1 && ((unsigned __int8)&v75 & 3) == 0 )
          {
            v70 = 4;
            v77 = v32 + 12;
            v76[0] = *((_WORD *)v32 + 4);
            v76[1] = *((_WORD *)v32 + 4);
            RtlUnicodeStringToInteger(v76, 0, &v75);
          }
        }
        if ( v34 )
LABEL_56:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v34);
        LOBYTE(v31) = v75;
        if ( v75 )
        {
          AVrfpVerifierFlags = v75;
          goto LABEL_64;
        }
      }
      LOBYTE(v31) = AVrfpVerifierFlags;
    }
    v39 = AVrfpEnabledSystemWide;
    if ( a1 )
      v39 = 1;
    AVrfpEnabledSystemWide = v39;
    if ( !a3 )
    {
LABEL_110:
      Dll = AvrfMiniLoadDll((unsigned int)&VerifierDllString, v84, a3, v83, (__int64)&AvrfpLoaderEntry);
      if ( Dll >= 0 )
      {
        *v82 = &AvrfpLoaderEntry;
        Dll = AVrfpEnableVerifierOptions();
        if ( Dll >= 0 )
        {
          LdrProtectMrdata(0, v58, v59, v60);
          AvrfAppVerifierMode = v74;
          LdrProtectMrdata(1, v61, v62, v63);
        }
      }
      return (unsigned int)Dll;
    }
LABEL_64:
    if ( (v31 & 4) != 0 && (int)RtlInitUnicodeStringEx((__int64)v78, (__int64)L"HandleTraces") >= 0 )
    {
      v40 = &v87;
      v41 = NtQueryValueKey();
      if ( v41 >= 0 )
      {
LABEL_73:
        v45 = *((_DWORD *)v40 + 1);
        if ( ((v45 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v45 == 4 )
          {
            if ( *((_DWORD *)v40 + 2) == 4 )
            {
              v71 = 4;
              AVrfpHandleTraces = *((_DWORD *)v40 + 3);
            }
          }
          else if ( v45 == 1 && ((unsigned __int8)&AVrfpHandleTraces & 3) == 0 )
          {
            v71 = 4;
            v79 = v40 + 12;
            v78[0] = *((_WORD *)v40 + 4);
            v78[1] = *((_WORD *)v40 + 4);
            RtlUnicodeStringToInteger(v78, 0, &AVrfpHandleTraces);
          }
        }
        if ( v6 )
LABEL_81:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
LABEL_82:
        v6 = 0LL;
      }
      else if ( v41 == -2147483643 )
      {
        while ( 1 )
        {
          v42 = NtCurrentPeb()->ProcessHeap;
          if ( !v42 )
            break;
          v43 = RtlAllocateHeap((__int64)v42, NtdllBaseTag + 1572864, v71);
          v6 = v43;
          if ( !v43 )
            goto LABEL_82;
          v40 = (char *)v43;
          v44 = NtQueryValueKey();
          if ( v44 >= 0 )
            goto LABEL_73;
          if ( v44 != -2147483643 )
            goto LABEL_81;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v40);
          v6 = 0LL;
        }
      }
    }
    if ( (int)RtlInitUnicodeStringEx((__int64)v80, (__int64)L"VerifierDebug") >= 0 )
    {
      v46 = &v88;
      v47 = NtQueryValueKey();
      if ( v47 >= 0 )
      {
LABEL_91:
        v51 = *((_DWORD *)v46 + 1);
        if ( ((v51 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v51 == 4 )
          {
            if ( *((_DWORD *)v46 + 2) == 4 )
            {
              v72 = 4;
              AVrfpDebug = *((_DWORD *)v46 + 3);
            }
          }
          else if ( v51 == 1 && ((unsigned __int8)&AVrfpDebug & 3) == 0 )
          {
            v72 = 4;
            v81 = v46 + 12;
            v80[0] = *((_WORD *)v46 + 4);
            v80[1] = *((_WORD *)v46 + 4);
            RtlUnicodeStringToInteger(v80, 0, &AVrfpDebug);
          }
        }
        if ( v6 )
LABEL_99:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
      }
      else if ( v47 == -2147483643 )
      {
        while ( 1 )
        {
          v48 = NtCurrentPeb()->ProcessHeap;
          if ( !v48 )
            break;
          v49 = RtlAllocateHeap((__int64)v48, NtdllBaseTag + 1572864, v72);
          v6 = v49;
          if ( !v49 )
            break;
          v46 = (char *)v49;
          v50 = NtQueryValueKey();
          if ( v50 >= 0 )
            goto LABEL_91;
          if ( v50 != -2147483643 )
            goto LABEL_99;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v46);
        }
      }
    }
    if ( (int)RtlInitUnicodeStringEx((__int64)v85, (__int64)L"VerifierDlls") >= 0 )
    {
      v52 = &v89;
      v53 = NtQueryValueKey();
      if ( v53 < 0 )
      {
        if ( v53 == -2147483643 )
        {
          while ( 1 )
          {
            v65 = NtCurrentPeb()->ProcessHeap;
            if ( !v65 )
              break;
            v66 = RtlAllocateHeap((__int64)v65, NtdllBaseTag + 1572864, (unsigned int)v73);
            v54 = v66;
            if ( !v66 )
              break;
            v52 = (char *)v66;
            v67 = NtQueryValueKey();
            if ( v67 >= 0 )
              goto LABEL_103;
            if ( v67 != -2147483643 )
              goto LABEL_109;
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v54);
          }
        }
      }
      else
      {
        v54 = 0LL;
LABEL_103:
        v55 = *((_DWORD *)v52 + 1);
        if ( v55 > 0xB || (v56 = 2200, !_bittest(&v56, v55)) )
        {
          if ( v55 == 1 )
          {
            v57 = *((_DWORD *)v52 + 2);
            LODWORD(v73) = v57;
            if ( v57 <= 0x200 )
              memmove(&AVrfpVerifierDllsString, v52 + 12, v57);
          }
        }
        if ( v54 )
LABEL_109:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v54);
      }
    }
    goto LABEL_110;
  }
  if ( (_DWORD)a4 != 1 )
    return 0;
  qword_180179358 = (__int64)&AVrfpVerifierProvidersList;
  AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
  Dll = RtlInitializeCriticalSectionEx((__int64)&AVrfpVerifierLock, 0LL, 0LL, a4);
  if ( Dll < 0 )
    return (unsigned int)Dll;
  if ( AvrfAppVerifierMode == 2 )
  {
    v69[0] = 0;
    Dll = LdrpInitializeGraphRecurse(qword_180179498, 0LL, v69);
    if ( Dll < 0 )
      return (unsigned int)Dll;
    return 0;
  }
  DbgPrintEx(
    93,
    0,
    "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
    *(_QWORD *)(qword_18017A150 + 96),
    LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
    AVrfpVerifierFlags);
  if ( (int)AVrfpParseVerifierDllsString() < 0 )
  {
    LODWORD(v68) = NtCurrentTeb()->ClientId.UniqueProcess;
    DbgPrintEx(
      93,
      0,
      "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
      *(_QWORD *)(qword_18017A150 + 96),
      v68);
    Dll = -1073741823;
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
    return (unsigned int)Dll;
  }
  for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
  {
    if ( !(unsigned __int8)AVrfpLoadAndInitializeProvider(i) )
      return (unsigned int)-1073741502;
  }
  AVrfpChainDuplicateVerificationLayers();
  LoadedDllByName = LdrpFindLoadedDllByName(VrfcoreDllString, 0LL, 0LL, (unsigned __int64)&v74, 0LL);
  Dll = LoadedDllByName;
  if ( LoadedDllByName < 0 )
  {
    if ( LoadedDllByName != -1073741515 )
      return (unsigned int)Dll;
    v16 = qword_180179390;
  }
  else
  {
    v16 = *(_QWORD *)(v74 + 48);
    LdrpDereferenceModule(v74, v13, v14, v15);
  }
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                v16,
                                &AvrfpAPILookupCallbackName,
                                0LL,
                                (volatile signed __int32 *)&v73,
                                1,
                                retaddr);
  LdrProtectMrdata(0, v18, v19, v20);
  if ( ProcedureAddressForCaller >= 0 )
  {
    v21 = __ROR8__(v73 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    AvrfpAPILookupCallbackRoutine = v21;
    AvrfpAPILookupCallbacksEnabled = 1;
  }
  AVrfpEnabled = 1;
  RtlGuardAllowSuppressedCalls = 1;
  LdrProtectMrdata(1, v21, v22, v23);
  AVrfpSnapAlreadyLoadedDlls();
  v24 = (__int64 *)AVrfpVerifierProvidersList;
  if ( (__int64 *)AVrfpVerifierProvidersList == &AVrfpVerifierProvidersList )
  {
LABEL_21:
    if ( (AVrfpDebug & 8) != 0 )
    {
      DbgPrint("AVRF: -*- final list of providers -*- \n");
      v26 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v26 != &AVrfpVerifierProvidersList )
      {
        v27 = v26[3];
        v26 = (__int64 *)*v26;
        DbgPrint("AVRF: provider %ws \n", v27);
      }
    }
    AVrfpVerifierStopInitialize();
    RtlImageNtHeaderEx(3, (unsigned __int64)v7->ImageBaseAddress, 0LL, &v82);
    return 0;
  }
  while ( 1 )
  {
    v25 = v24[4];
    v69[0] = 0;
    Dll = LdrpInitializeGraphRecurse(*(__int64 **)(v25 + 152), 0LL, v69);
    if ( Dll < 0 )
      return (unsigned int)Dll;
    v24 = (__int64 *)*v24;
    if ( v24 == &AVrfpVerifierProvidersList )
      goto LABEL_21;
  }
}
