/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x18003AFD0
 * Callers:
 *     LdrGetProcedureAddressEx @ 0x180072FD0 (LdrGetProcedureAddressEx.c)
 *     CsrClientConnectToServer @ 0x1800794A0 (CsrClientConnectToServer.c)
 *     LdrpCodeAuthzInitialize @ 0x180082D6C (LdrpCodeAuthzInitialize.c)
 *     LdrGetProcedureAddress @ 0x180088420 (LdrGetProcedureAddress.c)
 *     LdrpLoadWow64 @ 0x180089F1C (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800E2D70 (RtlWow64LogMessageInEventLogger.c)
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 *     AVrfpDetectVerifiedExports @ 0x1800E5CDC (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800E6B9C (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18001C640 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpEnterCriticalSectionContended @ 0x18003A630 (RtlpEnterCriticalSectionContended.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpResolveProcedureAddress @ 0x18003B748 (LdrpResolveProcedureAddress.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18004D120 (RtlIsCriticalSectionLockedByThread.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     LdrpFreeUnicodeString @ 0x180051B14 (LdrpFreeUnicodeString.c)
 *     LdrpInitializeGraphRecurse @ 0x18007322C (LdrpInitializeGraphRecurse.c)
 *     LdrpDestroyNode @ 0x180075920 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x18007A514 (LdrpUnmapModule.c)
 *     LdrpDropLastInProgressCount @ 0x18007D1B4 (LdrpDropLastInProgressCount.c)
 *     LdrpReportError @ 0x18007E00C (LdrpReportError.c)
 *     LdrpReleaseTlsEntry @ 0x180084CD8 (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     LdrpDereferenceEnclave @ 0x1800D8A60 (LdrpDereferenceEnclave.c)
 *     AVrfCallAPILookupCallback @ 0x1800E4D90 (AVrfCallAPILookupCallback.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010A1C0 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlValidateUserCallTarget @ 0x18010A264 (RtlValidateUserCallTarget.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressForCaller(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags,
        PVOID *Callback)
{
  __int64 v6; // r13
  bool v7; // zf
  int v10; // r12d
  int v11; // r14d
  size_t Length; // rdi
  unsigned int v13; // esi
  PVOID *i; // rbx
  struct _TEB *v15; // rax
  signed __int8 v16; // cf
  void *UniqueThread; // rax
  PVOID *v18; // rax
  unsigned __int64 Root; // rax
  __int64 v20; // rsi
  int v21; // ebp
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rsi
  ULONG v24; // ebp
  NTSTATUS v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // rcx
  PVOID v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  _BYTE *v37; // r13
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  _QWORD *v40; // rsi
  _QWORD *v41; // rbp
  _ACTIVATION_CONTEXT *v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rdx
  _QWORD *v45; // rdi
  _QWORD *v46; // rsi
  _ACTIVATION_CONTEXT *v47; // rcx
  char *v48; // rdi
  int v49; // [rsp+20h] [rbp-128h]
  char v50; // [rsp+30h] [rbp-118h]
  ULONG v51; // [rsp+34h] [rbp-114h] BYREF
  char v52[8]; // [rsp+38h] [rbp-110h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-108h]
  char *v54; // [rsp+48h] [rbp-100h] BYREF
  int v55; // [rsp+50h] [rbp-F8h]
  PVOID v56; // [rsp+58h] [rbp-F0h]
  char *v57; // [rsp+60h] [rbp-E8h] BYREF
  char v58[8]; // [rsp+68h] [rbp-E0h] BYREF
  PVOID *v59; // [rsp+70h] [rbp-D8h]
  _BYTE v60[128]; // [rsp+80h] [rbp-C8h] BYREF
  ULONG Flagsa; // [rsp+170h] [rbp+28h]

  v6 = 0LL;
  v7 = (Flags & 1) == 0;
  Flagsa = Flags & 1;
  v59 = ProcedureAddress;
  v51 = ProcedureNumber;
  v10 = 9;
  v54 = 0LL;
  v50 = 0;
  if ( v7 || !RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
    v11 = 9;
  else
    v11 = 6;
  if ( ProcedureName )
  {
    Length = ProcedureName->Length;
    v13 = Length + 1;
    if ( ProcedureName->MaximumLength < (unsigned int)(Length + 1)
      || (BaseAddress = ProcedureName->Buffer, *((_BYTE *)BaseAddress + Length)) )
    {
      if ( v13 <= 0x80 )
      {
        v37 = v60;
        BaseAddress = v60;
      }
      else
      {
        BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v13);
        v37 = BaseAddress;
        if ( !BaseAddress )
          return -1073741670;
        v50 = 1;
      }
      memmove(v37, ProcedureName->Buffer, Length);
      v37[(unsigned int)Length] = 0;
      v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
  }
  else
  {
    BaseAddress = 0LL;
  }
  v56 = 0LL;
  v55 = 1;
  for ( i = 0LL; ; LdrpDereferenceEnclave(i) )
  {
    v15 = NtCurrentTeb();
    v16 = _interlockedbittestandreset(&LdrpEnclaveListLock.LockCount, 0);
    UniqueThread = v15->ClientId.UniqueThread;
    if ( v16 )
    {
      LdrpEnclaveListLock.OwningThread = UniqueThread;
      LdrpEnclaveListLock.RecursionCount = 1;
    }
    else if ( LdrpEnclaveListLock.OwningThread == UniqueThread )
    {
      ++LdrpEnclaveListLock.RecursionCount;
    }
    else
    {
      RtlpEnterCriticalSectionContended((__int64)&LdrpEnclaveListLock);
    }
    v18 = (PVOID *)LdrpEnclaveList;
    if ( LdrpEnclaveList != &LdrpEnclaveList )
    {
      while ( 1 )
      {
        i = v18;
        if ( DllHandle == v18[9] )
          break;
        v18 = (PVOID *)*v18;
        if ( v18 == &LdrpEnclaveList )
          goto LABEL_12;
      }
    }
    if ( !i )
    {
LABEL_12:
      RtlLeaveCriticalSection(&LdrpEnclaveListLock);
      goto LABEL_13;
    }
    _InterlockedIncrement((volatile signed __int32 *)i + 15);
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
    if ( i[9] )
      break;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
  }
  if ( *((_DWORD *)i + 14) == 16 && *((_DWORD *)i + 16) == 2 )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
    v20 = (__int64)i[14];
    v21 = 3;
    v56 = i;
    v55 = 3;
    v6 = v20;
    if ( !v20 )
    {
      v23 = (unsigned __int64)BaseAddress;
      v25 = 0;
      v24 = v51;
      goto LABEL_136;
    }
    goto LABEL_26;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
  LdrpDereferenceEnclave(i);
LABEL_13:
  v10 = v51;
  while ( 1 )
  {
    if ( !DllHandle )
    {
LABEL_151:
      v25 = -1073741515;
      goto LABEL_152;
    }
    if ( DllHandle != (PVOID)LdrpSystemDllBase )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
      {
        if ( !LdrpModuleBaseAddressIndex.Root )
          goto LABEL_20;
        Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
      }
      if ( !Root )
      {
LABEL_20:
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        goto LABEL_21;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)DllHandle >= *(_QWORD *)(Root - 152) )
        {
          if ( (unsigned __int64)DllHandle <= *(_QWORD *)(Root - 152) )
          {
            v36 = *(_QWORD *)(Root - 48);
            v6 = Root - 200;
            if ( *(_DWORD *)(v36 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v36 - 56LL) & 0x20) == 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v6 + 276));
              v36 = *(_QWORD *)(v6 + 152);
            }
            v10 = *(_DWORD *)(v36 + 56);
            goto LABEL_20;
          }
          v35 = *(_QWORD *)(Root + 8);
          if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v35 )
          {
LABEL_97:
            Root ^= v35;
            goto LABEL_90;
          }
        }
        else
        {
          v35 = *(_QWORD *)Root;
          if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v35 )
            goto LABEL_97;
        }
        Root = v35;
LABEL_90:
        if ( !Root )
          goto LABEL_20;
      }
    }
    v6 = LdrpNtDllDataTableEntry;
    v10 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
LABEL_21:
    LODWORD(v20) = v6;
    if ( !v6 )
      goto LABEL_151;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 || v10 >= v11 )
      break;
    LdrpDereferenceModule((char *)v6);
    if ( v10 < 0 )
    {
      v25 = -1073741811;
LABEL_152:
      v23 = (unsigned __int64)BaseAddress;
      goto LABEL_54;
    }
    LdrpDrainWorkQueue(0LL);
    LdrpDropLastInProgressCount();
    v6 = 0LL;
  }
  v21 = 1;
LABEL_26:
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v22 = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex.Root )
    {
LABEL_63:
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      v49 = v21;
      v24 = v51;
      v25 = LdrpResolveProcedureAddress(0, v20, (_DWORD)BaseAddress, v51, v49, (__int64)&v54);
      goto LABEL_132;
    }
    v22 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  }
  if ( !v22 )
    goto LABEL_63;
  while ( 1 )
  {
    v31 = *(_QWORD *)(v22 - 152);
    if ( (unsigned __int64)Callback < v31 )
    {
      v32 = *(_QWORD *)v22;
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v32 )
        goto LABEL_80;
      goto LABEL_72;
    }
    if ( (unsigned __int64)Callback < v31 + *(unsigned int *)(v22 - 136) )
      break;
    v32 = *(_QWORD *)(v22 + 8);
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v32 )
    {
LABEL_80:
      v22 ^= v32;
      goto LABEL_73;
    }
LABEL_72:
    v22 = v32;
LABEL_73:
    if ( !v22 )
      goto LABEL_63;
  }
  v33 = *(_QWORD *)(v22 - 48);
  v34 = v22 - 200;
  if ( *(_DWORD *)(v33 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v33 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v34 + 276));
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  v23 = (unsigned __int64)BaseAddress;
  v24 = v51;
  v25 = LdrpResolveProcedureAddress(v34, v6, (_DWORD)BaseAddress, v51, v55, (__int64)&v54);
  if ( v34 )
  {
    v26 = *(_QWORD *)(v34 + 152);
    if ( *(_DWORD *)(v26 + 24) != -1
      && (*(_BYTE *)(*(_QWORD *)v26 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 276), 0xFFFFFFFF) == 1 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v38 = *(_QWORD *)(v34 + 160);
      if ( *(_QWORD *)(v38 + 8) != v34 + 160 )
        goto LABEL_149;
      v39 = *(_QWORD **)(v34 + 168);
      if ( *v39 != v34 + 160 )
        goto LABEL_149;
      *v39 = v38;
      *(_QWORD *)(v38 + 8) = v39;
      v40 = *(_QWORD **)(v34 + 152);
      v41 = (_QWORD *)*v40;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *(_WORD *)(v34 + 110) )
        LdrpReleaseTlsEntry(v34, 0LL);
      LdrpUnmapModule(v34);
      v42 = *(_ACTIVATION_CONTEXT **)(v34 + 136);
      if ( (unsigned __int64)&v42[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext(v42);
      if ( *(_QWORD *)(v34 + 80) )
        LdrpFreeUnicodeString(v34 + 72);
      RtlFreeHeap(LdrpHeap, 0, (PVOID)v34);
      if ( v41 == v40 )
        LdrpDestroyNode(v40);
      v24 = v51;
LABEL_132:
      v23 = (unsigned __int64)BaseAddress;
    }
  }
  if ( v25 < 0 )
    goto LABEL_47;
  if ( v10 == 7
    && !Flagsa
    && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
    && !RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
  {
    v27 = *(_QWORD *)(v6 + 152);
    v52[0] = 0;
    v25 = LdrpInitializeGraphRecurse(v27, 0LL, v52);
    if ( v25 < 0 )
    {
      v54 = 0LL;
LABEL_47:
      v28 = v56;
      if ( v25 != -1073741515 )
        goto LABEL_48;
LABEL_134:
      v25 = -1073741702;
      goto LABEL_49;
    }
  }
  v28 = v56;
  if ( !v56 )
  {
    if ( AvrfpAPILookupCallbacksEnabled )
      AVrfCallAPILookupCallback((_DWORD)Callback, *(_QWORD *)(v6 + 48), (_DWORD)v54, 0, (__int64)&v54);
    if ( g_ShimsEnabled )
    {
      v57 = 0LL;
      ((void (__fastcall *)(char **, __int64, char *, _QWORD, PVOID *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                               g_pfnSE_GetProcAddressForCaller,
                                                                                               64
                                                                                             - (MEMORY[0x7FFE0330] & 0x3Fu))))(
        &v57,
        v6,
        v54,
        0LL,
        Callback);
      if ( v57 )
        v54 = v57;
    }
  }
LABEL_48:
  if ( v25 == -1073741502 )
    goto LABEL_134;
LABEL_49:
  if ( !v28 )
  {
    v29 = *(_QWORD *)(v6 + 152);
    if ( *(_DWORD *)(v29 + 24) == -1
      || (*(_BYTE *)(*(_QWORD *)v29 - 56LL) & 0x20) != 0
      || _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 276), 0xFFFFFFFF) != 1 )
    {
      goto LABEL_53;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v43 = *(_QWORD *)(v6 + 160);
    if ( *(_QWORD *)(v43 + 8) == v6 + 160 )
    {
      v44 = *(_QWORD **)(v6 + 168);
      if ( *v44 == v6 + 160 )
      {
        *v44 = v43;
        *(_QWORD *)(v43 + 8) = v44;
        v45 = *(_QWORD **)(v6 + 152);
        v46 = (_QWORD *)*v45;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(v6 + 110) )
          LdrpReleaseTlsEntry(v6, 0LL);
        LdrpUnmapModule(v6);
        v47 = *(_ACTIVATION_CONTEXT **)(v6 + 136);
        if ( (unsigned __int64)&v47[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v47);
        if ( *(_QWORD *)(v6 + 80) )
          LdrpFreeUnicodeString(v6 + 72);
        RtlFreeHeap(LdrpHeap, 0, (PVOID)v6);
        if ( v46 == v45 )
          LdrpDestroyNode(v45);
        v23 = (unsigned __int64)BaseAddress;
LABEL_53:
        if ( v25 == -1073741702 )
        {
          if ( v23 )
          {
            v25 = -1073741511;
          }
          else
          {
            v25 = -1073741512;
            v23 = v24;
          }
          LdrpReportError(0LL, v23, (unsigned int)v25);
        }
        goto LABEL_54;
      }
    }
LABEL_149:
    __fastfail(3u);
  }
  LdrpDereferenceEnclave(v28);
LABEL_136:
  if ( v25 < 0 )
    goto LABEL_53;
  v54 += *(_QWORD *)(v6 + 184) - *(_QWORD *)(v6 + 48);
LABEL_54:
  if ( v50 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v23);
  if ( !UseWOW64 && v25 >= 0 )
  {
    if ( LdrSystemDllInitBlock.CfgBitMap )
    {
      if ( (LdrSystemDllInitBlock.Flags & 1) == 0 && (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3 )
      {
        v48 = v54;
        if ( (unsigned int)RtlValidateUserCallTarget(v54, &v51) != 1 && (v51 & 0x10) != 0 )
        {
          v25 = RtlGuardGrantSuppressedCallAccess(v48, 4LL, v58);
          if ( v25 < 0 )
            __fastfail(0x2Eu);
        }
      }
    }
  }
  *v59 = v54;
  return v25;
}
