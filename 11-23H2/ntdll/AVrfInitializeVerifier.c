/*
 * XREFs of AVrfInitializeVerifier @ 0x1800E5114
 * Callers:
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DCEA8 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByName @ 0x180029A40 (LdrpFindLoadedDllByName.c)
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005CDF0 (RtlInitializeCriticalSectionEx.c)
 *     LdrpInitializeGraphRecurse @ 0x18006D42C (LdrpInitializeGraphRecurse.c)
 *     RtlUnicodeStringToInteger @ 0x180077500 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A5E30 (_alloca_probe.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800AF77E (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800E5D7C (AVrfpChainDuplicateVerificationLayers.c)
 *     AVrfpEnableVerifierOptions @ 0x1800E6268 (AVrfpEnableVerifierOptions.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E64B0 (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpParseVerifierDllsString @ 0x1800E67D0 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800E6AA4 (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpVerifierStopInitialize @ 0x1800E6D28 (AVrfpVerifierStopInitialize.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 */

__int64 __fastcall AVrfInitializeVerifier(char a1, __int64 a2, __int64 a3, int a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rdi
  struct _PEB *v7; // rsi
  int Dll; // ebx
  __int64 *i; // rbx
  int LoadedDllByName; // eax
  unsigned __int64 v13; // rbx
  int ProcedureAddressForCaller; // ebx
  __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rdx
  unsigned int NtGlobalFlag; // r11d
  char v20; // al
  int v21; // ecx
  int v22; // ebx
  char *v23; // rbx
  int ValueKey; // eax
  __int64 v25; // rsi
  int v26; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v29; // eax
  int v30; // eax
  char *v31; // rbx
  int v32; // eax
  void *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  int v36; // ecx
  char *v37; // rbx
  int v38; // eax
  void *v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  int v42; // ecx
  char *v43; // rdi
  int v44; // eax
  __int64 v45; // rbx
  unsigned int v46; // eax
  int v47; // ecx
  unsigned int v48; // eax
  void *v50; // rcx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // [rsp+20h] [rbp-E0h]
  _BYTE v54[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v55; // [rsp+34h] [rbp-CCh]
  unsigned int v56; // [rsp+38h] [rbp-C8h]
  unsigned int v57; // [rsp+3Ch] [rbp-C4h]
  __int64 v58; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+48h] [rbp-B8h] BYREF
  int v60; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v61[4]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v62; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v63[4]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v64; // [rsp+70h] [rbp-90h]
  unsigned __int16 v65[4]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v66; // [rsp+80h] [rbp-80h]
  _QWORD *v67; // [rsp+88h] [rbp-78h] BYREF
  __int64 v68; // [rsp+90h] [rbp-70h]
  __int64 v69; // [rsp+98h] [rbp-68h]
  _BYTE v70[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v71; // [rsp+B0h] [rbp-50h] BYREF
  char v72; // [rsp+4B0h] [rbp+3B0h] BYREF
  char v73; // [rsp+8B0h] [rbp+7B0h] BYREF
  char v74; // [rsp+CB0h] [rbp+BB0h] BYREF
  unsigned __int64 retaddr; // [rsp+10F8h] [rbp+FF8h]

  v6 = 0LL;
  v7 = NtCurrentPeb();
  v68 = a5;
  v67 = a6;
  v69 = a2;
  v60 = 0;
  if ( !a4 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    *a6 = 0LL;
    NtGlobalFlag = v7->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x2000100) != 0 )
    {
      LODWORD(v59) = 1;
    }
    else
    {
      v20 = LdrpPayloadRestrictionMitigationsEnabled();
      v21 = 0;
      if ( v20 )
        v21 = 2;
      LODWORD(v59) = v21;
    }
    if ( (NtGlobalFlag & 0x100) != 0 || (v22 = 0, a1) )
      v22 = 294916;
    AVrfpVerifierFlags = v22;
    AVrfpVerifierDllsString = 0;
    if ( a3 && (int)RtlInitUnicodeStringEx((__int64)v61, (__int64)L"VerifierFlags") >= 0 )
    {
      v23 = &v71;
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
            Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v55);
            v25 = Heap;
            if ( !Heap )
              break;
            v23 = (char *)Heap;
            v29 = NtQueryValueKey();
            v6 = 0LL;
            if ( v29 >= 0 )
              goto LABEL_42;
            if ( v29 != -2147483643 )
              goto LABEL_56;
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v23);
          }
          v6 = 0LL;
        }
      }
      else
      {
        v25 = 0LL;
LABEL_42:
        v26 = *((_DWORD *)v23 + 1);
        if ( ((v26 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v26 == 4 )
          {
            if ( *((_DWORD *)v23 + 2) == 4 )
            {
              v55 = 4;
              v60 = *((_DWORD *)v23 + 3);
            }
          }
          else if ( v26 == 1 && ((unsigned __int8)&v60 & 3) == 0 )
          {
            v55 = 4;
            v62 = v23 + 12;
            v61[0] = *((_WORD *)v23 + 4);
            v61[1] = *((_WORD *)v23 + 4);
            RtlUnicodeStringToInteger(v61, 0, &v60);
          }
        }
        if ( v25 )
LABEL_56:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v25);
        LOBYTE(v22) = v60;
        if ( v60 )
        {
          AVrfpVerifierFlags = v60;
          goto LABEL_64;
        }
      }
      LOBYTE(v22) = AVrfpVerifierFlags;
    }
    v30 = AVrfpEnabledSystemWide;
    if ( a1 )
      v30 = 1;
    AVrfpEnabledSystemWide = v30;
    if ( !a3 )
    {
LABEL_110:
      Dll = AvrfMiniLoadDll((unsigned int)&VerifierDllString, v69, a3, v68, (__int64)&AvrfpLoaderEntry);
      if ( Dll >= 0 )
      {
        *v67 = &AvrfpLoaderEntry;
        Dll = AVrfpEnableVerifierOptions();
        if ( Dll >= 0 )
        {
          LdrProtectMrdata(0);
          AvrfAppVerifierMode = v59;
          LdrProtectMrdata(1);
        }
      }
      return (unsigned int)Dll;
    }
LABEL_64:
    if ( (v22 & 4) != 0 && (int)RtlInitUnicodeStringEx((__int64)v63, (__int64)L"HandleTraces") >= 0 )
    {
      v31 = &v72;
      v32 = NtQueryValueKey();
      if ( v32 >= 0 )
      {
LABEL_73:
        v36 = *((_DWORD *)v31 + 1);
        if ( ((v36 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v36 == 4 )
          {
            if ( *((_DWORD *)v31 + 2) == 4 )
            {
              v56 = 4;
              AVrfpHandleTraces = *((_DWORD *)v31 + 3);
            }
          }
          else if ( v36 == 1 && ((unsigned __int8)&AVrfpHandleTraces & 3) == 0 )
          {
            v56 = 4;
            v64 = v31 + 12;
            v63[0] = *((_WORD *)v31 + 4);
            v63[1] = *((_WORD *)v31 + 4);
            RtlUnicodeStringToInteger(v63, 0, &AVrfpHandleTraces);
          }
        }
        if ( v6 )
LABEL_81:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
LABEL_82:
        v6 = 0LL;
      }
      else if ( v32 == -2147483643 )
      {
        while ( 1 )
        {
          v33 = NtCurrentPeb()->ProcessHeap;
          if ( !v33 )
            break;
          v34 = RtlAllocateHeap((__int64)v33, NtdllBaseTag + 1572864, v56);
          v6 = v34;
          if ( !v34 )
            goto LABEL_82;
          v31 = (char *)v34;
          v35 = NtQueryValueKey();
          if ( v35 >= 0 )
            goto LABEL_73;
          if ( v35 != -2147483643 )
            goto LABEL_81;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v31);
          v6 = 0LL;
        }
      }
    }
    if ( (int)RtlInitUnicodeStringEx((__int64)v65, (__int64)L"VerifierDebug") >= 0 )
    {
      v37 = &v73;
      v38 = NtQueryValueKey();
      if ( v38 >= 0 )
      {
LABEL_91:
        v42 = *((_DWORD *)v37 + 1);
        if ( ((v42 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v42 == 4 )
          {
            if ( *((_DWORD *)v37 + 2) == 4 )
            {
              v57 = 4;
              AVrfpDebug = *((_DWORD *)v37 + 3);
            }
          }
          else if ( v42 == 1 && ((unsigned __int8)&AVrfpDebug & 3) == 0 )
          {
            v57 = 4;
            v66 = v37 + 12;
            v65[0] = *((_WORD *)v37 + 4);
            v65[1] = *((_WORD *)v37 + 4);
            RtlUnicodeStringToInteger(v65, 0, &AVrfpDebug);
          }
        }
        if ( v6 )
LABEL_99:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
      }
      else if ( v38 == -2147483643 )
      {
        while ( 1 )
        {
          v39 = NtCurrentPeb()->ProcessHeap;
          if ( !v39 )
            break;
          v40 = RtlAllocateHeap((__int64)v39, NtdllBaseTag + 1572864, v57);
          v6 = v40;
          if ( !v40 )
            break;
          v37 = (char *)v40;
          v41 = NtQueryValueKey();
          if ( v41 >= 0 )
            goto LABEL_91;
          if ( v41 != -2147483643 )
            goto LABEL_99;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v37);
        }
      }
    }
    if ( (int)RtlInitUnicodeStringEx((__int64)v70, (__int64)L"VerifierDlls") >= 0 )
    {
      v43 = &v74;
      v44 = NtQueryValueKey();
      if ( v44 < 0 )
      {
        if ( v44 == -2147483643 )
        {
          while ( 1 )
          {
            v50 = NtCurrentPeb()->ProcessHeap;
            if ( !v50 )
              break;
            v51 = RtlAllocateHeap((__int64)v50, NtdllBaseTag + 1572864, (unsigned int)v58);
            v45 = v51;
            if ( !v51 )
              break;
            v43 = (char *)v51;
            v52 = NtQueryValueKey();
            if ( v52 >= 0 )
              goto LABEL_103;
            if ( v52 != -2147483643 )
              goto LABEL_109;
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v45);
          }
        }
      }
      else
      {
        v45 = 0LL;
LABEL_103:
        v46 = *((_DWORD *)v43 + 1);
        if ( v46 > 0xB || (v47 = 2200, !_bittest(&v47, v46)) )
        {
          if ( v46 == 1 )
          {
            v48 = *((_DWORD *)v43 + 2);
            LODWORD(v58) = v48;
            if ( v48 <= 0x200 )
              memmove(&AVrfpVerifierDllsString, v43 + 12, v48);
          }
        }
        if ( v45 )
LABEL_109:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v45);
      }
    }
    goto LABEL_110;
  }
  if ( a4 != 1 )
    return 0;
  qword_180186678 = (__int64)&AVrfpVerifierProvidersList;
  AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
  Dll = RtlInitializeCriticalSectionEx((__int64)&AVrfpVerifierLock, 0, 0);
  if ( Dll < 0 )
    return (unsigned int)Dll;
  if ( AvrfAppVerifierMode == 2 )
  {
    v54[0] = 0;
    Dll = LdrpInitializeGraphRecurse(qword_1801867B8, 0LL, v54);
    if ( Dll < 0 )
      return (unsigned int)Dll;
    return 0;
  }
  DbgPrintEx(
    93,
    0,
    "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
    *(_QWORD *)(qword_180187450 + 96),
    LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
    AVrfpVerifierFlags);
  if ( (int)AVrfpParseVerifierDllsString() < 0 )
  {
    LODWORD(v53) = NtCurrentTeb()->ClientId.UniqueProcess;
    DbgPrintEx(
      93,
      0,
      "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
      *(_QWORD *)(qword_180187450 + 96),
      v53);
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
  LoadedDllByName = LdrpFindLoadedDllByName(VrfcoreDllString, 0LL, 0, (__int64)&v59, 0LL);
  Dll = LoadedDllByName;
  if ( LoadedDllByName < 0 )
  {
    if ( LoadedDllByName != -1073741515 )
      return (unsigned int)Dll;
    v13 = qword_1801866B0;
  }
  else
  {
    v13 = *(_QWORD *)(v59 + 48);
    LdrpDereferenceModule(v59);
  }
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v13, &AvrfpAPILookupCallbackName, 0, &v58, 1, retaddr);
  LdrProtectMrdata(0);
  if ( ProcedureAddressForCaller >= 0 )
  {
    AvrfpAPILookupCallbackRoutine = __ROR8__(v58 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    AvrfpAPILookupCallbacksEnabled = 1;
  }
  AVrfpEnabled = 1;
  RtlGuardAllowSuppressedCalls = 1;
  LdrProtectMrdata(1);
  AVrfpSnapAlreadyLoadedDlls();
  v15 = (__int64 *)AVrfpVerifierProvidersList;
  if ( (__int64 *)AVrfpVerifierProvidersList == &AVrfpVerifierProvidersList )
  {
LABEL_21:
    if ( (AVrfpDebug & 8) != 0 )
    {
      DbgPrint("AVRF: -*- final list of providers -*- \n");
      v17 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v17 != &AVrfpVerifierProvidersList )
      {
        v18 = v17[3];
        v17 = (__int64 *)*v17;
        DbgPrint("AVRF: provider %ws \n", v18);
      }
    }
    AVrfpVerifierStopInitialize();
    RtlImageNtHeaderEx(3, (unsigned __int64)v7->ImageBaseAddress, 0LL, &v67);
    return 0;
  }
  while ( 1 )
  {
    v16 = v15[4];
    v54[0] = 0;
    Dll = LdrpInitializeGraphRecurse(*(__int64 **)(v16 + 152), 0LL, v54);
    if ( Dll < 0 )
      return (unsigned int)Dll;
    v15 = (__int64 *)*v15;
    if ( v15 == &AVrfpVerifierProvidersList )
      goto LABEL_21;
  }
}
