/*
 * XREFs of IoGetDeviceInterfaceAlias @ 0x1407C57A0
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x1407C53EC (PiCMGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1406CC228 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406CE9F0 (_CmValidateDeviceInterfaceName.c)
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D3F74 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1406D42E4 (PnpUnicodeStringToWstr.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140741628 (PiPnpRtlApplyMandatoryFilters.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     _PnpStringFromGuid @ 0x140788044 (_PnpStringFromGuid.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1407C5B04 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1407C5B98 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceName @ 0x1407C5C88 (_CmGetDeviceInterfaceName.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v6; // rdi
  void *v7; // rsi
  __int64 v8; // rcx
  NTSTATUS ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Pool2; // rax
  void *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  WCHAR *v18; // rsi
  char v19; // r12
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  int SessionId; // [rsp+20h] [rbp-E0h]
  int SessionIda; // [rsp+20h] [rbp-E0h]
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v27; // [rsp+68h] [rbp-98h] BYREF
  int v28; // [rsp+70h] [rbp-90h] BYREF
  int v29[2]; // [rsp+78h] [rbp-88h] BYREF
  int v30; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  wchar_t v33[40]; // [rsp+B0h] [rbp-50h] BYREF

  LOWORD(v26) = 0;
  Handle = 0LL;
  v28 = 0;
  v6 = 0LL;
  v30 = 0;
  v7 = 0LL;
  *(_QWORD *)v29 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !SymbolicLinkName || !SymbolicLinkName->Buffer || !SymbolicLinkName->Length )
    goto LABEL_6;
  ObjectProperty = PnpUnicodeStringToWstr(v29, 0LL, &SymbolicLinkName->Length);
  if ( ObjectProperty < 0 )
  {
LABEL_29:
    v7 = *(void **)v29;
    goto LABEL_7;
  }
  v7 = *(void **)v29;
  if ( CmValidateDeviceInterfaceName(v8, *(__int64 *)v29) < 0 )
  {
LABEL_6:
    ObjectProperty = -1073741811;
    goto LABEL_7;
  }
  SeCaptureSubjectContext(&SubjectContext);
  ObjectProperty = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, (__int64)v7, 3, 0LL, &SubjectContext, &v26);
  SeReleaseSubjectContext(&SubjectContext);
  if ( ObjectProperty >= 0 )
  {
    if ( !(_BYTE)v26 )
    {
      ObjectProperty = -1073741790;
      goto LABEL_7;
    }
    ObjectProperty = PnpStringFromGuid((int *)AliasInterfaceClassGuid, v33);
    if ( ObjectProperty >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      Pool2 = ExAllocatePool2(256LL, 400LL, 538996816LL);
      v13 = (void *)Pool2;
      if ( Pool2 )
      {
        v14 = *(_QWORD *)v29;
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           *(__int64 *)v29,
                           3LL,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_Device_InstanceId,
                           (__int64)&v28,
                           Pool2,
                           400,
                           (__int64)&v30,
                           0);
        if ( ObjectProperty < 0 )
          goto LABEL_25;
        if ( v28 != 18 )
        {
          ObjectProperty = -1073741585;
          goto LABEL_25;
        }
        v27 = 128;
        v6 = (void *)ExAllocatePool2(256LL, 256LL, 538996816LL);
        if ( !v6 )
          goto LABEL_32;
        ObjectProperty = CmGetDeviceInterfaceReferenceString(v15, v14, v6, 128LL, &v27);
        if ( ObjectProperty != -1073741789 )
        {
LABEL_16:
          if ( ObjectProperty == -1073741772 )
          {
            ExFreePoolWithTag(v6, 0);
            v6 = 0LL;
          }
          else if ( ObjectProperty < 0 )
          {
            goto LABEL_25;
          }
          ObjectProperty = CmGetDeviceInterfacePathFormat(v16, v14, (char *)&v26 + 1);
          if ( ObjectProperty >= 0 )
          {
            v27 = 512;
            v18 = (WCHAR *)ExAllocatePool2(256LL, 1024LL, 538996816LL);
            if ( v18 )
            {
              v19 = BYTE1(v26);
              LOBYTE(SessionId) = BYTE1(v26);
              ObjectProperty = CmGetDeviceInterfaceName(v17, v33, v13, v6, SessionId, v18, 512, &v27);
              if ( ObjectProperty != -1073741789 )
              {
LABEL_21:
                if ( ObjectProperty >= 0 )
                {
                  ObjectProperty = RtlInitUnicodeStringEx(AliasSymbolicLinkName, v18);
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = CmOpenDeviceInterfaceRegKey(
                                       *(__int64 *)&PiPnpRtlCtx,
                                       (__int64)v18,
                                       0x30u,
                                       v20,
                                       131097,
                                       0,
                                       (__int64)&Handle,
                                       0LL);
                    if ( ObjectProperty >= 0 )
                      ZwClose(Handle);
                    else
                      RtlFreeUnicodeString(AliasSymbolicLinkName);
                  }
                }
                goto LABEL_25;
              }
              ExFreePoolWithTag(v18, 0);
              v22 = v27;
              v18 = (WCHAR *)ExAllocatePool2(256LL, 2LL * v27, 538996816LL);
              if ( v18 )
              {
                LOBYTE(SessionIda) = v19;
                ObjectProperty = CmGetDeviceInterfaceName(v23, v33, v13, v6, SessionIda, v18, v22, &v27);
                goto LABEL_21;
              }
            }
            goto LABEL_32;
          }
LABEL_25:
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
          goto LABEL_29;
        }
        ExFreePoolWithTag(v6, 0);
        v6 = (void *)ExAllocatePool2(256LL, 2LL * v27, 538996816LL);
        if ( v6 )
        {
          ObjectProperty = CmGetDeviceInterfaceReferenceString(v21, v14, v6, v27, &v27);
          goto LABEL_16;
        }
      }
LABEL_32:
      ObjectProperty = -1073741670;
      goto LABEL_25;
    }
  }
LABEL_7:
  PnpUnicodeStringToWstrFree(v7, (__int64)SymbolicLinkName);
  return ObjectProperty;
}
