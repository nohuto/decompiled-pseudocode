/*
 * XREFs of IsClassDriverOnly @ 0x1C0029204
 * Callers:
 *     IsSidebandSupported @ 0x1C00294B0 (IsSidebandSupported.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001010 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0001050 (__report_rangecheckfailure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall IsClassDriverOnly(__int64 a1)
{
  unsigned int v1; // ebx
  struct _DEVICE_OBJECT *v3; // rcx
  PDEVICE_OBJECT v4; // rcx
  char v5; // di
  char v6; // r8
  unsigned __int16 v7; // dx
  unsigned __int64 v8; // rax
  int Size; // [rsp+28h] [rbp-39h]
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
    v4 = WPP_GLOBAL_Control;
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = 12;
LABEL_10:
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)v4->AttachedDevice,
        v5,
        v6,
        (__int64)v4->DeviceExtension,
        Size,
        9u,
        v7,
        (__int64)&WPP_20662486e8873b2e8eec9ca0910714ec_Traceguids);
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
    v5 = 1;
    if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
      return 1;
    v4 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v5 = 0;
    }
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = 14;
      goto LABEL_10;
    }
  }
  else
  {
    v4 = WPP_GLOBAL_Control;
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = 13;
      goto LABEL_10;
    }
  }
  return v1;
}
