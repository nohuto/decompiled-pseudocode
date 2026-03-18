/*
 * XREFs of PiCMDeleteDevice @ 0x140954E2C
 * Callers:
 *     PiCMHandleIoctl @ 0x14077BCA0 (PiCMHandleIoctl.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140255030 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwPlugPlayControl @ 0x14041DE80 (ZwPlugPlayControl.c)
 *     PiQueueDeviceRequest @ 0x14065F5D4 (PiQueueDeviceRequest.c)
 *     PiCMReleaseObjectInputData @ 0x1406BACAC (PiCMReleaseObjectInputData.c)
 *     PpDeviceRegistration @ 0x14076B554 (PpDeviceRegistration.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     _CmIsRootEnumeratedDevice @ 0x140778D60 (_CmIsRootEnumeratedDevice.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     _CmValidateDeviceName @ 0x14077FAC0 (_CmValidateDeviceName.c)
 *     _CmIsRootDevice @ 0x140789040 (_CmIsRootDevice.c)
 *     PiCMCaptureObjectInputData @ 0x14078A1A8 (PiCMCaptureObjectInputData.c)
 *     _CmGetDeviceStatus @ 0x14078A470 (_CmGetDeviceStatus.c)
 *     PiCMReturnBasicResultData @ 0x14078A584 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14078A600 (PiAuDoesClientHaveAccess.c)
 *     _CmDeleteDevice @ 0x140A236A4 (_CmDeleteDevice.c)
 */

__int64 __fastcall PiCMDeleteDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        PVOID **P)
{
  PVOID **v6; // r15
  int v9; // ebx
  __int64 v10; // rcx
  int inited; // ebx
  const WCHAR *v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  const WCHAR *v14; // rdi
  struct _KTHREAD *v15; // rax
  __int64 v16; // r8
  unsigned int v18; // [rsp+38h] [rbp-59h]
  int v19; // [rsp+48h] [rbp-49h] BYREF
  int v20; // [rsp+4Ch] [rbp-45h] BYREF
  int v21; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  __int128 v23; // [rsp+68h] [rbp-29h] BYREF
  PCWSTR SourceString[2]; // [rsp+78h] [rbp-19h]
  __int64 v25; // [rsp+88h] [rbp-9h]
  UNICODE_STRING v26; // [rsp+90h] [rbp-1h] BYREF
  UNICODE_STRING v27; // [rsp+A0h] [rbp+Fh] BYREF
  __int128 v28; // [rsp+B0h] [rbp+1Fh]
  __int64 v29; // [rsp+C0h] [rbp+2Fh]

  v6 = P;
  v19 = 0;
  v21 = 0;
  v20 = 0;
  *(_DWORD *)P = 0;
  P = 0LL;
  DestinationString = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v29 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v23);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      v12 = SourceString[0];
      if ( !SourceString[0]
        || *(_QWORD *)((char *)&v23 + 4) != 0x100000000LL
        || HIDWORD(SourceString[1])
        || !a3
        || a4 < 8 )
      {
        goto LABEL_27;
      }
      inited = CmValidateDeviceName(v10, SourceString[0]);
      if ( inited < 0 )
        goto LABEL_28;
      if ( CmIsRootDevice(v12) )
      {
LABEL_27:
        inited = -1073741811;
        goto LABEL_28;
      }
      inited = PiPnpRtlBeginOperation((__int64 **)&P);
      if ( inited >= 0 )
      {
        if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v12, 0LL, &v19, &v21, &v20, v18) >= 0 && (v19 & 2) != 0 )
        {
          if ( (v19 & 0x2001) == 1 )
          {
            inited = -1073741808;
            goto LABEL_28;
          }
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited < 0 )
            goto LABEL_28;
          PpDevNodeLockTree(3);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          PpDeviceRegistration((__int64)&DestinationString, 0LL, 0LL, 1);
          inited = CmDeleteDevice(PiPnpRtlCtx);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          PpDevNodeUnlockTree(3);
          if ( inited < 0 )
            goto LABEL_28;
          v14 = SourceString[0];
          if ( RtlInitUnicodeStringEx(&v27, SourceString[0]) >= 0 )
          {
            *(_QWORD *)&v28 = 0x4000000000001LL;
            ZwPlugPlayControl(14LL, (__int64)&v27);
          }
        }
        else
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited < 0 )
            goto LABEL_28;
          PpDevNodeLockTree(3);
          v15 = KeGetCurrentThread();
          --v15->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          PpDeviceRegistration((__int64)&DestinationString, 0LL, 0LL, 1);
          inited = CmDeleteDevice(PiPnpRtlCtx);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          PpDevNodeUnlockTree(3);
          if ( inited < 0 )
            goto LABEL_28;
          v14 = SourceString[0];
          if ( CmIsRootEnumeratedDevice(SourceString[0])
            && RtlInitUnicodeStringEx(&DestinationString, L"HTREE\\ROOT\\0") >= 0 )
          {
            PiQueueDeviceRequest((__int64)&DestinationString, 8, v16, 1, 0LL);
          }
        }
        if ( RtlInitUnicodeStringEx(&v26, v14) >= 0 )
          PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&v26.Length);
      }
    }
    else
    {
      inited = -1073741790;
    }
LABEL_28:
    v9 = PiCMReturnBasicResultData(inited, v25, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)&v23);
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)v9;
}
