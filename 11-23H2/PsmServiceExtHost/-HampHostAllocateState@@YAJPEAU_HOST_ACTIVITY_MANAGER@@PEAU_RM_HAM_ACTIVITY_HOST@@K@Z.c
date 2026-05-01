/*
 * XREFs of ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800167B0
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004FD60 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z @ 0x180010B40 (-HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z @ 0x180011670 (-HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x18001174C (-HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z.c)
 *     ?HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z @ 0x180011790 (-HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z.c)
 *     ?HampSystemQueryHostJobHandle@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x180016E08 (-HampSystemQueryHostJobHandle@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180016EA0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180017024 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18008F744 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampHostAllocateState(struct _HOST_ACTIVITY_MANAGER *a1, struct _RM_HAM_ACTIVITY_HOST *a2, char a3)
{
  struct _HAM_RC_TREE_NODE *i; // r12
  char *v4; // rbp
  struct _HOST_ACTIVITY_MANAGER *v6; // r14
  bool v7; // zf
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // esi
  char *v11; // rax
  DWORD v12; // edi
  _QWORD *Value; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbp
  char *v16; // r14
  __int64 v17; // r13
  __int64 v18; // rbx
  int v19; // esi
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rdi
  int v24; // esi
  int v25; // eax
  __int64 v26; // rax
  struct _HAM_RC_TREE_NODE *v27; // rcx
  int v28; // esi
  int v29; // eax
  __int64 v30; // rax
  _QWORD *v31; // rdi
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  int HostJobHandle; // ebx
  char *v37; // rdi
  HANDLE Handle; // [rsp+30h] [rbp-68h] BYREF
  void *Buf1; // [rsp+38h] [rbp-60h]
  __int64 v40; // [rsp+48h] [rbp-50h] BYREF
  __int64 v41; // [rsp+50h] [rbp-48h]
  struct _HAM_RC_TREE_NODE *v43; // [rsp+B8h] [rbp+20h]

  i = 0LL;
  v4 = (char *)a2 - 64;
  Handle = 0LL;
  v6 = a1;
  if ( (a3 & 1) != 0 )
    goto LABEL_91;
  v7 = a2 == 0LL;
  v8 = 32LL;
  if ( a2 )
    v8 = (__int64)a2 - 32;
  v9 = *(_QWORD *)v8;
  if ( v7 )
  {
    v10 = MEMORY[0x26C];
    v11 = 0LL;
  }
  else
  {
    v10 = *((_DWORD *)v4 + 155);
    v11 = v4;
  }
  v12 = HampLockTrackerId;
  Buf1 = v11 + 552;
  v41 = 0LL;
  v40 = v9;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockShared((char *)v6 + 800);
  v14 = (unsigned __int64)v6 + 856;
  v15 = v10;
  v16 = (char *)v6 + 872;
  v17 = 0LL;
  RtlAcquireSRWLockShared(v16);
  v18 = *(_QWORD *)v14;
  v19 = *(_BYTE *)(v14 + 8) & 1;
  if ( (*(_BYTE *)(v14 + 8) & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_24;
    v18 ^= v14;
  }
  while ( v18 )
  {
    v20 = HampHostIdStoreCompareSessionByKey((void *)v15, (_DWORD *)v18);
    if ( v20 >= 0 )
    {
      if ( v20 <= 0 )
        break;
      v21 = *(_QWORD *)(v18 + 8);
    }
    else
    {
      v21 = *(_QWORD *)v18;
    }
    if ( v19 && v21 )
      v18 ^= v21;
    else
      v18 = v21;
  }
LABEL_24:
  v43 = (struct _HAM_RC_TREE_NODE *)v18;
  if ( !v18 )
    goto LABEL_29;
  if ( *(_QWORD *)(v18 + 24) )
  {
    v43 = (struct _HAM_RC_TREE_NODE *)v18;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24)) <= 1 )
      __fastfail(0xEu);
LABEL_29:
    RtlReleaseSRWLockShared(v16);
    if ( !v18 )
      goto LABEL_83;
    v22 = 3;
    if ( !Buf1 )
      goto LABEL_51;
    v23 = v18 + 40;
    RtlAcquireSRWLockShared(v18 + 56);
    v18 = *(_QWORD *)(v18 + 40);
    v24 = *(_BYTE *)(v23 + 8) & 1;
    if ( (*(_BYTE *)(v23 + 8) & 1) != 0 )
    {
      if ( !v18 )
      {
LABEL_44:
        v17 = v18;
        if ( v18 )
        {
          if ( !*(_QWORD *)(v18 + 24) )
          {
            RtlReleaseSRWLockShared(v23 + 16);
            v27 = v43;
LABEL_82:
            CemRcObjectDereference(v27);
            goto LABEL_83;
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24)) <= 1 )
            __fastfail(0xEu);
        }
        RtlReleaseSRWLockShared(v23 + 16);
        if ( !v18 )
        {
LABEL_78:
          CemRcObjectDereference(v43);
          if ( v17 )
            CemRcObjectDereference((_QWORD *)v17);
          if ( !i )
            goto LABEL_83;
          v27 = i;
          goto LABEL_82;
        }
        v22 = 2;
LABEL_51:
        if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
        {
          v31 = 0LL;
          goto LABEL_73;
        }
        RtlAcquireSRWLockShared(v17 + 56);
        v18 = *(_QWORD *)(v17 + 40);
        v28 = *(_BYTE *)(v17 + 48) & 1;
        if ( (*(_BYTE *)(v17 + 48) & 1) != 0 )
        {
          if ( !v18 )
          {
LABEL_65:
            v31 = (_QWORD *)v18;
            if ( v18 )
            {
              if ( !*(_QWORD *)(v18 + 24) )
              {
                RtlReleaseSRWLockShared(v17 + 56);
                goto LABEL_78;
              }
              if ( _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24)) <= 1 )
                __fastfail(0xEu);
            }
            RtlReleaseSRWLockShared(v17 + 56);
            if ( !v18 )
              goto LABEL_78;
            v22 = 1;
LABEL_73:
            for ( i = HamRcNodeGetFirst((struct _HAM_RC_TREE_NODE *)v18, v22);
                  i;
                  i = HamRcNodeGetSuccessor((struct _HAM_RC_TREE_NODE *)v18, i) )
            {
              if ( !(unsigned int)HampHostIdStoreReferenceHostIdCallback(i, &v40) )
                break;
            }
            if ( v31 )
              CemRcObjectDereference(v31);
            goto LABEL_78;
          }
          v18 ^= v17 + 40;
        }
        while ( v18 )
        {
          v29 = HampHostIdStoreCompareApplicationByKey((const wchar_t *)a2 + 12, (const wchar_t *)v18);
          if ( v29 >= 0 )
          {
            if ( v29 <= 0 )
              goto LABEL_65;
            v30 = *(_QWORD *)(v18 + 8);
          }
          else
          {
            v30 = *(_QWORD *)v18;
          }
          if ( v28 && v30 )
            v18 ^= v30;
          else
            v18 = v30;
        }
        goto LABEL_65;
      }
      v18 ^= v23;
    }
    while ( v18 )
    {
      v25 = HampHostIdStoreCompareUserByKey(Buf1, (char *)v18);
      if ( v25 >= 0 )
      {
        if ( v25 <= 0 )
          goto LABEL_44;
        v26 = *(_QWORD *)(v18 + 8);
      }
      else
      {
        v26 = *(_QWORD *)v18;
      }
      if ( v24 && v26 )
        v18 ^= v26;
      else
        v18 = v26;
    }
    goto LABEL_44;
  }
  RtlReleaseSRWLockShared(v16);
LABEL_83:
  if ( HampLockTrackerId != -1 )
  {
    v32 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v33 = *v32;
    if ( (*v32 & 0x800) == 0 )
      __int2c();
    v7 = v32[12]-- == 1;
    if ( v7 )
      *v32 = v33 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  v6 = a1;
  RtlReleaseSRWLockShared((char *)a1 + 800);
  v34 = v41;
  *((_QWORD *)a2 + 73) = v41;
  if ( !v34 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    return 3236691974LL;
  }
  v4 = (char *)a2 - 64;
LABEL_91:
  HostJobHandle = HampSystemQueryHostJobHandle(a2, (void **)a2 + 72);
  if ( HostJobHandle >= 0 )
  {
    v37 = 0LL;
    if ( a2 )
      v37 = v4;
    HostJobHandle = TpAllocWork(
                      (char *)a2 + 640,
                      RmHamHostStateWorker,
                      v37,
                      (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                             + 120)
                                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                    + 584);
    if ( HostJobHandle >= 0 )
    {
      HostJobHandle = TpAllocWork(
                        (char *)a2 + 632,
                        HampHostTerminateWorker,
                        a2,
                        (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                               + 120)
                                   + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                      + 584);
      if ( HostJobHandle >= 0 )
      {
        if ( *((_BYTE *)a2 + 592) != 1
          || (HostJobHandle = TpAllocWork(
                                (char *)a2 + 648,
                                HampHostPlmServiceDesktopBridgeHost,
                                a2,
                                (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                       + 120)
                                           + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 584),
              HostJobHandle >= 0) )
        {
          HostJobHandle = (*(__int64 (__fastcall **)(_QWORD, void (*)(void *, void *), struct _RM_HAM_ACTIVITY_HOST *, char *))(*(_QWORD *)(*((_QWORD *)v37 + 6) + 40LL) + 168LL))(
                            *((_QWORD *)v37 + 153),
                            HampHostQuiesceTimerCallback,
                            a2,
                            (char *)a2 + 808);
          if ( HostJobHandle >= 0 )
          {
            HostJobHandle = (*(__int64 (__fastcall **)(_QWORD, void (*)(void *, void *), struct _RM_HAM_ACTIVITY_HOST *, char *))(*(_QWORD *)(*((_QWORD *)v37 + 6) + 40LL) + 168LL))(
                              *((_QWORD *)v37 + 153),
                              HampHostDelayedEnforcementTimerCallback,
                              a2,
                              (char *)a2 + 1008);
            if ( HostJobHandle >= 0 )
            {
              if ( *((_DWORD *)v37 + 156) != 2
                || (HostJobHandle = HampSystemQueryHostJobHandle(a2, &Handle), HostJobHandle >= 0)
                && (HostJobHandle = HampWakeContextFindOrCreate(
                                      (struct _HOST_ACTIVITY_MANAGER *)((char *)v6 + 688),
                                      *((_QWORD *)v37 + 4),
                                      Handle,
                                      (struct _CEM_RC_OBJECT **)a2 + 133),
                    HostJobHandle >= 0) )
              {
                HostJobHandle = 0;
              }
              if ( Handle )
                NtClose(Handle);
            }
          }
        }
      }
    }
  }
  return (unsigned int)HostJobHandle;
}
