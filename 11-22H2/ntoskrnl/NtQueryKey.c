/*
 * XREFs of NtQueryKey @ 0x1406D6C60
 * Callers:
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14087C9C8 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DB3C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095F798 (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8650 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140B36EB4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     ExFreeToLookasideListEx @ 0x14020BA00 (ExFreeToLookasideListEx.c)
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FB70 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A2E70 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     CmQueryKey @ 0x1406D7280 (CmQueryKey.c)
 *     CmpBounceContextStart @ 0x1406DC3D0 (CmpBounceContextStart.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E23B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E86A0 (CmpCallCallBacksEx.c)
 *     ExRaiseAccessViolation @ 0x1408742B0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     CmpAcquireShutdownRundown @ 0x140AF6380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF6470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v5; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  KPROCESSOR_MODE v12; // cl
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  int Key; // ebx
  _QWORD *v18; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v20; // r9d
  unsigned __int16 *v21; // r14
  int v22; // eax
  PVOID v23; // rcx
  void *v24; // rdx
  unsigned int v26; // eax
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v28; // rcx
  KPROCESSOR_MODE v29; // [rsp+40h] [rbp-1A8h]
  char v30; // [rsp+41h] [rbp-1A7h]
  char v31; // [rsp+42h] [rbp-1A6h]
  char v32; // [rsp+43h] [rbp-1A5h]
  PVOID Object; // [rsp+58h] [rbp-190h] BYREF
  ULONG v34; // [rsp+60h] [rbp-188h] BYREF
  PVOID v35; // [rsp+68h] [rbp-180h] BYREF
  PVOID v36; // [rsp+70h] [rbp-178h] BYREF
  __int64 v37; // [rsp+78h] [rbp-170h]
  _QWORD v38[2]; // [rsp+80h] [rbp-168h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-158h] BYREF
  __int128 v40; // [rsp+98h] [rbp-150h] BYREF
  PVOID v41; // [rsp+A8h] [rbp-140h] BYREF
  int v42; // [rsp+B0h] [rbp-138h]
  int v43; // [rsp+B4h] [rbp-134h]
  _QWORD *v44; // [rsp+B8h] [rbp-130h]
  int v45; // [rsp+C0h] [rbp-128h]
  __int128 v46; // [rsp+C4h] [rbp-124h]
  __int64 v47; // [rsp+D4h] [rbp-114h]
  int v48; // [rsp+DCh] [rbp-10Ch]
  _QWORD v49[8]; // [rsp+E0h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+120h] [rbp-C8h] BYREF
  char v51; // [rsp+130h] [rbp-B8h]
  _BYTE v52[71]; // [rsp+131h] [rbp-B7h] BYREF
  _OWORD v53[2]; // [rsp+180h] [rbp-68h] BYREF

  v5 = Length;
  v40 = 0LL;
  HandleInformation = 0LL;
  v34 = 0;
  memset(v52, 0, sizeof(v52));
  memset(v53, 0, sizeof(v53));
  v37 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v53, 0x20000LL);
  v30 = 0;
  v31 = 0;
  v35 = 0LL;
  memset(v49, 0, sizeof(v49));
  *(_OWORD *)Src = 0LL;
  v51 = 0;
  v38[1] = v38;
  v38[0] = v38;
  CmpInitializeThreadInfo((__int64)&v40);
  v36 = 0LL;
  v32 = CmpAcquireShutdownRundown(v10, v9, v11);
  if ( !v32 )
  {
    Key = -1073741431;
    goto LABEL_33;
  }
  if ( (unsigned int)KeyInformationClass > KeyTrustInformation )
  {
    if ( CmpTraceRoutine )
    {
      if ( KeyHandle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        Object = 0LL;
        if ( ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL) >= 0 )
        {
          v37 = *((_QWORD *)Object + 1);
          ObfDereferenceObject(Object);
        }
      }
    }
    Key = -1073741811;
    goto LABEL_33;
  }
  v12 = KeGetCurrentThread()->PreviousMode;
  v29 = v12;
  if ( v12 == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v13 = (unsigned __int64)KeyInformation;
      if ( ((unsigned __int8)KeyInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = (unsigned __int64)KeyInformation + v5 - 1;
      if ( (unsigned __int64)KeyInformation > v14 || v14 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v15 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v13 = *(_BYTE *)v13;
        v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v13 != v15 );
    }
    v16 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v12 = 1;
  }
  Object = 0LL;
  Key = ObReferenceObjectByHandle(
          KeyHandle,
          ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0,
          (POBJECT_TYPE)CmKeyObjectType,
          v12,
          &Object,
          &HandleInformation);
  v18 = Object;
  v35 = Object;
  if ( Key < 0 )
    goto LABEL_33;
  if ( *(_DWORD *)Object != 1803104306 )
  {
    if ( KeyInformationClass != KeyCachedInformation )
    {
      Key = -1073741816;
      goto LABEL_33;
    }
    *ResultLength = 40;
    if ( (unsigned int)v5 < 0x28 )
    {
      Key = -1073741789;
      goto LABEL_33;
    }
    *(_OWORD *)KeyInformation = 0LL;
    *((_OWORD *)KeyInformation + 1) = 0LL;
    *((_QWORD *)KeyInformation + 4) = 0LL;
    *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v18[1] + 96LL);
LABEL_32:
    Key = 0;
    goto LABEL_33;
  }
  if ( CmpTraceRoutine )
    v37 = *((_QWORD *)Object + 1);
  if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
  {
    Key = -1073741790;
    goto LABEL_33;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v31 = 1;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
    v21 = (unsigned __int16 *)Object;
    goto LABEL_28;
  }
  v21 = (unsigned __int16 *)Object;
  v49[0] = Object;
  LODWORD(v49[1]) = KeyInformationClass;
  v49[2] = KeyInformation;
  LODWORD(v49[3]) = v5;
  v49[4] = ResultLength;
  LOBYTE(v20) = 1;
  v22 = CmpCallCallBacksEx(7, (unsigned int)v49, 0, v20, 22, (__int64)Object, (__int64)v38);
  Key = v22;
  if ( v22 < 0 )
  {
    if ( v22 != -1073740541 )
      goto LABEL_33;
    goto LABEL_32;
  }
  v30 = 1;
LABEL_28:
  if ( KeyInformationClass == KeyHandleTagsInformation )
  {
    *ResultLength = 4;
    if ( (unsigned int)v5 < 4 )
    {
      Key = -1073741789;
      goto LABEL_33;
    }
    *(_DWORD *)KeyInformation = v21[25];
    goto LABEL_32;
  }
  Key = CmKeyBodyRemapToVirtualForEnum(&v35, (unsigned __int8)v29, ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0, &v36);
  if ( Key >= 0 )
  {
    Key = CmpBounceContextStart(Src, KeyInformation, v5, (unsigned int)v29, 2);
    if ( Key >= 0 )
    {
      Key = CmQueryKey((_DWORD)v35, (_DWORD)v36, v5, (__int64)&v34);
      if ( Key >= 0 || Key == -1073741789 || Key == -2147483643 )
      {
        v26 = v34;
        *ResultLength = v34;
        if ( Key != -1073741789 )
        {
          if ( (unsigned int)v5 >= v26 )
            LODWORD(v5) = v26;
          if ( Src[0] != Src[1] )
            memmove(Src[0], Src[1], (unsigned int)v5);
        }
      }
    }
  }
LABEL_33:
  if ( v36 )
    ObfDereferenceObject(v36);
  if ( v30 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v38[0] != v38 )
  {
    v43 = 0;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0;
    v41 = v35;
    v42 = Key;
    v45 = Key;
    v44 = v49;
    CmpCallCallBacksEx(22, (unsigned int)&v41, 0, 0, 22, (__int64)v35, (__int64)v38);
    Key = v45;
  }
  if ( v31 )
    KeLeaveCriticalRegion();
  v23 = v35;
  if ( v35 )
    ObfDereferenceObject(v35);
  v24 = Src[1];
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v52 )
  {
    if ( (v51 & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, Src[1]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
  }
  if ( CmpTraceRoutine )
  {
    v28 = v37;
    LOBYTE(v28) = 13;
    CmpTraceRoutine(v28, v53, (unsigned int)Key, (unsigned int)KeyInformationClass);
  }
  if ( v32 )
    CmpReleaseShutdownRundown(v23, v24);
  CmCleanupThreadInfo((__int64 *)&v40);
  return Key;
}
