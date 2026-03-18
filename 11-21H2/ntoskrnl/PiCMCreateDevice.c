/*
 * XREFs of PiCMCreateDevice @ 0x140954434
 * Callers:
 *     PiCMHandleIoctl @ 0x14077BCA0 (PiCMHandleIoctl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1402DF554 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     RtlStringCchLengthW @ 0x1402E0AC4 (RtlStringCchLengthW.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x1406CFCA4 (IopIsRootEnumeratedDeviceObjectActive.c)
 *     _RegRtlSetValue @ 0x1406D5A30 (_RegRtlSetValue.c)
 *     _CmCreateDevice @ 0x140768AF8 (_CmCreateDevice.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14076B1A8 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PpDeviceRegistration @ 0x14076B554 (PpDeviceRegistration.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     PiCMReturnBufferResultData @ 0x14077C780 (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 *     _CmValidateDeviceName @ 0x14077FAC0 (_CmValidateDeviceName.c)
 *     _RegRtlQueryValue @ 0x14077FC64 (_RegRtlQueryValue.c)
 *     _CmIsRootDevice @ 0x140789040 (_CmIsRootDevice.c)
 *     PiAuDoesClientHaveAccess @ 0x14078A600 (PiAuDoesClientHaveAccess.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1409483EC (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140953D38 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMGenerateDeviceInstance @ 0x140955848 (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiCMCreateDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  wchar_t *Pool2; // rsi
  char v8; // di
  int v9; // r14d
  int DeviceInputData; // r15d
  signed int inited; // ebx
  const wchar_t *v12; // r12
  char v13; // r13
  unsigned int v14; // r8d
  int v15; // eax
  struct _KTHREAD *v16; // rax
  char PreviousMode; // bl
  int v19; // r15d
  __int64 v20; // rcx
  int v21; // r13d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v23; // rax
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rcx
  struct _KTHREAD *v27; // rax
  int DeviceRegProp; // eax
  __int64 v29; // rdx
  int v30; // ecx
  int DeviceInstanceCsConfigFlags; // eax
  char v32; // dl
  int v33; // eax
  _WORD *v34; // r12
  __int64 v35; // rdx
  int v36; // [rsp+58h] [rbp-89h] BYREF
  __int64 v37; // [rsp+5Ch] [rbp-85h] BYREF
  int v38; // [rsp+64h] [rbp-7Dh] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-79h] BYREF
  size_t pcchLength; // [rsp+70h] [rbp-71h] BYREF
  int v41; // [rsp+78h] [rbp-69h] BYREF
  int v42; // [rsp+7Ch] [rbp-65h] BYREF
  int v43; // [rsp+80h] [rbp-61h] BYREF
  HANDLE KeyHandle[2]; // [rsp+88h] [rbp-59h] BYREF
  PVOID P; // [rsp+98h] [rbp-49h]
  PVOID Object; // [rsp+A0h] [rbp-41h]
  PVOID v47; // [rsp+A8h] [rbp-39h] BYREF
  UNICODE_STRING v48; // [rsp+B0h] [rbp-31h] BYREF
  NTSTRSAFE_PCWSTR pszSrc[2]; // [rsp+C0h] [rbp-21h] BYREF
  PCWSTR SourceString[2]; // [rsp+D0h] [rbp-11h]
  __int64 v51; // [rsp+E0h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp+7h] BYREF

  v37 = 0LL;
  v51 = 0LL;
  KeyHandle[0] = 0LL;
  v48 = 0LL;
  *a6 = 0;
  Pool2 = 0LL;
  *(_OWORD *)pszSrc = 0LL;
  v43 = 0;
  v8 = 0;
  *(_OWORD *)SourceString = 0LL;
  v41 = 0;
  v9 = 0;
  DestinationString = 0LL;
  v38 = 0;
  v42 = 0;
  Object = 0LL;
  Handle = 0LL;
  v47 = 0LL;
  pcchLength = 0LL;
  P = 0LL;
  DeviceInputData = PiCMCaptureCreateDeviceInputData(a1, a2, a5, (__int64)pszSrc);
  if ( DeviceInputData < 0 )
    goto LABEL_24;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    inited = -1073741790;
    goto LABEL_12;
  }
  v12 = pszSrc[1];
  if ( !pszSrc[1] || LODWORD(SourceString[0]) < 2 || !SourceString[1] || (unsigned int)v51 < 2 || !a3 || a4 < 0x14 )
  {
    inited = -1073741811;
    goto LABEL_12;
  }
  v13 = BYTE4(pszSrc[0]);
  if ( (HIDWORD(pszSrc[0]) & 0xFFFFFFF0) != 0 || (v19 = BYTE4(pszSrc[0]) & 2, !CmIsRootDevice(SourceString[1])) )
  {
    inited = -1073741811;
    goto LABEL_12;
  }
  inited = PiPnpRtlBeginOperation((__int64 **)&v47);
  if ( inited < 0 )
    goto LABEL_12;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 400LL, 879783504LL);
  if ( !Pool2 )
  {
    inited = -1073741670;
    goto LABEL_12;
  }
  v21 = v13 & 4;
  if ( v21 )
  {
    inited = PiCMGenerateDeviceInstance(v12);
    if ( v19 )
      goto LABEL_37;
  }
  else
  {
    inited = CmValidateDeviceName(v20, v12);
  }
  if ( inited < 0 )
    goto LABEL_12;
  if ( !v21 )
  {
    inited = RtlStringCchCopyExW(Pool2, 0xC8uLL, v12, 0LL, 0LL, 0x800u);
    if ( inited < 0 )
      goto LABEL_12;
  }
  inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)Pool2, 16, 0, 131103, 0, (__int64)&Handle, 0LL);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741810 )
    goto LABEL_12;
  if ( v19 )
  {
    if ( Handle )
    {
LABEL_51:
      inited = -1073741771;
      goto LABEL_12;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    LOBYTE(v36) = 0;
    v8 = 1;
    inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Pool2, 131078, KeyHandle, &v36, 0);
    if ( inited >= 0 )
    {
      if ( (_BYTE)v36 )
      {
        v41 = 1;
        inited = RegRtlSetValue(KeyHandle[0], L"Phantom", 4u, &v41, 4u);
        ZwClose(KeyHandle[0]);
        if ( inited >= 0 )
        {
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          goto LABEL_38;
        }
      }
      else
      {
        inited = -1073741771;
        ZwClose(KeyHandle[0]);
      }
    }
LABEL_55:
    v9 = pcchLength;
    goto LABEL_12;
  }
  if ( Handle )
  {
    if ( RtlInitUnicodeStringEx(&DestinationString, Pool2) >= 0 )
    {
      PpDevNodeLockTree(0);
      v23 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
      Object = v23;
      v24 = (__int64)v23;
      if ( v23 )
        v25 = *(_QWORD *)(v23[39] + 40LL);
      else
        v25 = 0LL;
      PpDevNodeUnlockTree(0);
      if ( v25 )
      {
        if ( IopIsRootEnumeratedDeviceObjectActive(v24) )
          goto LABEL_51;
      }
      else
      {
        PiPnpRtlEnsureObjectCached(v26, (__int64)Pool2);
      }
    }
  }
  else
  {
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    LOBYTE(v36) = 0;
    v8 = 1;
    inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Pool2, 131103, &Handle, &v36, 0);
    if ( inited < 0 )
      goto LABEL_55;
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = 0;
    v9 = pcchLength;
    if ( !(_BYTE)v36 )
      goto LABEL_51;
  }
  inited = RtlInitUnicodeStringEx(&v48, Pool2);
  v8 = 0;
  if ( inited < 0 )
    goto LABEL_12;
  LODWORD(v37) = 4;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)Pool2,
                    (__int64)Handle,
                    11,
                    (__int64)&v37 + 4,
                    (__int64)&v38,
                    (__int64)&v37,
                    0);
  v30 = v38;
  if ( DeviceRegProp < 0 )
    v30 = 0;
  v38 = v30;
  DeviceInstanceCsConfigFlags = PnpGetDeviceInstanceCsConfigFlags((__int64)&v48, v29, &v42);
  v32 = v42;
  if ( DeviceInstanceCsConfigFlags < 0 )
    v32 = 0;
  if ( (v38 & 0x12) != 0 || (v32 & 2) != 0 )
  {
    inited = -1073741808;
    goto LABEL_12;
  }
  inited = PiInitializeDevice(&v48);
  if ( inited < 0 )
  {
LABEL_12:
    v14 = a4;
    goto LABEL_13;
  }
  LODWORD(v37) = 4;
  if ( (int)RegRtlQueryValue(Handle, L"Phantom", (_DWORD *)&v37 + 1, &v43, (unsigned int *)&v37) < 0
    || HIDWORD(v37) != 4
    || (v33 = v43, (_DWORD)v37 != 4) )
  {
    v33 = 0;
  }
  if ( v33 )
  {
    *(_OWORD *)KeyHandle = 0LL;
    if ( RtlInitUnicodeStringEx((PUNICODE_STRING)KeyHandle, L"Phantom") >= 0 )
      ZwDeleteValueKey(Handle, (PUNICODE_STRING)KeyHandle);
  }
  if ( (BYTE4(pszSrc[0]) & 8) != 0 )
  {
    LODWORD(v37) = 512;
    P = (PVOID)ExAllocatePool2(256LL, 512LL, 879783504LL);
    v34 = P;
    if ( !P )
    {
      inited = -1073741670;
      goto LABEL_12;
    }
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)Pool2,
                (__int64)Handle,
                5,
                (__int64)&v37 + 4,
                (__int64)P,
                (__int64)&v37,
                0) >= 0
      && HIDWORD(v37) == 1
      && (unsigned int)v37 <= 0x200
      && *v34 )
    {
      inited = RtlInitUnicodeStringEx(&v48, Pool2);
      if ( inited >= 0 )
      {
        LOBYTE(v35) = 1;
        inited = PpDeviceRegistration((__int64)&v48, v35, 0LL, 0);
      }
      if ( inited < 0 )
        goto LABEL_12;
LABEL_37:
      v8 = 0;
      if ( inited < 0 )
        goto LABEL_12;
    }
  }
LABEL_38:
  inited = RtlStringCchLengthW(Pool2, 0xC8uLL, &pcchLength);
  v8 = 0;
  if ( inited < 0 )
  {
    v9 = 0;
    goto LABEL_12;
  }
  v14 = a4;
  v9 = pcchLength + 1;
  if ( (unsigned __int64)a4 - 20 < 2 * (pcchLength + 1) )
    inited = -1073741789;
  if ( inited >= 0 )
  {
    v15 = PiCMReturnBufferResultData(inited, 2 * v9, 0, Pool2, 2 * v9, SHIDWORD(v51), a3, a4, a6);
    goto LABEL_14;
  }
LABEL_13:
  v15 = PiCMReturnBufferResultData(inited, 2 * v9, 0, 0LL, 0, SHIDWORD(v51), a3, v14, a6);
LABEL_14:
  DeviceInputData = v15;
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0x34706E50u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v8 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
LABEL_24:
  v16 = KeGetCurrentThread();
  PreviousMode = v16->PreviousMode;
  if ( pszSrc[1] )
    PiControlFreeUserModeCallersBuffer(v16->PreviousMode, (void *)pszSrc[1]);
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(PreviousMode, (void *)SourceString[1]);
  if ( v47 )
    PiPnpRtlEndOperation((PVOID **)v47);
  return (unsigned int)DeviceInputData;
}
