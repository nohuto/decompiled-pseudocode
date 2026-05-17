/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x180022190
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x180009DAC (LdrpCodeAuthzInitialize.c)
 *     CsrClientConnectToServer @ 0x18004B5E0 (CsrClientConnectToServer.c)
 *     LdrGetProcedureAddressEx @ 0x1800797C0 (LdrGetProcedureAddressEx.c)
 *     LdrGetProcedureAddress @ 0x180084300 (LdrGetProcedureAddress.c)
 *     LdrpLoadWow64 @ 0x180085D20 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800E19E0 (RtlWow64LogMessageInEventLogger.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 *     AVrfpDetectVerifiedExports @ 0x1800E4B6C (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800E59F8 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     LdrpReportError @ 0x18000C29C (LdrpReportError.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021CB0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpObtainLockedEnclave @ 0x1800220FC (LdrpObtainLockedEnclave.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpResolveProcedureAddress @ 0x180022A3C (LdrpResolveProcedureAddress.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     LdrpDropLastInProgressCount @ 0x1800522D4 (LdrpDropLastInProgressCount.c)
 *     LdrpInitializeGraphRecurse @ 0x18006D42C (LdrpInitializeGraphRecurse.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     LdrpDereferenceEnclave @ 0x1800D8D70 (LdrpDereferenceEnclave.c)
 *     AVrfCallAPILookupCallback @ 0x1800E3C20 (AVrfCallAPILookupCallback.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010A380 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlValidateUserCallTarget @ 0x18010A424 (RtlValidateUserCallTarget.c)
 */

__int64 __fastcall LdrGetProcedureAddressForCaller(
        unsigned __int64 a1,
        const void **a2,
        int a3,
        _QWORD *a4,
        char a5,
        unsigned __int64 a6)
{
  bool v6; // zf
  int v9; // r12d
  int v10; // r15d
  size_t v11; // rbx
  unsigned int v12; // ecx
  int v13; // edi
  __int64 *v14; // rax
  __int64 *v15; // r14
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // esi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  const char *v26; // rsi
  unsigned int v27; // r15d
  int v28; // ebx
  int v29; // eax
  int v30; // eax
  __int64 v32; // rcx
  _BYTE *v33; // r13
  __int64 v34; // rdi
  char v35; // [rsp+30h] [rbp-118h]
  int v36; // [rsp+34h] [rbp-114h] BYREF
  char v37[8]; // [rsp+38h] [rbp-110h] BYREF
  __int64 v38; // [rsp+40h] [rbp-108h] BYREF
  _BYTE *Heap; // [rsp+48h] [rbp-100h]
  int v40; // [rsp+50h] [rbp-F8h]
  __int64 v41; // [rsp+58h] [rbp-F0h] BYREF
  char v42[8]; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD *v43; // [rsp+68h] [rbp-E0h]
  _BYTE v44[128]; // [rsp+70h] [rbp-D8h] BYREF
  int v45; // [rsp+170h] [rbp+28h]

  v6 = (a5 & 1) == 0;
  v45 = a5 & 1;
  v43 = a4;
  v9 = 9;
  v36 = a3;
  v38 = 0LL;
  v35 = 0;
  if ( v6 || (v10 = 6, (void *)qword_18017E238 != NtCurrentTeb()->ClientId.UniqueThread) )
    v10 = 9;
  if ( a2 )
  {
    v11 = *(unsigned __int16 *)a2;
    v12 = v11 + 1;
    if ( *((unsigned __int16 *)a2 + 1) < (unsigned int)(v11 + 1) || (Heap = a2[1], Heap[v11]) )
    {
      if ( v12 <= 0x80 )
      {
        v33 = v44;
        Heap = v44;
      }
      else
      {
        Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(NtdllBaseTag + 1572864), v12);
        v33 = Heap;
        if ( !Heap )
          return 3221225626LL;
        v35 = 1;
      }
      memmove(v33, a2[1], v11);
      v33[v11] = 0;
    }
  }
  else
  {
    Heap = 0LL;
  }
  v13 = 1;
  v40 = 1;
  v14 = LdrpObtainLockedEnclave(a1, 1);
  v15 = v14;
  if ( v14 )
  {
    if ( *((_DWORD *)v14 + 14) == 16 && *((_DWORD *)v14 + 16) == 2 )
    {
      RtlLeaveCriticalSection(v14 + 2);
      v16 = v15[14];
      v13 = 3;
      v40 = 3;
      v28 = 0;
      goto LABEL_86;
    }
    RtlLeaveCriticalSection(v14 + 2);
    LdrpDereferenceEnclave(v15);
  }
  v9 = v36;
  v15 = 0LL;
  v16 = 0LL;
  if ( !a1 )
    goto LABEL_106;
  while ( 2 )
  {
    if ( a1 == LdrpSystemDllBase )
    {
      v16 = LdrpNtDllDataTableEntry;
      v9 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
      goto LABEL_22;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( (qword_180185010 & 1) != 0 )
    {
      if ( !LdrpModuleBaseAddressIndex )
        goto LABEL_21;
      v17 = LdrpModuleBaseAddressIndex ^ (unsigned __int64)&LdrpModuleBaseAddressIndex;
    }
    else
    {
      v17 = LdrpModuleBaseAddressIndex;
    }
    if ( !v17 )
      goto LABEL_21;
    do
    {
      if ( a1 < *(_QWORD *)(v17 - 152) )
      {
        v18 = *(_QWORD *)v17;
        if ( (qword_180185010 & 1) != 0 && v18 )
          goto LABEL_37;
        goto LABEL_14;
      }
      if ( a1 <= *(_QWORD *)(v17 - 152) )
        break;
      v18 = *(_QWORD *)(v17 + 8);
      if ( (qword_180185010 & 1) != 0 && v18 )
      {
LABEL_37:
        v17 ^= v18;
        continue;
      }
LABEL_14:
      v17 = v18;
    }
    while ( v17 );
    if ( v17 )
    {
      v16 = v17 - 200;
      v19 = *(_QWORD *)(v17 - 48);
      if ( *(_DWORD *)(v19 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v19 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 276));
      v9 = *(_DWORD *)(*(_QWORD *)(v16 + 152) + 56LL);
    }
LABEL_21:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
LABEL_22:
    if ( v16 )
    {
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 || v9 >= v10 )
      {
        v20 = v16;
        goto LABEL_26;
      }
      LdrpDereferenceModule(v16);
      if ( v9 >= 0 )
      {
        LdrpDrainWorkQueue(0LL);
        LdrpDropLastInProgressCount();
        v16 = 0LL;
        continue;
      }
      v16 = 0LL;
      v28 = -1073741811;
LABEL_103:
      v26 = Heap;
      v27 = v36;
      if ( !v15 )
        goto LABEL_63;
LABEL_104:
      if ( v28 < 0 )
        goto LABEL_63;
      v38 += *(_QWORD *)(v16 + 184) - *(_QWORD *)(v16 + 48);
      goto LABEL_64;
    }
    break;
  }
LABEL_106:
  v28 = -1073741515;
LABEL_86:
  v20 = v16;
  if ( !v16 )
    goto LABEL_103;
LABEL_26:
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v21 = LdrpModuleBaseAddressIndex;
  if ( (qword_180185010 & 1) != 0 )
  {
    if ( LdrpModuleBaseAddressIndex )
    {
      v21 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
      goto LABEL_27;
    }
    goto LABEL_58;
  }
LABEL_27:
  if ( !v21 )
    goto LABEL_58;
  do
  {
    v22 = *(_QWORD *)(v21 - 152);
    if ( a6 < v22 )
    {
      v23 = *(_QWORD *)v21;
      if ( (qword_180185010 & 1) != 0 && v23 )
        goto LABEL_56;
      goto LABEL_30;
    }
    if ( a6 < v22 + *(unsigned int *)(v21 - 136) )
      break;
    v23 = *(_QWORD *)(v21 + 8);
    if ( (qword_180185010 & 1) != 0 && v23 )
    {
LABEL_56:
      v21 ^= v23;
      continue;
    }
LABEL_30:
    v21 = v23;
  }
  while ( v21 );
  if ( !v21 )
  {
LABEL_58:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    v27 = v36;
    v29 = LdrpResolveProcedureAddress(0, v20, (_DWORD)Heap, v36, v13, (__int64)&v38);
    v26 = Heap;
    v28 = v29;
    goto LABEL_43;
  }
  v24 = v21 - 200;
  v25 = *(_QWORD *)(v21 - 48);
  if ( *(_DWORD *)(v25 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v25 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 276));
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  v26 = Heap;
  v27 = v36;
  v28 = LdrpResolveProcedureAddress(v24, v16, (_DWORD)Heap, v36, v40, (__int64)&v38);
  if ( v24 )
    LdrpDereferenceModule(v24);
LABEL_43:
  if ( v28 < 0 )
  {
LABEL_59:
    if ( v28 == -1073741515 || v28 == -1073741502 )
      v28 = -1073741702;
    goto LABEL_61;
  }
  if ( v9 != 7 || v45 )
  {
LABEL_45:
    if ( v28 >= 0 )
      goto LABEL_46;
    v38 = 0LL;
    goto LABEL_59;
  }
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 && (void *)qword_18017E238 != NtCurrentTeb()->ClientId.UniqueThread )
  {
    v32 = *(_QWORD *)(v16 + 152);
    v37[0] = 0;
    v28 = LdrpInitializeGraphRecurse(v32, 0LL, v37);
    goto LABEL_45;
  }
LABEL_46:
  if ( !v15 )
  {
    if ( AvrfpAPILookupCallbacksEnabled )
      AVrfCallAPILookupCallback(a6, *(_QWORD *)(v16 + 48), v38, 0, (__int64)&v38);
    if ( g_ShimsEnabled )
    {
      v41 = 0LL;
      ((void (__fastcall *)(__int64 *, __int64, __int64, _QWORD, unsigned __int64))(MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
        &v41,
        v16,
        v38,
        0LL,
        a6);
      if ( v41 )
        v38 = v41;
    }
  }
LABEL_61:
  if ( v15 )
  {
    LdrpDereferenceEnclave(v15);
    goto LABEL_104;
  }
  LdrpDereferenceModule(v16);
LABEL_63:
  if ( v28 == -1073741702 )
  {
    if ( v26 )
    {
      v28 = -1073741511;
    }
    else
    {
      v28 = -1073741512;
      v26 = (const char *)v27;
    }
    LdrpReportError(0LL, v26, v28);
  }
LABEL_64:
  if ( v35 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v26);
  if ( !UseWOW64 && v28 >= 0 )
  {
    LOBYTE(v30) = LdrControlFlowGuardEnforcedWithExportSuppression();
    if ( v30 )
    {
      v34 = v38;
      if ( (unsigned int)RtlValidateUserCallTarget(v38, &v36) != 1 && (v36 & 0x10) != 0 )
      {
        v28 = RtlGuardGrantSuppressedCallAccess(v34, 4LL, v42);
        if ( v28 < 0 )
          __fastfail(0x2Eu);
      }
    }
  }
  *v43 = v38;
  return (unsigned int)v28;
}
