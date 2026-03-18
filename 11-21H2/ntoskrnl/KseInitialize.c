/*
 * XREFs of KseInitialize @ 0x140AFFF64
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepLogError @ 0x140368C88 (KsepLogError.c)
 *     KsepLogInfo @ 0x1403C09C8 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14057D738 (KsepDebugPrint.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     KseShimDatabaseClose @ 0x14075C588 (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14075C68C (KseShimDatabaseOpen.c)
 *     KseRegisterShim @ 0x140825A50 (KseRegisterShim.c)
 *     KsepCacheUninitialize @ 0x140965160 (KsepCacheUninitialize.c)
 *     KseVersionLieInitialize @ 0x140B003F8 (KseVersionLieInitialize.c)
 *     KsepEngineInitialize @ 0x140B01250 (KsepEngineInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140B01388 (KsepMatchInitMachineInfo.c)
 *     KseDriverScopeInitialize @ 0x140B01600 (KseDriverScopeInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x140B01670 (KseShimDatabaseBootInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, int a2)
{
  int matched; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  signed __int32 v14; // eax
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rcx
  char v27; // al
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rdx
  char v31; // al
  __int64 v32; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v32 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, &KseEtwHandle);
      matched = KseShimDatabaseOpen(&v32);
      if ( matched >= 0 && v32 )
      {
        KseShimDatabaseClose(v32);
        KseVersionLieInitialize();
        v5 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
        if ( v5 < 0 )
        {
          v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v18] = v5;
          v19 = KsepDebugFlag;
          KsepHistoryErrors[2 * v18] = 852115;
          if ( (v19 & 2) != 0 )
            KsepDebugPrint(12LL, "Built-in SkipDriverUnload shims: failed to register.\n");
          KsepLogError(12LL, (__int64)"Built-in SkipDriverUnload shims: failed to register.\n");
        }
        v6 = KseRegisterShim((__int64)&KseZeroPoolShim, 0LL, 0LL);
        if ( v6 < 0 )
        {
          v20 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v20] = v6;
          v21 = KsepDebugFlag;
          KsepHistoryErrors[2 * v20] = 1048692;
          if ( (v21 & 2) != 0 )
            KsepDebugPrint(12LL, "ZeroPool shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"ZeroPool shim: failed to register.\n");
        }
        v7 = KseRegisterShim((__int64)&KseClearPCIDBitsShim, 0LL, 0LL);
        if ( v7 < 0 )
        {
          v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v22] = v7;
          v23 = KsepDebugFlag;
          KsepHistoryErrors[2 * v22] = 917629;
          if ( (v23 & 2) != 0 )
            KsepDebugPrint(12LL, "ClearPCIDBits shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"ClearPCIDBits shim: failed to register.\n");
        }
        v8 = KseRegisterShim((__int64)&KseKasperskyShim, 0LL, 0LL);
        if ( v8 < 0 )
        {
          v24 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v24] = v8;
          v25 = KsepDebugFlag;
          KsepHistoryErrors[2 * v24] = 983165;
          if ( (v25 & 2) != 0 )
            KsepDebugPrint(12LL, "Kaspersky shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"Kaspersky shim: failed to register.\n");
        }
        v9 = KseRegisterShim((__int64)&KseMemcpyShim, 0LL, 0LL);
        if ( v9 < 0 )
        {
          v26 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v26] = v9;
          v27 = KsepDebugFlag;
          KsepHistoryErrors[2 * v26] = 1114208;
          if ( (v27 & 2) != 0 )
            KsepDebugPrint(12LL, "Memcpy shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"Memcpy shim: failed to register.\n");
        }
        v10 = KseRegisterShim((__int64)&KseKernelPadSectionsOverrideShim, 0LL, 0LL);
        if ( v10 < 0 )
        {
          v28 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v28] = v10;
          v29 = KsepDebugFlag;
          KsepHistoryErrors[2 * v28] = 1179753;
          if ( (v29 & 2) != 0 )
            KsepDebugPrint(12LL, "KernelPadSectionsOverride shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"KernelPadSectionsOverride shim: failed to register.\n");
        }
        v11 = KseRegisterShim((__int64)&KseUserCetBasicModeAllowRetTargetNotCetCompatShim, 0LL, 0LL);
        if ( v11 < 0 )
        {
          v30 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v30] = v11;
          v31 = KsepDebugFlag;
          KsepHistoryErrors[2 * v30] = 1245275;
          if ( (v31 & 2) != 0 )
            KsepDebugPrint(12LL, "UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
        }
      }
      else
      {
        dword_140C54EF8 |= 0x80u;
        matched = -1073741637;
      }
    }
LABEL_12:
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v12]) = 0;
    LODWORD(KsepHistoryMessages[v12]) = 327934;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1, "KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_35;
  }
  v14 = _InterlockedCompareExchange(&dword_140C54EF4, 1, 0);
  if ( v14 == 2 )
    return 0LL;
  if ( v14 == 1 )
    return 259LL;
  if ( (int)KseShimDatabaseBootInitialize(
              *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL),
              *(void **)(*(_QWORD *)(a1 + 240) + 80LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 88LL)) >= 0 )
  {
    v15 = *(_QWORD *)(a1 + 240);
    if ( *(_QWORD *)(v15 + 64) && *(_DWORD *)(v15 + 72) )
    {
      matched = KsepEngineInitialize(&KseEngine);
      if ( matched >= 0 )
      {
        matched = KsepMatchInitMachineInfo(a1);
        if ( matched >= 0 )
        {
          dword_140C54EF4 = 2;
          KseDriverScopeInitialize();
          goto LABEL_12;
        }
      }
    }
    else
    {
      if ( ViVerifierEnabled )
      {
        dword_140C54EF8 |= 0x40u;
        v15 = *(_QWORD *)(a1 + 240);
      }
      if ( !*(_QWORD *)(v15 + 64) || !*(_DWORD *)(v15 + 72) )
        dword_140C54EF8 |= 0x80u;
      matched = -1073741637;
    }
LABEL_35:
    dword_140C54EF4 = 0;
    if ( qword_140C54F38 )
    {
      KsepCacheUninitialize(qword_140C54F38);
      qword_140C54F38 = 0LL;
    }
    KseEngine |= 3u;
    dword_140C54EF8 |= 0x400u;
    v16 = KsepDebugFlag;
    v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    if ( matched == -1073741637 )
    {
      dword_140C2A224[2 * v17] = -1073741637;
      KsepHistoryErrors[2 * v17] = 327962;
      if ( (v16 & 2) != 0 )
        KsepDebugPrint(
          1LL,
          "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
      KsepLogError(
        1LL,
        (__int64)"KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
    }
    else
    {
      dword_140C2A224[2 * v17] = matched;
      KsepHistoryErrors[2 * v17] = 327966;
      if ( (v16 & 2) != 0 )
        KsepDebugPrint(1LL, "KSE: Initialization failed: 0x%x\n", matched);
      KsepLogError(1LL, (__int64)"KSE: Initialization failed: 0x%x\n", matched);
    }
    return (unsigned int)matched;
  }
  return 3221225473LL;
}
