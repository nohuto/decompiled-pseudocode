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

__int64 __fastcall LdrGetProcedureAddressForCaller(
        unsigned __int64 a1,
        const void **a2,
        __int64 a3,
        volatile signed __int32 *a4,
        char a5,
        unsigned __int64 a6)
{
  __int64 v6; // r13
  bool v7; // zf
  int v10; // r12d
  int v11; // r14d
  size_t v12; // rdi
  unsigned int v13; // esi
  __int64 *i; // rbx
  struct _TEB *v15; // rax
  signed __int8 v16; // cf
  __int64 UniqueThread; // rax
  __int64 *v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // ebp
  unsigned __int64 v25; // rbx
  __int64 v26; // rsi
  unsigned int v27; // ebp
  unsigned __int64 v28; // rdx
  int v29; // ebx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 *v34; // rdi
  __int64 v35; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  _BYTE *v43; // r13
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  _QWORD *v46; // rsi
  _QWORD *v47; // rbp
  volatile signed __int32 *v48; // rcx
  __int64 v49; // r8
  _QWORD *v50; // rdx
  _QWORD *v51; // rdi
  _QWORD *v52; // rsi
  volatile signed __int32 *v53; // rcx
  __int64 v54; // rdi
  int v55; // [rsp+20h] [rbp-128h]
  char v56; // [rsp+30h] [rbp-118h]
  int v57; // [rsp+34h] [rbp-114h] BYREF
  char v58[8]; // [rsp+38h] [rbp-110h] BYREF
  _BYTE *Heap; // [rsp+40h] [rbp-108h]
  __int64 v60; // [rsp+48h] [rbp-100h] BYREF
  int v61; // [rsp+50h] [rbp-F8h]
  __int64 *v62; // [rsp+58h] [rbp-F0h]
  __int64 v63; // [rsp+60h] [rbp-E8h] BYREF
  char v64[8]; // [rsp+68h] [rbp-E0h] BYREF
  volatile signed __int32 *v65; // [rsp+70h] [rbp-D8h]
  _BYTE v66[128]; // [rsp+80h] [rbp-C8h] BYREF
  int v67; // [rsp+170h] [rbp+28h]

  v6 = 0LL;
  v7 = (a5 & 1) == 0;
  v67 = a5 & 1;
  v65 = a4;
  v57 = a3;
  v10 = 9;
  v60 = 0LL;
  v56 = 0;
  if ( v7 || !(unsigned int)RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
    v11 = 9;
  else
    v11 = 6;
  if ( a2 )
  {
    v12 = *(unsigned __int16 *)a2;
    v13 = v12 + 1;
    if ( *((unsigned __int16 *)a2 + 1) < (unsigned int)(v12 + 1) || (Heap = a2[1], Heap[v12]) )
    {
      if ( v13 <= 0x80 )
      {
        v43 = v66;
        Heap = v66;
      }
      else
      {
        Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v13);
        v43 = Heap;
        if ( !Heap )
          return 3221225626LL;
        v56 = 1;
      }
      memmove(v43, a2[1], v12);
      v43[(unsigned int)v12] = 0;
      v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
  }
  else
  {
    Heap = 0LL;
  }
  v62 = 0LL;
  v61 = 1;
  for ( i = 0LL; ; LdrpDereferenceEnclave(i) )
  {
    v15 = NtCurrentTeb();
    v16 = _interlockedbittestandreset(&dword_18017A8A8, 0);
    UniqueThread = (__int64)v15->ClientId.UniqueThread;
    if ( v16 )
    {
      qword_18017A8B0 = UniqueThread;
      dword_18017A8AC = 1;
    }
    else if ( qword_18017A8B0 == UniqueThread )
    {
      ++dword_18017A8AC;
    }
    else
    {
      RtlpEnterCriticalSectionContended((__int64)&LdrpEnclaveListLock, (__int64)a2, a3, a4);
    }
    v18 = (__int64 *)LdrpEnclaveList;
    if ( (__int64 *)LdrpEnclaveList != &LdrpEnclaveList )
    {
      while ( 1 )
      {
        i = v18;
        if ( a1 == v18[9] )
          break;
        v18 = (__int64 *)*v18;
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
    RtlEnterCriticalSection((__int64)(i + 2));
    if ( i[9] )
      break;
    RtlLeaveCriticalSection(i + 2);
  }
  if ( *((_DWORD *)i + 14) == 16 && *((_DWORD *)i + 16) == 2 )
  {
    RtlLeaveCriticalSection(i + 2);
    v23 = i[14];
    v24 = 3;
    v62 = i;
    v61 = 3;
    v6 = v23;
    if ( !v23 )
    {
      v26 = (__int64)Heap;
      v29 = 0;
      v27 = v57;
      goto LABEL_136;
    }
    goto LABEL_26;
  }
  RtlLeaveCriticalSection(i + 2);
  LdrpDereferenceEnclave(i);
LABEL_13:
  v10 = v57;
  while ( 1 )
  {
    if ( !a1 )
    {
LABEL_151:
      v29 = -1073741515;
      goto LABEL_152;
    }
    if ( a1 != LdrpSystemDllBase )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v19, v20, v21);
      v22 = LdrpModuleBaseAddressIndex;
      if ( (qword_18017ADD0 & 1) != 0 )
      {
        if ( !LdrpModuleBaseAddressIndex )
          goto LABEL_20;
        v22 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
      }
      if ( !v22 )
      {
LABEL_20:
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        goto LABEL_21;
      }
      while ( 1 )
      {
        if ( a1 >= *(_QWORD *)(v22 - 152) )
        {
          if ( a1 <= *(_QWORD *)(v22 - 152) )
          {
            v42 = *(_QWORD *)(v22 - 48);
            v6 = v22 - 200;
            if ( *(_DWORD *)(v42 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v42 - 56LL) & 0x20) == 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v6 + 276));
              v42 = *(_QWORD *)(v6 + 152);
            }
            v10 = *(_DWORD *)(v42 + 56);
            goto LABEL_20;
          }
          v41 = *(_QWORD *)(v22 + 8);
          if ( (qword_18017ADD0 & 1) != 0 && v41 )
          {
LABEL_97:
            v22 ^= v41;
            goto LABEL_90;
          }
        }
        else
        {
          v41 = *(_QWORD *)v22;
          if ( (qword_18017ADD0 & 1) != 0 && v41 )
            goto LABEL_97;
        }
        v22 = v41;
LABEL_90:
        if ( !v22 )
          goto LABEL_20;
      }
    }
    v6 = LdrpNtDllDataTableEntry;
    v10 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
LABEL_21:
    LODWORD(v23) = v6;
    if ( !v6 )
      goto LABEL_151;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 || v10 >= v11 )
      break;
    LdrpDereferenceModule(v6, v19, v20, v21);
    if ( v10 < 0 )
    {
      v29 = -1073741811;
LABEL_152:
      v26 = (__int64)Heap;
      goto LABEL_54;
    }
    LdrpDrainWorkQueue(0LL);
    LdrpDropLastInProgressCount();
    v6 = 0LL;
  }
  v24 = 1;
LABEL_26:
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v19, v20, v21);
  v25 = LdrpModuleBaseAddressIndex;
  if ( (qword_18017ADD0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex )
    {
LABEL_63:
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      v55 = v24;
      v27 = v57;
      v29 = LdrpResolveProcedureAddress(0, v23, (_DWORD)Heap, v57, v55, (__int64)&v60);
      goto LABEL_132;
    }
    v25 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  }
  if ( !v25 )
    goto LABEL_63;
  while ( 1 )
  {
    v37 = *(_QWORD *)(v25 - 152);
    if ( a6 < v37 )
    {
      v38 = *(_QWORD *)v25;
      if ( (qword_18017ADD0 & 1) != 0 && v38 )
        goto LABEL_80;
      goto LABEL_72;
    }
    if ( a6 < v37 + *(unsigned int *)(v25 - 136) )
      break;
    v38 = *(_QWORD *)(v25 + 8);
    if ( (qword_18017ADD0 & 1) != 0 && v38 )
    {
LABEL_80:
      v25 ^= v38;
      goto LABEL_73;
    }
LABEL_72:
    v25 = v38;
LABEL_73:
    if ( !v25 )
      goto LABEL_63;
  }
  v39 = *(_QWORD *)(v25 - 48);
  v40 = v25 - 200;
  if ( *(_DWORD *)(v39 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v39 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v40 + 276));
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  v26 = (__int64)Heap;
  v27 = v57;
  v29 = LdrpResolveProcedureAddress(v40, v6, (_DWORD)Heap, v57, v61, (__int64)&v60);
  if ( v40 )
  {
    v32 = *(_QWORD *)(v40 + 152);
    if ( *(_DWORD *)(v32 + 24) != -1
      && (*(_BYTE *)(*(_QWORD *)v32 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 276), 0xFFFFFFFF) == 1 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v28, v30, v31);
      v44 = *(_QWORD *)(v40 + 160);
      if ( *(_QWORD *)(v44 + 8) != v40 + 160 )
        goto LABEL_149;
      v45 = *(_QWORD **)(v40 + 168);
      if ( *v45 != v40 + 160 )
        goto LABEL_149;
      *v45 = v44;
      *(_QWORD *)(v44 + 8) = v45;
      v46 = *(_QWORD **)(v40 + 152);
      v47 = (_QWORD *)*v46;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *(_WORD *)(v40 + 110) )
        LdrpReleaseTlsEntry(v40, 0LL);
      LdrpUnmapModule(v40);
      v48 = *(volatile signed __int32 **)(v40 + 136);
      if ( (unsigned __int64)v48 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext(v48);
      if ( *(_QWORD *)(v40 + 80) )
        LdrpFreeUnicodeString(v40 + 72);
      RtlFreeHeap(LdrpHeap, 0, v40);
      if ( v47 == v46 )
        LdrpDestroyNode(v46);
      v27 = v57;
LABEL_132:
      v26 = (__int64)Heap;
    }
  }
  if ( v29 < 0 )
    goto LABEL_47;
  if ( v10 == 7
    && !v67
    && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
    && !(unsigned int)RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
  {
    v33 = *(_QWORD *)(v6 + 152);
    v58[0] = 0;
    v29 = LdrpInitializeGraphRecurse(v33, 0LL, v58);
    if ( v29 < 0 )
    {
      v60 = 0LL;
LABEL_47:
      v34 = v62;
      if ( v29 != -1073741515 )
        goto LABEL_48;
LABEL_134:
      v29 = -1073741702;
      goto LABEL_49;
    }
  }
  v34 = v62;
  if ( !v62 )
  {
    if ( AvrfpAPILookupCallbacksEnabled )
      AVrfCallAPILookupCallback(a6, *(_QWORD *)(v6 + 48), v60, 0, (__int64)&v60);
    if ( g_ShimsEnabled )
    {
      v63 = 0LL;
      ((void (__fastcall *)(__int64 *, __int64, __int64, _QWORD, unsigned __int64))(MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
        &v63,
        v6,
        v60,
        0LL,
        a6);
      if ( v63 )
        v60 = v63;
    }
  }
LABEL_48:
  if ( v29 == -1073741502 )
    goto LABEL_134;
LABEL_49:
  if ( !v34 )
  {
    v35 = *(_QWORD *)(v6 + 152);
    if ( *(_DWORD *)(v35 + 24) == -1
      || (*(_BYTE *)(*(_QWORD *)v35 - 56LL) & 0x20) != 0
      || _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 276), 0xFFFFFFFF) != 1 )
    {
      goto LABEL_53;
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v28, v30, v31);
    v49 = *(_QWORD *)(v6 + 160);
    if ( *(_QWORD *)(v49 + 8) == v6 + 160 )
    {
      v50 = *(_QWORD **)(v6 + 168);
      if ( *v50 == v6 + 160 )
      {
        *v50 = v49;
        *(_QWORD *)(v49 + 8) = v50;
        v51 = *(_QWORD **)(v6 + 152);
        v52 = (_QWORD *)*v51;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(v6 + 110) )
          LdrpReleaseTlsEntry(v6, 0LL);
        LdrpUnmapModule(v6);
        v53 = *(volatile signed __int32 **)(v6 + 136);
        if ( (unsigned __int64)v53 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v53);
        if ( *(_QWORD *)(v6 + 80) )
          LdrpFreeUnicodeString(v6 + 72);
        RtlFreeHeap(LdrpHeap, 0, v6);
        if ( v52 == v51 )
          LdrpDestroyNode(v51);
        v26 = (__int64)Heap;
LABEL_53:
        if ( v29 == -1073741702 )
        {
          if ( v26 )
          {
            v29 = -1073741511;
          }
          else
          {
            v29 = -1073741512;
            v26 = v27;
          }
          LdrpReportError(0LL, v26, (unsigned int)v29);
        }
        goto LABEL_54;
      }
    }
LABEL_149:
    __fastfail(3u);
  }
  LdrpDereferenceEnclave(v34);
LABEL_136:
  if ( v29 < 0 )
    goto LABEL_53;
  v60 += *(_QWORD *)(v6 + 184) - *(_QWORD *)(v6 + 48);
LABEL_54:
  if ( v56 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v26);
  if ( !UseWOW64 && v29 >= 0 )
  {
    if ( qword_18018F3A8 )
    {
      if ( (byte_18018F38C & 1) == 0 && (BYTE5(qword_18018F390) & 3) == 3 )
      {
        v54 = v60;
        if ( (unsigned int)RtlValidateUserCallTarget(v60, &v57) != 1 && (v57 & 0x10) != 0 )
        {
          v29 = RtlGuardGrantSuppressedCallAccess(v54, 4LL, v64);
          if ( v29 < 0 )
            __fastfail(0x2Eu);
        }
      }
    }
  }
  *(_QWORD *)v65 = v60;
  return (unsigned int)v29;
}
