/*
 * XREFs of KsepResolveApplicableShimsForDriver @ 0x14085B9FC
 * Callers:
 *     KsepGetShimsForDriver @ 0x140694008 (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140209E80 (KsepPoolFreePaged.c)
 *     KsepLogError @ 0x14020A5AC (KsepLogError.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KsepLogInfo @ 0x14037424C (KsepLogInfo.c)
 *     KsepLoadShimProvider @ 0x140581138 (KsepLoadShimProvider.c)
 *     KsepDebugPrint @ 0x1405811C4 (KsepDebugPrint.c)
 *     KsepIsShimRegistered @ 0x140808BB0 (KsepIsShimRegistered.c)
 *     KsepGetLoadedModulesList @ 0x140808C2C (KsepGetLoadedModulesList.c)
 *     KsepResolveShimHooks @ 0x14085BC18 (KsepResolveShimHooks.c)
 */

__int64 __fastcall KsepResolveApplicableShimsForDriver(_QWORD *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int LoadedModulesList; // edi
  _QWORD *v5; // r13
  int v6; // ebp
  __int64 v7; // r8
  _QWORD *v8; // r14
  int v9; // edi
  _QWORD *v10; // rbp
  _QWORD *v11; // r15
  __int64 v12; // r12
  int v13; // eax
  struct _KTHREAD *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v18; // rbp
  _QWORD *v19; // r12
  unsigned int *v20; // r15
  __int64 v21; // rax
  struct _KTHREAD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rbp
  __int64 *v25; // r12
  _DWORD *v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int *v30; // [rsp+20h] [rbp-58h] BYREF
  int v32; // [rsp+88h] [rbp+10h]
  int v33; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  LoadedModulesList = 0;
  v32 = 0;
  v5 = a1;
  v30 = 0LL;
  --CurrentThread->KernelApcDisable;
  v6 = 0;
  v33 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C64D60, 0LL);
  v8 = v5 + 9;
  if ( a2 )
  {
    v9 = 0;
    v10 = v5;
    v11 = v5 + 9;
    v12 = a2;
    do
    {
      if ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, v10, v7, v10 + 9) == 1 )
      {
        v13 = *(_DWORD *)(*v11 + 24LL);
        if ( !v13 )
          v9 = 1;
        *(_DWORD *)(*v11 + 24LL) = v13 + 1;
      }
      else
      {
        *v11 = 0LL;
        v9 = 1;
        v33 = 1;
      }
      v10 += 10;
      v11 += 10;
      --v12;
    }
    while ( v12 );
    v5 = a1;
    v6 = v33;
    v32 = v9;
    LoadedModulesList = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C64D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C64D60);
  KeAbPostRelease((ULONG_PTR)&qword_140C64D60);
  KeLeaveCriticalRegion();
  if ( !v6 )
  {
LABEL_12:
    if ( v32 )
    {
      LoadedModulesList = KsepGetLoadedModulesList(&v30);
      if ( LoadedModulesList < 0 )
        goto LABEL_23;
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C64D60, 0LL);
      v15 = 0LL;
      if ( a2 )
      {
        while ( 1 )
        {
          LoadedModulesList = KsepResolveShimHooks(v30, *(_QWORD *)(*(_QWORD *)(*v8 + 16LL) + 48LL));
          if ( LoadedModulesList < 0 )
            break;
          v15 = (unsigned int)(v15 + 1);
          v8 += 10;
          if ( (unsigned int)v15 >= a2 )
            goto LABEL_17;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C64D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C64D60);
        KeAbPostRelease((ULONG_PTR)&qword_140C64D60);
        KeLeaveCriticalRegion();
        v29 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        dword_140C40784[2 * v29] = LoadedModulesList;
        KsepHistoryErrors[2 * v29] = 459299;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(
            6LL,
            "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
            LODWORD(v5[10 * v15]),
            LoadedModulesList);
        KsepLogError(
          6LL,
          (__int64)"KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
          LODWORD(v5[10 * v15]),
          (unsigned int)LoadedModulesList);
        goto LABEL_23;
      }
LABEL_17:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C64D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C64D60);
      KeAbPostRelease((ULONG_PTR)&qword_140C64D60);
      KeLeaveCriticalRegion();
    }
    v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v16]) = 0;
    LODWORD(KsepHistoryMessages[v16]) = 459313;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(6LL, "KSE: Successfully resolved %d shim(s).\n", a2);
    KsepLogInfo(6, "KSE: Successfully resolved %d shim(s).\n", a2);
    goto LABEL_23;
  }
  v18 = 0LL;
  if ( a2 )
  {
    v19 = v8;
    while ( 1 )
    {
      if ( !*v19 )
      {
        v20 = (unsigned int *)&v5[10 * v18];
        LoadedModulesList = KsepLoadShimProvider((__int64)v20);
        if ( LoadedModulesList < 0 )
          break;
      }
      v18 = (unsigned int)(v18 + 1);
      v19 += 10;
      if ( (unsigned int)v18 >= a2 )
        goto LABEL_33;
    }
    v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_140C40784[2 * v21] = LoadedModulesList;
    KsepHistoryErrors[2 * v21] = 459222;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(6LL, "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n", *v20, LoadedModulesList);
    KsepLogError(
      6LL,
      (__int64)"KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
      *v20,
      (unsigned int)LoadedModulesList);
  }
  else
  {
LABEL_33:
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C64D60, 0LL);
    v24 = 0LL;
    if ( !a2 )
    {
LABEL_37:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C64D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C64D60);
      KeAbPostRelease((ULONG_PTR)&qword_140C64D60);
      KeLeaveCriticalRegion();
      goto LABEL_12;
    }
    v25 = v8;
    while ( 1 )
    {
      v26 = &v5[10 * v24];
      if ( !(unsigned int)KsepIsShimRegistered((__int64)&KseEngine, v26, v23, (_QWORD *)v26 + 9) )
        break;
      v27 = *v25;
      v24 = (unsigned int)(v24 + 1);
      v25 += 10;
      ++*(_DWORD *)(v27 + 24);
      if ( (unsigned int)v24 >= a2 )
        goto LABEL_37;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C64D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C64D60);
    KeAbPostRelease((ULONG_PTR)&qword_140C64D60);
    KeLeaveCriticalRegion();
    LoadedModulesList = -1073740782;
    v28 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_140C40784[2 * v28] = -1073740782;
    KsepHistoryErrors[2 * v28] = 459251;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(6LL, "KSE: The provider did not register shim [0x%08X] in time\n", *v26);
    KsepLogError(6LL, (__int64)"KSE: The provider did not register shim [0x%08X] in time\n", *v26);
  }
LABEL_23:
  KsepPoolFreePaged(v30);
  return (unsigned int)LoadedModulesList;
}
