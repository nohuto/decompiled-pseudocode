/*
 * XREFs of AVrfInitializeVerifier @ 0x1800E3DE4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DD4F8 (LdrpInitializeApplicationVerifierPackage.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x180022190 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByName @ 0x180029C10 (LdrpFindLoadedDllByName.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     DbgPrintEx @ 0x180053A30 (DbgPrintEx.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005FC80 (RtlInitializeCriticalSectionEx.c)
 *     LdrpInitializeGraphRecurse @ 0x18006D42C (LdrpInitializeGraphRecurse.c)
 *     RtlUnicodeStringToInteger @ 0x180076E90 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A3D80 (_alloca_probe.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800AD6AE (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800E4A4C (AVrfpChainDuplicateVerificationLayers.c)
 *     AVrfpEnableVerifierOptions @ 0x1800E4F38 (AVrfpEnableVerifierOptions.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E5180 (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpParseVerifierDllsString @ 0x1800E54A0 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800E5774 (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpVerifierStopInitialize @ 0x1800E59F8 (AVrfpVerifierStopInitialize.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 */

__int64 __fastcall AVrfInitializeVerifier(char a1, __int64 a2, void *a3, int a4, __int64 a5, _IMAGE_NT_HEADERS64 *a6)
{
  void *v6; // rdi
  struct _PEB *v7; // rsi
  int Dll; // ebx
  __int64 *i; // rbx
  int LoadedDllByName; // eax
  void *v13; // rbx
  NTSTATUS ProcedureAddressForCaller; // ebx
  __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rdx
  unsigned int NtGlobalFlag; // r11d
  char v20; // al
  int v21; // ecx
  int v22; // ebx
  _BYTE *v23; // rbx
  NTSTATUS v24; // eax
  void *v25; // rsi
  int v26; // ecx
  ULONG v27; // edi
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v30; // eax
  int v31; // eax
  _BYTE *v32; // rbx
  NTSTATUS v33; // eax
  ULONG v34; // esi
  void *v35; // rcx
  PVOID v36; // rax
  NTSTATUS v37; // eax
  int v38; // ecx
  _BYTE *v39; // rbx
  NTSTATUS v40; // eax
  ULONG v41; // esi
  void *v42; // rcx
  PVOID v43; // rax
  NTSTATUS v44; // eax
  int v45; // ecx
  _DWORD *v46; // rdi
  NTSTATUS v47; // eax
  void *v48; // rbx
  unsigned int v49; // eax
  int v50; // ecx
  unsigned int v51; // eax
  ULONG v53; // esi
  void *v54; // rcx
  PVOID v55; // rax
  NTSTATUS v56; // eax
  ULONG Flags[2]; // [rsp+20h] [rbp-E0h]
  _BYTE v58[4]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG Length; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v61; // [rsp+3Ch] [rbp-C4h] BYREF
  PVOID ProcedureAddress; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Value; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING String; // [rsp+78h] [rbp-88h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+88h] [rbp-78h] BYREF
  __int64 v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+98h] [rbp-68h]
  _UNICODE_STRING v71; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v73[1024]; // [rsp+4B0h] [rbp+3B0h] BYREF
  _BYTE v74[1024]; // [rsp+8B0h] [rbp+7B0h] BYREF
  _BYTE v75[1024]; // [rsp+CB0h] [rbp+BB0h] BYREF
  PVOID *Callback; // [rsp+10F8h] [rbp+FF8h]

  v6 = 0LL;
  v7 = NtCurrentPeb();
  v69 = a5;
  OutHeaders = a6;
  v70 = a2;
  Value = 0;
  if ( !a4 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    *(_QWORD *)&a6->Signature = 0LL;
    NtGlobalFlag = v7->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x2000100) != 0 )
    {
      LODWORD(BaseAddress) = 1;
    }
    else
    {
      v20 = LdrpPayloadRestrictionMitigationsEnabled();
      v21 = 0;
      if ( v20 )
        v21 = 2;
      LODWORD(BaseAddress) = v21;
    }
    if ( (NtGlobalFlag & 0x100) != 0 || (v22 = 0, a1) )
      v22 = 294916;
    AVrfpVerifierFlags = v22;
    AVrfpVerifierDllsString = 0;
    if ( a3 && RtlInitUnicodeStringEx(&DestinationString, L"VerifierFlags") >= 0 )
    {
      v23 = KeyValueInformation;
      v24 = NtQueryValueKey(
              a3,
              &DestinationString,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x400u,
              &ResultLength);
      if ( v24 < 0 )
      {
        if ( v24 == -2147483643 )
        {
          while ( 1 )
          {
            v27 = ResultLength;
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
            v25 = Heap;
            if ( !Heap )
              break;
            v23 = Heap;
            v30 = NtQueryValueKey(a3, &DestinationString, KeyValuePartialInformation, Heap, v27, &ResultLength);
            v6 = 0LL;
            if ( v30 >= 0 )
              goto LABEL_42;
            if ( v30 != -2147483643 )
              goto LABEL_56;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v23);
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
              ResultLength = 4;
              Value = *((_DWORD *)v23 + 3);
            }
          }
          else if ( v26 == 1 && ((unsigned __int8)&Value & 3) == 0 )
          {
            ResultLength = 4;
            DestinationString.Buffer = (wchar_t *)(v23 + 12);
            DestinationString.Length = *((_WORD *)v23 + 4);
            DestinationString.MaximumLength = *((_WORD *)v23 + 4);
            RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
          }
        }
        if ( v25 )
LABEL_56:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v25);
        LOBYTE(v22) = Value;
        if ( Value )
        {
          AVrfpVerifierFlags = Value;
          goto LABEL_64;
        }
      }
      LOBYTE(v22) = AVrfpVerifierFlags;
    }
    v31 = AVrfpEnabledSystemWide;
    if ( a1 )
      v31 = 1;
    AVrfpEnabledSystemWide = v31;
    if ( !a3 )
    {
LABEL_110:
      Dll = AvrfMiniLoadDll((unsigned int)&VerifierDllString, v70, (_DWORD)a3, v69, (__int64)&AvrfpLoaderEntry);
      if ( Dll >= 0 )
      {
        *(_QWORD *)&OutHeaders->Signature = &AvrfpLoaderEntry;
        Dll = AVrfpEnableVerifierOptions();
        if ( Dll >= 0 )
        {
          LdrProtectMrdata(0);
          AvrfAppVerifierMode = (int)BaseAddress;
          LdrProtectMrdata(1);
        }
      }
      return (unsigned int)Dll;
    }
LABEL_64:
    if ( (v22 & 4) != 0 && RtlInitUnicodeStringEx(&ValueName, L"HandleTraces") >= 0 )
    {
      v32 = v73;
      v33 = NtQueryValueKey(a3, &ValueName, KeyValuePartialInformation, v73, 0x400u, &Length);
      if ( v33 >= 0 )
      {
LABEL_73:
        v38 = *((_DWORD *)v32 + 1);
        if ( ((v38 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v38 == 4 )
          {
            if ( *((_DWORD *)v32 + 2) == 4 )
            {
              Length = 4;
              AVrfpHandleTraces = *((_DWORD *)v32 + 3);
            }
          }
          else if ( v38 == 1 && ((unsigned __int8)&AVrfpHandleTraces & 3) == 0 )
          {
            Length = 4;
            ValueName.Buffer = (wchar_t *)(v32 + 12);
            ValueName.Length = *((_WORD *)v32 + 4);
            ValueName.MaximumLength = *((_WORD *)v32 + 4);
            RtlUnicodeStringToInteger(&ValueName, 0, &AVrfpHandleTraces);
          }
        }
        if ( v6 )
LABEL_81:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
LABEL_82:
        v6 = 0LL;
      }
      else if ( v33 == -2147483643 )
      {
        while ( 1 )
        {
          v34 = Length;
          v35 = NtCurrentPeb()->ProcessHeap;
          if ( !v35 )
            break;
          v36 = RtlAllocateHeap(v35, NtdllBaseTag + 1572864, Length);
          v6 = v36;
          if ( !v36 )
            goto LABEL_82;
          v32 = v36;
          v37 = NtQueryValueKey(a3, &ValueName, KeyValuePartialInformation, v36, v34, &Length);
          if ( v37 >= 0 )
            goto LABEL_73;
          if ( v37 != -2147483643 )
            goto LABEL_81;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v32);
          v6 = 0LL;
        }
      }
    }
    if ( RtlInitUnicodeStringEx(&String, L"VerifierDebug") >= 0 )
    {
      v39 = v74;
      v40 = NtQueryValueKey(a3, &String, KeyValuePartialInformation, v74, 0x400u, &v61);
      if ( v40 >= 0 )
      {
LABEL_91:
        v45 = *((_DWORD *)v39 + 1);
        if ( ((v45 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v45 == 4 )
          {
            if ( *((_DWORD *)v39 + 2) == 4 )
            {
              v61 = 4;
              AVrfpDebug = *((_DWORD *)v39 + 3);
            }
          }
          else if ( v45 == 1 && ((unsigned __int8)&AVrfpDebug & 3) == 0 )
          {
            v61 = 4;
            String.Buffer = (wchar_t *)(v39 + 12);
            String.Length = *((_WORD *)v39 + 4);
            String.MaximumLength = *((_WORD *)v39 + 4);
            RtlUnicodeStringToInteger(&String, 0, &AVrfpDebug);
          }
        }
        if ( v6 )
LABEL_99:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
      }
      else if ( v40 == -2147483643 )
      {
        while ( 1 )
        {
          v41 = v61;
          v42 = NtCurrentPeb()->ProcessHeap;
          if ( !v42 )
            break;
          v43 = RtlAllocateHeap(v42, NtdllBaseTag + 1572864, v61);
          v6 = v43;
          if ( !v43 )
            break;
          v39 = v43;
          v44 = NtQueryValueKey(a3, &String, KeyValuePartialInformation, v43, v41, &v61);
          if ( v44 >= 0 )
            goto LABEL_91;
          if ( v44 != -2147483643 )
            goto LABEL_99;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v39);
        }
      }
    }
    if ( RtlInitUnicodeStringEx(&v71, L"VerifierDlls") >= 0 )
    {
      v46 = v75;
      v47 = NtQueryValueKey(a3, &v71, KeyValuePartialInformation, v75, 0x400u, (PULONG)&ProcedureAddress);
      if ( v47 < 0 )
      {
        if ( v47 == -2147483643 )
        {
          while ( 1 )
          {
            v53 = (unsigned int)ProcedureAddress;
            v54 = NtCurrentPeb()->ProcessHeap;
            if ( !v54 )
              break;
            v55 = RtlAllocateHeap(v54, NtdllBaseTag + 1572864, (unsigned int)ProcedureAddress);
            v48 = v55;
            if ( !v55 )
              break;
            v46 = v55;
            v56 = NtQueryValueKey(a3, &v71, KeyValuePartialInformation, v55, v53, (PULONG)&ProcedureAddress);
            if ( v56 >= 0 )
              goto LABEL_103;
            if ( v56 != -2147483643 )
              goto LABEL_109;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v48);
          }
        }
      }
      else
      {
        v48 = 0LL;
LABEL_103:
        v49 = v46[1];
        if ( v49 > 0xB || (v50 = 2200, !_bittest(&v50, v49)) )
        {
          if ( v49 == 1 )
          {
            v51 = v46[2];
            LODWORD(ProcedureAddress) = v51;
            if ( v51 <= 0x200 )
              memmove(&AVrfpVerifierDllsString, v46 + 3, v51);
          }
        }
        if ( v48 )
LABEL_109:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v48);
      }
    }
    goto LABEL_110;
  }
  if ( a4 != 1 )
    return 0;
  qword_1801835D8 = (__int64)&AVrfpVerifierProvidersList;
  AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
  Dll = RtlInitializeCriticalSectionEx(&AVrfpVerifierLock, 0, 0);
  if ( Dll < 0 )
    return (unsigned int)Dll;
  if ( AvrfAppVerifierMode == 2 )
  {
    v58[0] = 0;
    Dll = LdrpInitializeGraphRecurse(qword_180183718, 0LL, v58);
    if ( Dll < 0 )
      return (unsigned int)Dll;
    return 0;
  }
  DbgPrintEx(
    0x5Du,
    0,
    "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
    *(_QWORD *)(qword_180184390 + 96),
    LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
    AVrfpVerifierFlags);
  if ( (int)AVrfpParseVerifierDllsString() < 0 )
  {
    Flags[0] = (ULONG)NtCurrentTeb()->ClientId.UniqueProcess;
    DbgPrintEx(
      0x5Du,
      0,
      "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
      *(_QWORD *)(qword_180184390 + 96),
      *(_QWORD *)Flags);
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
  LoadedDllByName = LdrpFindLoadedDllByName((PUNICODE_STRING)&VrfcoreDllString, 0LL, 0, (__int64)&BaseAddress, 0LL);
  Dll = LoadedDllByName;
  if ( LoadedDllByName < 0 )
  {
    if ( LoadedDllByName != -1073741515 )
      return (unsigned int)Dll;
    v13 = (void *)qword_180183610;
  }
  else
  {
    v13 = (void *)*((_QWORD *)BaseAddress + 6);
    LdrpDereferenceModule((char *)BaseAddress);
  }
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                v13,
                                (PANSI_STRING)&AvrfpAPILookupCallbackName,
                                0,
                                &ProcedureAddress,
                                1u,
                                Callback);
  LdrProtectMrdata(0);
  if ( ProcedureAddressForCaller >= 0 )
  {
    AvrfpAPILookupCallbackRoutine = __ROR8__(
                                      (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                      MEMORY[0x7FFE0330] & 0x3F);
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
    RtlImageNtHeaderEx(3u, v7->ImageBaseAddress, 0LL, &OutHeaders);
    return 0;
  }
  while ( 1 )
  {
    v16 = v15[4];
    v58[0] = 0;
    Dll = LdrpInitializeGraphRecurse(*(__int64 **)(v16 + 152), 0LL, v58);
    if ( Dll < 0 )
      return (unsigned int)Dll;
    v15 = (__int64 *)*v15;
    if ( v15 == &AVrfpVerifierProvidersList )
      goto LABEL_21;
  }
}
