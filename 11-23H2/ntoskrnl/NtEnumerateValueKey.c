/*
 * XREFs of NtEnumerateValueKey @ 0x14070E540
 * Callers:
 *     AdtpObjsInitialize @ 0x1408423C8 (AdtpObjsInitialize.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpBounceContextCleanup @ 0x1406DBDF4 (CmpBounceContextCleanup.c)
 *     CmpBounceContextStart @ 0x1406DC350 (CmpBounceContextStart.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2330 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     CmEnumerateValueKey @ 0x14070EA50 (CmEnumerateValueKey.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x14070EC28 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A17C84 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v8; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // di
  int v14; // r8d
  int v15; // r14d
  NTSTATUS v16; // ebx
  ULONG v17; // edi
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v20; // eax
  ULONG v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  char v26; // [rsp+50h] [rbp-1D8h]
  char v27; // [rsp+51h] [rbp-1D7h]
  char v28; // [rsp+52h] [rbp-1D6h]
  PVOID Object; // [rsp+58h] [rbp-1D0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-1C0h]
  ULONG v33; // [rsp+70h] [rbp-1B8h]
  PVOID v34; // [rsp+78h] [rbp-1B0h] BYREF
  PVOID v35; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v36; // [rsp+88h] [rbp-1A0h]
  _QWORD v37[2]; // [rsp+90h] [rbp-198h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-188h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-178h] BYREF
  __int128 *v40; // [rsp+C0h] [rbp-168h]
  NTSTATUS v41; // [rsp+C8h] [rbp-160h]
  __int128 v42; // [rsp+CCh] [rbp-15Ch]
  __int64 v43; // [rsp+DCh] [rbp-14Ch]
  int v44; // [rsp+E4h] [rbp-144h]
  __int128 v45[4]; // [rsp+F0h] [rbp-138h] BYREF
  _OWORD v46[2]; // [rsp+130h] [rbp-F8h] BYREF
  _OWORD v47[3]; // [rsp+150h] [rbp-D8h] BYREF
  size_t v48[2]; // [rsp+180h] [rbp-A8h] BYREF
  char v49; // [rsp+190h] [rbp-98h]
  _BYTE v50[71]; // [rsp+191h] [rbp-97h] BYREF

  v8 = Index;
  v33 = Index;
  v38 = 0LL;
  LODWORD(v35) = 0;
  memset(v47, 0, sizeof(v47));
  memset(v50, 0, sizeof(v50));
  memset(v46, 0, sizeof(v46));
  v32 = 0LL;
  v36 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v46, 0x20000LL);
  v27 = 0;
  v28 = 0;
  memset(v45, 0, sizeof(v45));
  Object = 0LL;
  LODWORD(v31) = 0;
  *(_OWORD *)v48 = 0LL;
  v49 = 0;
  v37[1] = v37;
  v37[0] = v37;
  CmpInitializeThreadInfo((__int64)&v38);
  v34 = 0LL;
  v13 = CmpAcquireShutdownRundown(v11, v10, v12);
  v26 = v13;
  if ( !v13 )
  {
    v16 = -1073741431;
    goto LABEL_32;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformation )
  {
    if ( CmpTraceRoutine )
    {
      if ( KeyHandle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v35 = 0LL;
        if ( ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v35, 0LL) >= 0 )
          ObfDereferenceObject(v35);
      }
    }
    v16 = -1073741811;
  }
  else
  {
    v15 = KeGetCurrentThread()->PreviousMode;
    v16 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 1, v14, (unsigned __int8)v15, (__int64)&Object, 0LL);
    if ( v16 < 0 )
    {
      v8 = Index;
      goto LABEL_32;
    }
    if ( CmpTraceRoutine && Object )
    {
      v32 = *((_QWORD *)Object + 1);
      v36 = v32;
    }
    if ( (_BYTE)v15 == 1 )
    {
      v17 = Length;
      if ( Length )
      {
        if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)KeyValueInformation + Length > 0x7FFFFFFF0000LL
          || (char *)KeyValueInformation + Length < KeyValueInformation )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      v18 = (__int64)ResultLength;
      if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v18 = *(_DWORD *)v18;
    }
    else
    {
      v17 = Length;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v28 = 1;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v45[0] = Object;
      *((_QWORD *)&v45[0] + 1) = __PAIR64__(KeyValueInformationClass, Index);
      *(_QWORD *)&v45[1] = KeyValueInformation;
      DWORD2(v45[1]) = v17;
      *(_QWORD *)&v45[2] = ResultLength;
      v20 = CmpCallCallBacksEx(6u, v45, 0LL, 1, 0x15u, (__int64)Object, (__int64)v37);
      v16 = v20;
      if ( v20 < 0 )
      {
        v13 = v26;
        v8 = Index;
        if ( v20 == -1073740541 )
          v16 = 0;
        goto LABEL_32;
      }
      v27 = 1;
    }
    v16 = CmKeyBodyRemapToVirtualForEnum(&Object, v15, 1, &v34);
    if ( v16 < 0 || (v16 = CmpBounceContextStart((__int64)v48, KeyValueInformation, v17, v15, 1), v16 < 0) )
    {
      v8 = Index;
LABEL_50:
      v13 = v26;
      goto LABEL_32;
    }
    if ( v34 )
    {
      CmpAttachToRegistryProcess(v47);
      v8 = Index;
      v16 = CmEnumerateValueKeyFromMergedView(
              (int)Object,
              (int)v34,
              0,
              Index,
              KeyValueInformationClass,
              v48[1],
              v17,
              (__int64)&v31,
              0LL);
      CmpDetachFromRegistryProcess(v47);
    }
    else
    {
      v8 = Index;
      v16 = CmEnumerateValueKey(Object, Index, (unsigned int)KeyValueInformationClass, v48[1], v17, &v31);
    }
    if ( v16 < 0 && v16 != -2147483643 && v16 != -1073741789 )
      goto LABEL_50;
    v21 = v31;
    *ResultLength = v31;
    if ( v16 != -1073741789 )
    {
      if ( v17 >= v21 )
        v17 = v21;
      CmpBounceContextCopyDataToCallerBuffer(v48, v17);
    }
    v13 = v26;
  }
LABEL_32:
  if ( v34 )
    ObfDereferenceObject(v34);
  if ( v27 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v37[0] != v37 )
  {
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0;
    *(_QWORD *)&v39 = Object;
    *((_QWORD *)&v39 + 1) = (unsigned int)v16;
    v41 = v16;
    v40 = v45;
    CmpCallCallBacksEx(0x15u, &v39, 0LL, 0, 0x15u, (__int64)Object, (__int64)v37);
    v16 = v41;
  }
  if ( v28 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Object )
    ObfDereferenceObject(Object);
  CmpBounceContextCleanup((__int64)v48);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v23) = 18;
    CmpTraceRoutine(v23, v46, (unsigned int)v16, v8);
  }
  if ( v13 )
    CmpReleaseShutdownRundown(v23, v22);
  CmCleanupThreadInfo((__int64 *)&v38);
  return v16;
}
