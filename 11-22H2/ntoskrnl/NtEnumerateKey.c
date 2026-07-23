/*
 * XREFs of NtEnumerateKey @ 0x1406DBEC0
 * Callers:
 *     AdtpObjsInitialize @ 0x140843E58 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8650 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140B36EB4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FB70 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A2E70 (EtwGetKernelTraceTimestamp.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     CmpBounceContextCleanup @ 0x1406DBE74 (CmpBounceContextCleanup.c)
 *     CmpBounceContextStart @ 0x1406DC3D0 (CmpBounceContextStart.c)
 *     CmEnumerateKey @ 0x1406DC4F0 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E23B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E86A0 (CmpCallCallBacksEx.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     CmpAcquireShutdownRundown @ 0x140AF6380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF63D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF6470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v7; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // di
  int v13; // r8d
  unsigned int v14; // esi
  NTSTATUS v15; // ebx
  ULONG v16; // edi
  __int64 v17; // r12
  volatile void *v18; // rbx
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v21; // r9d
  int v22; // eax
  ULONG v23; // eax
  struct _KTHREAD *v24; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  char v30; // [rsp+40h] [rbp-1A8h]
  char v31; // [rsp+41h] [rbp-1A7h]
  char v32; // [rsp+42h] [rbp-1A6h]
  PVOID Object; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-198h]
  volatile void *Address; // [rsp+58h] [rbp-190h] BYREF
  _DWORD v37[4]; // [rsp+60h] [rbp-188h] BYREF
  __int64 v38; // [rsp+70h] [rbp-178h]
  PVOID v39; // [rsp+78h] [rbp-170h] BYREF
  _QWORD v40[2]; // [rsp+80h] [rbp-168h] BYREF
  int v41; // [rsp+90h] [rbp-158h]
  __int128 v42; // [rsp+98h] [rbp-150h] BYREF
  PVOID v43; // [rsp+A8h] [rbp-140h] BYREF
  NTSTATUS v44; // [rsp+B0h] [rbp-138h]
  int v45; // [rsp+B4h] [rbp-134h]
  _QWORD *v46; // [rsp+B8h] [rbp-130h]
  NTSTATUS v47; // [rsp+C0h] [rbp-128h]
  __int128 v48; // [rsp+C4h] [rbp-124h]
  __int64 v49; // [rsp+D4h] [rbp-114h]
  int v50; // [rsp+DCh] [rbp-10Ch]
  _QWORD v51[8]; // [rsp+E0h] [rbp-108h] BYREF
  _OWORD v52[2]; // [rsp+120h] [rbp-C8h] BYREF
  void *Src[2]; // [rsp+140h] [rbp-A8h] BYREF
  char v54; // [rsp+150h] [rbp-98h]
  _BYTE v55[71]; // [rsp+151h] [rbp-97h] BYREF

  Address = KeyInformation;
  v7 = Index;
  v37[2] = Index;
  v42 = 0LL;
  v41 = 0;
  memset(v55, 0, sizeof(v55));
  memset(v52, 0, sizeof(v52));
  v35 = 0LL;
  v38 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v52, 0x20000LL);
  v31 = 0;
  v32 = 0;
  memset(v51, 0, sizeof(v51));
  Object = 0LL;
  v37[0] = 0;
  *(_OWORD *)Src = 0LL;
  v54 = 0;
  v40[1] = v40;
  v40[0] = v40;
  CmpInitializeThreadInfo((__int64)&v42);
  v39 = 0LL;
  v12 = CmpAcquireShutdownRundown(v10, v9, v11);
  v30 = v12;
  if ( !v12 )
  {
    v15 = -1073741431;
    goto LABEL_24;
  }
  if ( (unsigned int)KeyInformationClass > KeyFullInformation )
  {
    if ( CmpTraceRoutine )
    {
      if ( KeyHandle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        Address = 0LL;
        if ( ObReferenceObjectByHandle(
               KeyHandle,
               0,
               (POBJECT_TYPE)CmKeyObjectType,
               PreviousMode,
               (PVOID *)&Address,
               0LL) >= 0 )
          ObfDereferenceObject((PVOID)Address);
      }
    }
    v15 = -1073741811;
  }
  else
  {
    v14 = KeGetCurrentThread()->PreviousMode;
    v15 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 8, v13, (unsigned __int8)v14, (__int64)&Object, 0LL);
    if ( v15 < 0 )
    {
      v7 = Index;
      goto LABEL_24;
    }
    if ( CmpTraceRoutine && Object )
    {
      v35 = *((_QWORD *)Object + 1);
      v38 = v35;
    }
    if ( (_BYTE)v14 == 1 )
    {
      v16 = Length;
      v17 = Length;
      v18 = Address;
      ProbeForWrite(Address, Length, 4u);
      v19 = (__int64)ResultLength;
      if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v19 = *(_DWORD *)v19;
    }
    else
    {
      v16 = Length;
      v17 = Length;
      v18 = Address;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v32 = 1;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      v51[0] = Object;
      v51[1] = __PAIR64__(KeyInformationClass, Index);
      v51[2] = v18;
      LODWORD(v51[3]) = v16;
      v51[4] = ResultLength;
      LOBYTE(v21) = 1;
      v22 = CmpCallCallBacksEx(5, (unsigned int)v51, 0, v21, 20, (__int64)Object, (__int64)v40);
      v15 = v22;
      if ( v22 < 0 )
      {
        v12 = v30;
        v7 = Index;
        if ( v22 == -1073740541 )
          v15 = 0;
        goto LABEL_24;
      }
      v31 = 1;
    }
    v15 = CmKeyBodyRemapToVirtualForEnum(&Object, (unsigned __int8)v14, 8LL, &v39);
    if ( v15 < 0 || (v15 = CmpBounceContextStart(Src, Address, v17, v14, 0), v15 < 0) )
    {
      v7 = Index;
LABEL_42:
      v12 = v30;
      goto LABEL_24;
    }
    v7 = Index;
    v15 = CmEnumerateKey((_DWORD)Object, (_DWORD)v39, Index, KeyInformationClass, (__int64)Src[1], v16, (__int64)v37);
    if ( v15 < 0 && v15 != -2147483643 && v15 != -1073741789 )
      goto LABEL_42;
    v23 = v37[0];
    *ResultLength = v37[0];
    if ( v15 != -1073741789 )
    {
      if ( v16 >= v23 )
        v16 = v23;
      if ( Src[0] != Src[1] )
        memmove(Src[0], Src[1], v16);
    }
    v12 = v30;
  }
LABEL_24:
  if ( v39 )
    ObfDereferenceObject(v39);
  if ( v31 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v40[0] != v40 )
  {
    v45 = 0;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0;
    v43 = Object;
    v44 = v15;
    v47 = v15;
    v46 = v51;
    CmpCallCallBacksEx(20, (unsigned int)&v43, 0, 0, 20, (__int64)Object, (__int64)v40);
    v15 = v47;
  }
  if ( v32 )
  {
    v24 = KeGetCurrentThread();
    if ( v24->KernelApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)v24->ApcState.ApcListHead[0].Flink != &v24->152
      && !v24->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  CmpBounceContextCleanup((__int64)Src);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v27) = 17;
    CmpTraceRoutine(v27, v52, (unsigned int)v15, v7);
  }
  if ( v12 )
    CmpReleaseShutdownRundown(v27, v26);
  CmCleanupThreadInfo((__int64 *)&v42);
  return v15;
}
