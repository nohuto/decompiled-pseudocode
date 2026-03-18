/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x140794F30
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x14079781C (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     EtwpProviderArrivalCallback @ 0x140758DB8 (EtwpProviderArrivalCallback.c)
 *     EtwpGetSchematizedFilterSize @ 0x140796390 (EtwpGetSchematizedFilterSize.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140796798 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140796B04 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140796BF4 (EtwpReferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x140796D80 (EtwpApplyScopeFilters.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAccessCheckFromState @ 0x140797ACC (EtwpAccessCheckFromState.c)
 *     EtwpIsGuidAllowed @ 0x140797B54 (EtwpIsGuidAllowed.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14079809C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     EtwpCopySchematizedFilters @ 0x1409F4FB4 (EtwpCopySchematizedFilters.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  char v7; // r13
  __int64 v8; // r14
  BOOL v9; // r9d
  int GuidEntry; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rbx
  struct _KTHREAD *v13; // rax
  unsigned int SchematizedFilterSize; // eax
  ULONG_PTR v15; // r15
  int v16; // r8d
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  unsigned __int8 v20; // di
  unsigned __int16 *v21; // rbx
  int v22; // r8d
  int v23; // r9d
  char v24; // al
  __int64 v25; // rcx
  unsigned __int8 v26; // bl
  __int64 v27; // rdi
  __int64 v28; // rbx
  unsigned int *v29; // r12
  int v30; // eax
  ULONG_PTR v31; // rcx
  REGHANDLE v32; // rdi
  signed __int64 *v34; // r15
  int v35; // r12d
  unsigned int *v36; // r14
  __int16 v37; // ax
  __int64 v38; // rax
  void (__fastcall *v39)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD); // rbx
  void *v40; // rdi
  unsigned int v41; // r14d
  __int128 *v42; // r12
  char v43; // r13
  unsigned __int16 *v44; // r15
  unsigned __int8 i; // r14
  __int64 v46; // rdi
  int v47; // r12d
  _DWORD *v48; // r9
  _KPROCESS *v49; // rcx
  unsigned __int8 v50; // bl
  __int64 v51; // r14
  __int64 v52; // rdi
  __int16 v53; // ax
  _DWORD *v54; // r9
  _KPROCESS *v55; // rcx
  void *Pool2; // rax
  ULONGLONG v57; // rax
  __int64 v58; // rax
  _BYTE v59[8]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B0h]
  unsigned int v62; // [rsp+58h] [rbp-A8h]
  __int128 *v63; // [rsp+60h] [rbp-A0h]
  unsigned int *v64; // [rsp+68h] [rbp-98h]
  ULONG_PTR v65; // [rsp+70h] [rbp-90h]
  __int128 v66; // [rsp+80h] [rbp-80h] BYREF
  __int128 v67; // [rsp+90h] [rbp-70h]
  __int128 v68; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v69[3]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70[3]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  __int64 v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]

  v7 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL);
  v9 = (*(_BYTE *)(a1 + 98) & 2) != 0;
  *(_QWORD *)&v68 = a3;
  v64 = a5;
  BugCheckParameter2 = 0LL;
  v63 = 0LL;
  v61 = v8;
  GuidEntry = EtwpFindOrCreateGuidEntry(v8, a2, 2, v9, (__int64)&BugCheckParameter2);
  if ( !GuidEntry )
  {
    *a5 = 120;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = BugCheckParameter2;
    v65 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 408, 0LL);
    *(_QWORD *)(v12 + 416) = KeGetCurrentThread();
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 408LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL) = KeGetCurrentThread();
    if ( *(_QWORD *)(a1 + 40) )
    {
      GuidEntry = 0;
      v15 = BugCheckParameter2;
      goto LABEL_22;
    }
    SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
    v62 = SchematizedFilterSize;
    if ( SchematizedFilterSize )
      *a5 += SchematizedFilterSize + 16;
    if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *a5 > a4 )
    {
      v15 = BugCheckParameter2;
      GuidEntry = -1073741789;
      goto LABEL_22;
    }
    v15 = BugCheckParameter2;
    EtwpReferenceGuidEntry(BugCheckParameter2);
    v17 = (_QWORD *)(v15 + 56);
    *(_QWORD *)(a1 + 40) = v15;
    v18 = *(_QWORD *)(v15 + 56);
    v19 = (_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v18 + 8) != v15 + 56 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(a1 + 24) = v17;
    *(_QWORD *)(v18 + 8) = v19;
    *v17 = v19;
    if ( !*(_DWORD *)(v15 + 96) )
    {
      v38 = *(_QWORD *)(v15 + 400);
      if ( !v38 || !*(_DWORD *)(v38 + 96) )
      {
        *a5 = 0;
LABEL_21:
        GuidEntry = 0;
LABEL_22:
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL) = 0LL;
        ExReleasePushLockEx(*(_QWORD *)(a1 + 32) + 408LL, 0LL);
        KeLeaveCriticalRegion();
        v31 = v65 + 408;
        *(_QWORD *)(v65 + 416) = 0LL;
        ExReleasePushLockEx(v31, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_23;
      }
    }
    v20 = 0;
    v21 = (unsigned __int16 *)(v15 + 134);
    do
    {
      if ( *(_DWORD *)(v21 - 3) )
      {
        v34 = (signed __int64 *)EtwpAcquireLoggerContextByLoggerId(v8, *v21, 0LL);
        if ( (unsigned __int8)EtwpIsGuidAllowed(v34, *(_QWORD *)(a1 + 32) + 40LL) )
        {
          ExAcquirePushLockSharedEx((ULONG_PTR)(v34 + 86), 0LL);
          if ( v34[97] )
            v35 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
          else
            v35 = -1073741790;
          if ( _InterlockedCompareExchange64(v34 + 86, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v34 + 86);
          KeAbPostRelease((ULONG_PTR)(v34 + 86));
          if ( v35 < 0 )
          {
            EtwpReleaseLoggerContext(v34, 0LL);
          }
          else
          {
            v7 += 1 << v20;
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v34[137] + 448) + 8LL * *(unsigned int *)v34),
              1u);
          }
          v8 = v61;
        }
        else
        {
          EtwpReleaseLoggerContext(v34, 0LL);
        }
      }
      ++v20;
      v21 += 16;
    }
    while ( v20 < 8u );
    v59[0] = v7;
    LOBYTE(v16) = 2;
    EtwpApplyScopeFilters(a1, 0, v16, 0, (__int64)v59);
    v15 = BugCheckParameter2;
    v24 = v7 & v59[0];
    *(_BYTE *)(a1 + 101) = v7 & v59[0];
    v25 = *(_QWORD *)(v15 + 400);
    if ( v25 )
    {
      v43 = 0;
      v44 = (unsigned __int16 *)(v25 + 134);
      for ( i = 0; i < 8u; ++i )
      {
        if ( *(_DWORD *)(v44 - 3) )
        {
          v46 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, *v44, 0LL);
          if ( (unsigned __int8)EtwpIsGuidAllowed(v46, *(_QWORD *)(a1 + 32) + 40LL) )
          {
            ExAcquirePushLockSharedEx(v46 + 688, 0LL);
            if ( *(_QWORD *)(v46 + 776) )
              v47 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
            else
              v47 = -1073741790;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v46 + 688), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v46 + 688));
            KeAbPostRelease(v46 + 688);
            if ( v47 >= 0 )
              v43 += 1 << i;
          }
          EtwpReleaseLoggerContext(v46, 0LL);
        }
        v44 += 16;
      }
      v59[0] = v43;
      LOBYTE(v23) = 1;
      LOBYTE(v22) = 2;
      EtwpApplyScopeFilters(a1, 0, v22, v23, (__int64)v59);
      v15 = BugCheckParameter2;
      v8 = v61;
      *(_BYTE *)(a1 + 103) = v43 & v59[0];
      v24 = *(_BYTE *)(a1 + 101);
    }
    if ( v24 )
    {
      v26 = 0;
      v27 = 0LL;
      do
      {
        if ( ((unsigned __int8)(1 << v26) & *(_BYTE *)(a1 + 101)) != 0 )
        {
          v36 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                                  v8,
                                  *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + v27 + 134),
                                  0LL);
          v37 = *(_WORD *)(a1 + 98);
          if ( (v37 & 0x20) != 0 || (v36[204] & 0x2000000) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              EtwpProviderArrivalCallback((__int64)v36, 0, a1);
            }
            else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
            {
              v49 = *(_KPROCESS **)(a1 + 80);
              memset(v69, 0, sizeof(v69));
              KiStackAttachProcess(v49, 0LL, (__int64)v69, v48);
              EtwpProviderArrivalCallback((__int64)v36, 1, a1);
              KiUnstackDetachProcess((__int64)v69, 0LL);
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
            }
          }
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v36 + 137) + 448LL) + 8LL * *v36),
            1u);
        }
        v8 = v61;
        ++v26;
        v27 += 32LL;
      }
      while ( v26 < 8u );
      if ( !*(_BYTE *)(a1 + 103) )
        goto LABEL_18;
    }
    else if ( !*(_BYTE *)(a1 + 103) )
    {
      GuidEntry = 0;
      *v64 = 0;
      goto LABEL_22;
    }
    v50 = 0;
    v51 = 0LL;
    do
    {
      if ( ((unsigned __int8)(1 << v50) & *(_BYTE *)(a1 + 103)) != 0 )
      {
        v52 = EtwpAcquireLoggerContextByLoggerId(
                EtwpHostSiloState,
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 400LL) + v51 + 134),
                0LL);
        v53 = *(_WORD *)(a1 + 98);
        if ( (v53 & 0x20) != 0 || (*(_DWORD *)(v52 + 816) & 0x2000000) != 0 )
        {
          if ( (v53 & 1) != 0 )
          {
            EtwpProviderArrivalCallback(v52, 0, a1);
          }
          else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL)) )
          {
            v55 = *(_KPROCESS **)(a1 + 80);
            memset(v70, 0, sizeof(v70));
            KiStackAttachProcess(v55, 0LL, (__int64)v70, v54);
            EtwpProviderArrivalCallback(v52, 1, a1);
            KiUnstackDetachProcess((__int64)v70, 0LL);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 1112LL));
          }
        }
        EtwpReleaseLoggerContext(v52, 0LL);
      }
      ++v50;
      v51 += 32LL;
    }
    while ( v50 < 8u );
LABEL_18:
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v39 = *(void (__fastcall **)(GUID *, __int64, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD))(a1 + 88);
      if ( v39 )
      {
        v40 = 0LL;
        v68 = 0LL;
        v66 = 0LL;
        v67 = 0LL;
        EtwpComputeRegEntryEnableInfo(a1, &v66);
        v41 = v62;
        if ( v62 )
        {
          Pool2 = (void *)ExAllocatePool2(256LL, v62, 1182233669LL);
          v40 = Pool2;
          if ( Pool2 )
          {
            v42 = &v68;
            *(_QWORD *)&v68 = Pool2;
            *((_QWORD *)&v68 + 1) = v41 | 0x8000000000000000uLL;
            EtwpCopySchematizedFilters(Pool2);
          }
          else
          {
            v42 = v63;
          }
        }
        else
        {
          v42 = 0LL;
        }
        v39(&NullGuid, 1LL, BYTE4(v66), v67, *((_QWORD *)&v67 + 1), v42, *(_QWORD *)(a1 + 80));
        if ( v40 )
          ExFreePoolWithTag(v40, 0);
      }
    }
    else
    {
      v28 = v68;
      EtwpComputeRegEntryEnableInfo(a1, v68 + 72);
      v29 = v64;
      *v64 = 120;
      v30 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
      if ( v30 )
      {
        *v29 = v30 + 136;
        *(_DWORD *)(v28 + 132) = 0x80000000;
        *(_DWORD *)(v28 + 128) = v30;
        *(_QWORD *)(v28 + 120) = 136LL;
        EtwpCopySchematizedFilters((void *)(v28 + 136));
        *(_DWORD *)(v28 + 116) = 1;
      }
      else
      {
        *(_DWORD *)(v28 + 116) = 0;
      }
    }
    goto LABEL_21;
  }
  v15 = BugCheckParameter2;
LABEL_23:
  if ( v15 )
    EtwpUnreferenceGuidEntry((PVOID)v15);
  if ( GuidEntry >= 0 )
  {
    v32 = EtwpEventTracingProvRegHandle;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
    {
      v57 = *(_QWORD *)(a1 + 32) + 40LL;
      *(_QWORD *)&UserData.Size = 16LL;
      UserData.Ptr = v57;
      v58 = *(_QWORD *)(a1 + 40);
      v73 = 16LL;
      v72 = v58 + 40;
      EtwWrite(v32, &ETW_EVENT_GROUP_JOIN, 0LL, 2u, &UserData);
    }
  }
  return (unsigned int)GuidEntry;
}
