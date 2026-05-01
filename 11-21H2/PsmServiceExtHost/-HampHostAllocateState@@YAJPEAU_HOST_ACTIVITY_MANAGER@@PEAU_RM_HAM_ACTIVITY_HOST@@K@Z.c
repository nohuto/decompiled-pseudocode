/*
 * XREFs of ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180027440
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026E70 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180001BA8 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180010AD0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcTableFind @ 0x180027F50 (CemRcTableFind.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x18003BA94 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 *     ?HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z @ 0x18003CDB0 (-HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x18003CDF0 (-HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z.c)
 *     ?HampSystemQueryHostJobHandle@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x18003DD80 (-HampSystemQueryHostJobHandle@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180094414 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampHostAllocateState(struct _HOST_ACTIVITY_MANAGER *a1, struct _RM_HAM_ACTIVITY_HOST *a2, char a3)
{
  struct _HOST_ACTIVITY_MANAGER *v4; // r14
  DWORD v5; // esi
  void *v6; // rbp
  _QWORD *Value; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // r13
  struct _HAM_RC_TREE_NODE *i; // r12
  unsigned __int64 v11; // rbx
  int v12; // r14d
  int v13; // eax
  unsigned __int64 v14; // rax
  struct _HAM_RC_TREE_NODE *v15; // rsi
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // ebx
  HANDLE v27; // rcx
  void *v28; // [rsp+30h] [rbp-58h] BYREF
  __int64 v29; // [rsp+38h] [rbp-50h] BYREF
  __int64 v30; // [rsp+40h] [rbp-48h]
  HANDLE Handle; // [rsp+A8h] [rbp+20h] BYREF

  Handle = 0LL;
  v4 = a1;
  if ( (a3 & 2) != 0 )
    goto LABEL_46;
  v5 = HampLockTrackerId;
  v6 = (void *)*((unsigned int *)a2 + 139);
  v29 = *((_QWORD *)a2 - 4);
  v30 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockShared((char *)v4 + 576);
  v8 = (unsigned __int64)v4 + 632;
  v9 = 0LL;
  i = 0LL;
  RtlAcquireSRWLockShared((char *)v4 + 648);
  v11 = *((_QWORD *)v4 + 79);
  v12 = *((_BYTE *)v4 + 640) & 1;
  if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_22;
    v11 ^= v8;
  }
  if ( !v11 )
    goto LABEL_22;
  while ( 1 )
  {
    v13 = HampHostIdStoreCompareSessionByKey(v6, (void *)v11);
    if ( v13 < 0 )
    {
      v14 = *(_QWORD *)v11;
      if ( !v12 || !v14 )
        goto LABEL_16;
      goto LABEL_13;
    }
    if ( v13 <= 0 )
      break;
    v14 = *(_QWORD *)(v11 + 8);
    if ( !v12 || !v14 )
    {
LABEL_16:
      v11 = v14;
      goto LABEL_17;
    }
LABEL_13:
    v11 ^= v14;
LABEL_17:
    if ( !v11 )
      goto LABEL_22;
  }
  if ( !*(_QWORD *)(v11 + 24) )
  {
LABEL_22:
    RtlReleaseSRWLockShared(v8 + 16);
    goto LABEL_39;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v8 + 16);
  v15 = (struct _HAM_RC_TREE_NODE *)v11;
  v16 = 3;
  if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-488LL )
  {
LABEL_28:
    if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
    {
      v19 = 0LL;
    }
    else
    {
      v18 = CemRcTableFind(v9 + 40, (char *)a2 + 24, HampHostIdStoreCompareApplicationByKey);
      v19 = v18;
      if ( !v18 )
      {
LABEL_35:
        CemRcObjectDereference(v11);
        if ( v9 )
          CemRcObjectDereference(v9);
        if ( i )
          CemRcObjectDereference(i);
        goto LABEL_39;
      }
      v15 = (struct _HAM_RC_TREE_NODE *)v18;
      v16 = 1;
    }
    for ( i = HamRcNodeGetFirst(v15, v16); i; i = HamRcNodeGetSuccessor(v15, i) )
    {
      if ( !HampHostIdStoreReferenceHostIdCallback(i, &v29) )
        break;
    }
    if ( v19 )
      CemRcObjectDereference(v19);
    goto LABEL_35;
  }
  v17 = CemRcTableFind(v11 + 40, (char *)a2 + 488, HampUserCompareByIdentity);
  v9 = v17;
  if ( v17 )
  {
    v15 = (struct _HAM_RC_TREE_NODE *)v17;
    v16 = 2;
    goto LABEL_28;
  }
  CemRcObjectDereference(v11);
LABEL_39:
  if ( HampLockTrackerId != -1 )
  {
    v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v21 = *v20;
    if ( (*v20 & 0x800) == 0 )
      __int2c();
    if ( v20[12]-- == 1 )
      *v20 = v21 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  v4 = a1;
  RtlReleaseSRWLockShared((char *)a1 + 576);
  v23 = v30;
  *((_QWORD *)a2 + 73) = v30;
  if ( !v23 && (*((_BYTE *)a2 + 788) & 1) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    return (unsigned int)-1058275322;
  }
LABEL_46:
  v24 = *((_QWORD *)a2 - 2);
  v28 = 0LL;
  v25 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v24 + 40) + 112LL))(*((_QWORD *)a2 + 144), &v28);
  if ( v25 < 0 )
  {
    v27 = v28;
    if ( !v28 )
      return (unsigned int)v25;
    goto LABEL_58;
  }
  *((_QWORD *)a2 + 72) = v28;
  v25 = TpAllocWork((char *)a2 + 640, RmHamHostStateWorker, (char *)a2 - 64, 0LL);
  if ( v25 >= 0 )
  {
    v25 = TpAllocWork((char *)a2 + 632, HampHostTerminateWorker, a2, 0LL);
    if ( v25 >= 0 )
    {
      if ( *((_BYTE *)a2 + 592) != 1
        || (v25 = TpAllocWork((char *)a2 + 648, HampHostPlmServiceDesktopBridgeHost, a2, 0LL), v25 >= 0) )
      {
        if ( (*((_BYTE *)a2 + 788) & 1) == 0 )
          return 0;
        v25 = (*(__int64 (__fastcall **)(_QWORD, void (*)(void *, void *), struct _RM_HAM_ACTIVITY_HOST *, char *))(*(_QWORD *)(*((_QWORD *)a2 - 2) + 40LL) + 168LL))(
                *((_QWORD *)a2 + 144),
                HampHostQuiesceTimerCallback,
                a2,
                (char *)a2 + 808);
        if ( v25 >= 0 )
        {
          v25 = (*(__int64 (__fastcall **)(_QWORD, void (*)(void *, void *), struct _RM_HAM_ACTIVITY_HOST *, char *))(*(_QWORD *)(*((_QWORD *)a2 - 2) + 40LL) + 168LL))(
                  *((_QWORD *)a2 + 144),
                  HampHostDelayedEnforcementTimerCallback,
                  a2,
                  (char *)a2 + 1008);
          if ( v25 >= 0 )
          {
            if ( *((_DWORD *)a2 + 140) != 2
              || (v25 = HampSystemQueryHostJobHandle(a2, &Handle), v25 >= 0)
              && (v25 = HampWakeContextFindOrCreate(
                          (struct _HOST_ACTIVITY_MANAGER *)((char *)v4 + 464),
                          *((_QWORD *)a2 - 4),
                          Handle,
                          (struct _CEM_RC_OBJECT **)a2 + 132),
                  v25 >= 0) )
            {
              v25 = 0;
            }
            v27 = Handle;
            if ( Handle )
LABEL_58:
              NtClose(v27);
          }
        }
      }
    }
  }
  return (unsigned int)v25;
}
