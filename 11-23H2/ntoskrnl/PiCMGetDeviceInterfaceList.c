/*
 * XREFs of PiCMGetDeviceInterfaceList @ 0x1407C9EDC
 * Callers:
 *     PiCMHandleIoctl @ 0x1406D0790 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x14022BD7C (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14055FC5C (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0jzt_EtwWriteTransfer @ 0x140564C68 (McTemplateK0jzt_EtwWriteTransfer.c)
 *     PiCMReturnBufferResultData @ 0x1406D063C (PiCMReturnBufferResultData.c)
 *     IopGetDeviceInterfaces @ 0x1407875E0 (IopGetDeviceInterfaces.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1407CA07C (PiCMCaptureInterfaceListInputData.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  wchar_t *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  int v14; // edi
  const WCHAR *v15; // r15
  NTSTATUS inited; // ecx
  signed int DeviceInterfaces; // eax
  int v18; // eax
  unsigned int v20; // [rsp+50h] [rbp-59h] BYREF
  wchar_t *v21; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v22; // [rsp+60h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  __int128 v24; // [rsp+78h] [rbp-31h] BYREF
  PCWSTR SourceString[2]; // [rsp+88h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-11h]

  v22 = a6;
  v26 = 0LL;
  *a6 = 0;
  v8 = 0LL;
  v9 = 0;
  v21 = 0LL;
  DestinationString = 0LL;
  v20 = 0;
  v24 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v12 = PiCMCaptureInterfaceListInputData(a1, a2, a5, &v24);
  if ( v12 < 0 )
    goto LABEL_14;
  v14 = DWORD1(v24);
  v15 = SourceString[1];
  if ( (byte_140C0E20B & 2) != 0 )
    McTemplateK0jzt_EtwWriteTransfer(v11, v10, v13, (__int64)&v24 + 8, SourceString[1], BYTE6(v24) & 1);
  if ( !a3 || a4 < 0x14 || (v14 & 0xFFFE0000) != 0 || (_WORD)v14 )
  {
    inited = -1073741811;
    goto LABEL_11;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, v15);
  if ( inited < 0 )
    goto LABEL_11;
  DeviceInterfaces = IopGetDeviceInterfaces(
                       (__int64)&v24 + 8,
                       (const UNICODE_STRING *)((unsigned __int64)&DestinationString & -(__int64)(DestinationString.Length != 0)),
                       (v14 & 0x10000) == 0,
                       1,
                       &v21,
                       &v20);
  v9 = v20;
  inited = DeviceInterfaces;
  v8 = v21;
  if ( a4 - 20 < v20 )
  {
    inited = -1073741789;
    goto LABEL_11;
  }
  if ( DeviceInterfaces < 0 )
  {
LABEL_11:
    v18 = PiCMReturnBufferResultData(inited, v9, 0, 0LL, 0, SHIDWORD(v26), a3, a4, v22);
    goto LABEL_12;
  }
  v18 = PiCMReturnBufferResultData(DeviceInterfaces, v20, 0, v21, v20, SHIDWORD(v26), a3, a4, v22);
LABEL_12:
  v12 = v18;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_14:
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[1]);
  if ( (byte_140C0E20B & 2) != 0 )
    McTemplateK0d_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_DeviceInterfaceList_Stop, v13, v12);
  return (unsigned int)v12;
}
