/*
 * XREFs of EtwpRegisterKMProvider @ 0x14078DDD4
 * Callers:
 *     EtwRegisterClassicProvider @ 0x14078DD40 (EtwRegisterClassicProvider.c)
 *     EtwRegister @ 0x14078DD90 (EtwRegister.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     EtwpUpdateEnableMask @ 0x1406BDC94 (EtwpUpdateEnableMask.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1406BE254 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpGetSchematizedFilterSize @ 0x1406BF5A8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1406BF740 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406BF9A4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpTrackProviderRegistration @ 0x1406BFBE0 (EtwpTrackProviderRegistration.c)
 *     EtwpAddKmRegEntry @ 0x14078E0C8 (EtwpAddKmRegEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408A6F4A (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1409F525C (EtwpCopySchematizedFilters.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpRegisterKMProvider(
        __int64 a1,
        _QWORD *a2,
        int a3,
        void (__fastcall *a4)(ULONG_PTR, __int64, __int64 *, __int64),
        __int64 a5,
        __int64 a6,
        __int128 **a7)
{
  bool v10; // zf
  __int64 v11; // rax
  unsigned int v12; // edi
  ULONG_PTR v13; // rsi
  struct _KTHREAD *v14; // rax
  ULONG_PTR v15; // rdi
  int v16; // edx
  ULONG_PTR v17; // rbx
  __int128 *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  ULONG_PTR v22; // rax
  __int64 v23; // rax
  unsigned __int8 v25; // cl
  __int16 v26; // ax
  __int64 v27; // rdx
  int v28; // r8d
  void *Pool2; // r14
  unsigned int SchematizedFilterSize; // eax
  __int64 v31; // r8
  unsigned int v32; // r12d
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-51h] BYREF
  __int128 *v35; // [rsp+48h] [rbp-49h] BYREF
  ULONG_PTR v36; // [rsp+50h] [rbp-41h]
  __int128 v37; // [rsp+58h] [rbp-39h] BYREF
  __int128 v38; // [rsp+68h] [rbp-29h]
  __int64 v39; // [rsp+78h] [rbp-19h] BYREF
  int v40; // [rsp+80h] [rbp-11h]
  int v41; // [rsp+84h] [rbp-Dh]
  __int128 v42; // [rsp+88h] [rbp-9h] BYREF

  v39 = a5;
  BugCheckParameter2 = 0LL;
  *a7 = 0LL;
  v11 = *a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v10 = *a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v35 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( v10 )
    v11 = a2[1] - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v11 )
    return 3221225506LL;
  if ( !a4 && a5 || a3 != 3 && (a3 != 2 || !a4) )
    return 3221225485LL;
  v12 = EtwpFindOrCreateGuidEntry(a1, (__int64)a2, 0LL, 0, &BugCheckParameter2);
  if ( v12 )
  {
    v17 = BugCheckParameter2;
  }
  else
  {
    v13 = BugCheckParameter2;
    if ( *(_QWORD *)(BugCheckParameter2 + 400) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v13 + 400) + 408LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(v13 + 400) + 416LL) = KeGetCurrentThread();
    }
    v14 = KeGetCurrentThread();
    v15 = BugCheckParameter2;
    v36 = BugCheckParameter2;
    --v14->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v15 + 408, 0LL);
    v16 = a3;
    v17 = BugCheckParameter2;
    *(_QWORD *)(v15 + 416) = KeGetCurrentThread();
    LODWORD(BugCheckParameter2) = EtwpAddKmRegEntry(v17, v16, (_DWORD)a4, a5, (__int64)&v35);
    v12 = BugCheckParameter2;
    if ( (BugCheckParameter2 & 0x80000000) == 0LL )
    {
      v18 = v35;
      *((_QWORD *)v35 + 6) = a6;
      *a7 = v18;
      if ( *(_DWORD *)(v17 + 96) )
        EtwpUpdateEnableMask(v17, (*((_BYTE *)v18 + 98) & 8) != 0, 0, 0, (_BYTE *)v18 + 100);
      v19 = *(_QWORD *)(v13 + 400);
      if ( v19 && *(_DWORD *)(v19 + 96) )
        EtwpUpdateEnableMask(v19, (*((_BYTE *)v18 + 98) & 8) != 0, 1, 0, (_BYTE *)v18 + 102);
      EtwpComputeRegEntryEnableInfo((__int64)v18, (__int64)&v37);
      EtwpTrackProviderRegistration((__int64)v18);
      if ( a4 )
      {
        if ( (*((_BYTE *)v18 + 98) & 8) != 0 )
        {
          if ( (*(_BYTE *)(v17 + 91) & 1) != 0 )
          {
            v25 = *(_BYTE *)(v17 + 90);
            v26 = *(_WORD *)(v17 + 88);
            v27 = *(unsigned int *)(v17 + 80);
            v28 = *(_DWORD *)(v17 + 84);
            v41 = 0;
            LOWORD(v39) = v26;
            WORD1(v39) = v25;
            HIDWORD(v39) = v27;
            LOBYTE(v27) = 1;
            v40 = v28;
            a4(v17 + 40, v27, &v39, a5);
          }
        }
        else if ( (_DWORD)v37 )
        {
          Pool2 = 0LL;
          v35 = 0LL;
          v42 = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize(v17, *((_BYTE *)v18 + 100));
          v32 = SchematizedFilterSize;
          if ( SchematizedFilterSize )
          {
            Pool2 = (void *)ExAllocatePool2(256LL, SchematizedFilterSize, 1182233669LL);
            if ( Pool2 )
            {
              *(_QWORD *)&v42 = Pool2;
              *((_QWORD *)&v42 + 1) = v32 | 0x8000000000000000uLL;
              v35 = &v42;
              EtwpCopySchematizedFilters(Pool2);
            }
          }
          LOBYTE(v31) = BYTE4(v37);
          ((void (__fastcall *)(GUID *, __int64, __int64, _QWORD, _QWORD, __int128 *, __int64))a4)(
            &NullGuid,
            1LL,
            v31,
            v38,
            *((_QWORD *)&v38 + 1),
            v35,
            v39);
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0);
        }
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
        EtwpEventWriteTemplateSessAndProv(v20, &ETW_EVENT_PROVIDER_REGISTER, v21, 1LL, 0LL, a2);
      v12 = BugCheckParameter2;
    }
    v22 = v36;
    *(_QWORD *)(v36 + 416) = 0LL;
    ExReleasePushLockEx((__int64 *)(v22 + 408), 0LL);
    KeLeaveCriticalRegion();
    v23 = *(_QWORD *)(v13 + 400);
    if ( v23 )
    {
      *(_QWORD *)(v23 + 416) = 0LL;
      ExReleasePushLockEx((__int64 *)(*(_QWORD *)(v13 + 400) + 408LL), 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( v17 )
    EtwpUnreferenceGuidEntry((__int64 *)v17);
  return v12;
}
