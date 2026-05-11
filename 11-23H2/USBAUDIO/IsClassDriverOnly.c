/*
 * XREFs of IsClassDriverOnly @ 0x1C002ADA4
 * Callers:
 *     IsSidebandSupported @ 0x1C002B038 (IsSidebandSupported.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C0009730 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0009770 (__report_rangecheckfailure.c)
 */

__int64 __fastcall IsClassDriverOnly(__int64 a1)
{
  unsigned int v1; // ebx
  struct _DEVICE_OBJECT *v3; // rcx
  int v4; // r8d
  PDEVICE_OBJECT v5; // rcx
  bool v6; // di
  int v7; // edx
  unsigned __int64 v8; // rax
  ULONG Type; // [rsp+48h] [rbp-19h] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-15h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-1h] BYREF
  WCHAR SourceString[16]; // [rsp+70h] [rbp+Fh] BYREF
  WCHAR Data[16]; // [rsp+90h] [rbp+2Fh] BYREF

  v1 = 0;
  RequiredSize = 0;
  Type = 0;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  DestinationString = 0LL;
  String2 = 0LL;
  wcscpy(SourceString, L"wdma_usb.inf");
  if ( IoGetDevicePropertyData(v3, &DEVPKEY_Device_DriverExtendedInfs, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
  {
    v5 = WPP_GLOBAL_Control;
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v4) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = 12;
LABEL_10:
      LOBYTE(v7) = v6;
      WPP_RECORDER_AND_TRACE_SF_(v5->AttachedDevice, v7, v4, v5->DeviceExtension);
    }
  }
  else if ( IoGetDevicePropertyData(
              *(PDEVICE_OBJECT *)(a1 + 32),
              &DEVPKEY_Device_DriverInfPath,
              0,
              0,
              0x1Au,
              Data,
              &RequiredSize,
              &Type) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v8 = (unsigned __int64)DestinationString.Length >> 1;
    if ( v8 >= 13 )
      _report_rangecheckfailure();
    Data[v8] = 0;
    RtlInitUnicodeString(&String2, Data);
    v6 = 1;
    if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
      return 1;
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v6 = 0;
    }
    LOBYTE(v4) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = 14;
      goto LABEL_10;
    }
  }
  else
  {
    v5 = WPP_GLOBAL_Control;
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v4) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = 13;
      goto LABEL_10;
    }
  }
  return v1;
}
