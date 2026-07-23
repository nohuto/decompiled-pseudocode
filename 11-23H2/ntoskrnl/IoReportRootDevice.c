/*
 * XREFs of IoReportRootDevice @ 0x140835570
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14022A970 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x14022B830 (RtlStringCchPrintfExW.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     RtlCopyUnicodeString @ 0x1402AF260 (RtlCopyUnicodeString.c)
 *     PnpRequestDeviceAction @ 0x1403591E4 (PnpRequestDeviceAction.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     PpDevNodeUnlockTree @ 0x1406C992C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C99C0 (PpDevNodeLockTree.c)
 *     PiPnpRtlEndOperation @ 0x1407889BC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788BC0 (PiPnpRtlBeginOperation.c)
 *     _PnpSetObjectProperty @ 0x140796D6C (_PnpSetObjectProperty.c)
 *     _CmSetDeviceRegProp @ 0x14079881C (_CmSetDeviceRegProp.c)
 *     _CmCreateDevice @ 0x1407D7974 (_CmCreateDevice.c)
 *     IopGetRootDeviceId @ 0x1408357B8 (IopGetRootDeviceId.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140884DEC (PnpCleanupDeviceRegistryValues.c)
 *     _CmDeleteDevice @ 0x140A61750 (_CmDeleteDevice.c)
 */

NTSTATUS __stdcall IoReportRootDevice(PDRIVER_OBJECT DriverObject)
{
  PDRIVER_EXTENSION DriverExtension; // rsi
  NTSTATUS result; // eax
  NTSTATUS appended; // ebx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v6; // rcx
  __int16 v7; // di
  int v8; // eax
  char v9; // r14
  HANDLE v10; // rdi
  HANDLE v11; // r8
  wchar_t *pszFormat; // [rsp+30h] [rbp-D8h]
  unsigned int v13; // [rsp+38h] [rbp-D0h]
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h] BYREF
  _WORD v21[200]; // [rsp+A8h] [rbp-60h] BYREF
  char v22; // [rsp+238h] [rbp+130h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  SourceString.Buffer = v21;
  *(_QWORD *)&DestinationString.Length = 26345472LL;
  *(_QWORD *)&SourceString.Length = 26214400LL;
  LODWORD(v16) = 0;
  LOWORD(v14) = 0;
  Handle = 0LL;
  DestinationString.Buffer = (wchar_t *)&v22;
  P = 0LL;
  result = IopGetRootDeviceId(&DriverExtension->ServiceKeyName, &SourceString);
  if ( result < 0 )
    return result;
  if ( SourceString.Length > 0x18Eu )
    return -1073741773;
  RtlCopyUnicodeString(&DestinationString, &SourceString);
  appended = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( appended >= 0 )
  {
    PpDevNodeLockTree(1);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    appended = RtlAppendUnicodeToString(&SourceString, L"\\");
    if ( appended >= 0 )
    {
      ppszDestEnd = &v21[(unsigned __int64)SourceString.Length >> 1];
      RtlStringCchPrintfExW(
        ppszDestEnd,
        (400 - (unsigned __int64)SourceString.Length) >> 1,
        &ppszDestEnd,
        0LL,
        0,
        L"%04u",
        0LL);
      v6 = &ppszDestEnd[-((unsigned __int64)SourceString.Length >> 1)] - v21;
      if ( (_DWORD)v6 == -1 )
        v7 = 400 - SourceString.Length;
      else
        v7 = 2 * v6;
      SourceString.Length += v7;
      v8 = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)SourceString.Buffer, 983103, &Handle, &v14, 0);
      v9 = v14;
      appended = v8;
      if ( v8 >= 0 )
      {
        if ( !(_BYTE)v14 )
          goto LABEL_9;
        v10 = Handle;
        v11 = Handle;
        v13 = DestinationString.Length + 4;
        pszFormat = DestinationString.Buffer;
        *(_DWORD *)&DestinationString.Buffer[((unsigned __int64)v13 >> 1) - 2] = 0;
        appended = CmSetDeviceRegProp(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)SourceString.Buffer,
                     (__int64)v11,
                     2u,
                     7u,
                     (__int64)pszFormat,
                     v13,
                     0);
        if ( appended >= 0 )
        {
          LODWORD(v16) = 32;
          appended = CmSetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)SourceString.Buffer,
                       (__int64)v10,
                       0xBu,
                       4u,
                       (__int64)&v16,
                       4u,
                       0);
          if ( appended >= 0 )
          {
            BYTE1(v14) = -1;
            appended = PnpSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)SourceString.Buffer,
                         1u,
                         (__int64)v10,
                         0LL,
                         (__int64)&DEVPKEY_Device_Reported,
                         17,
                         (__int64)&v14 + 1,
                         1u,
                         0);
            if ( appended >= 0 )
            {
              appended = CmSetDeviceRegProp(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)SourceString.Buffer,
                           (__int64)v10,
                           5u,
                           1u,
                           (__int64)DriverExtension->ServiceKeyName.Buffer,
                           (unsigned int)DriverExtension->ServiceKeyName.Length + 2,
                           0);
              if ( appended >= 0 )
              {
                DriverObject->Flags |= 0x800u;
                PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 8u, 0, 0LL, 0LL, 0LL, 0LL);
                goto LABEL_9;
              }
            }
          }
        }
      }
      if ( v9 )
      {
        CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString.Buffer, 0LL);
        PnpCleanupDeviceRegistryValues(&SourceString);
      }
    }
  }
LABEL_9:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PpDevNodeUnlockTree(1);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return appended;
}
