/*
 * XREFs of UsbhGetPnpKey @ 0x1C005A134
 * Callers:
 *     UsbhBuildUxdPnpId @ 0x1C00598B4 (UsbhBuildUxdPnpId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhGetPnpKey(__int64 a1, __int64 a2, const GUID *a3, _QWORD *a4, _DWORD *a5)
{
  NTSTATUS result; // eax
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, void **); // rax
  int v9; // ebx
  int v10; // edx
  __int64 v11; // [rsp+30h] [rbp-61h] BYREF
  int v12; // [rsp+38h] [rbp-59h]
  int v13; // [rsp+3Ch] [rbp-55h]
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-51h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-41h] BYREF
  void *v16; // [rsp+60h] [rbp-31h] BYREF
  int v17; // [rsp+68h] [rbp-29h]
  wchar_t *Buffer; // [rsp+70h] [rbp-21h]
  __int64 *v19; // [rsp+78h] [rbp-19h]
  int v20; // [rsp+80h] [rbp-11h]
  __int64 v21; // [rsp+88h] [rbp-9h]
  int v22; // [rsp+90h] [rbp-1h]
  __int64 v23; // [rsp+98h] [rbp+7h]
  int v24; // [rsp+A0h] [rbp+Fh]
  __int64 v25; // [rsp+A8h] [rbp+17h]
  __int64 v26; // [rsp+B0h] [rbp+1Fh]
  int v27; // [rsp+B8h] [rbp+27h]
  __int64 v28; // [rsp+C0h] [rbp+2Fh]
  int v29; // [rsp+C8h] [rbp+37h]

  GuidString = 0LL;
  v13 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x20u,
      (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
  result = RtlStringFromGUID(a3, &GuidString);
  if ( result >= 0 )
  {
    v11 = 0LL;
    v16 = &UsbhQueryUxdDevice;
    Buffer = GuidString.Buffer;
    v12 = 0;
    v19 = &v11;
    v17 = 4;
    v20 = 0;
    v21 = 0LL;
    v22 = 0;
    v23 = 0LL;
    v24 = 0;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v29 = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, void **))MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, void **))RtlQueryRegistryValues;
    v9 = SystemRoutineAddress(1LL, L"usbhub\\uxd_control\\pnp", &v16);
    RtlFreeUnicodeString(&GuidString);
    if ( v9 >= 0 )
    {
      if ( !v11 )
        return -1073741811;
      v10 = v12;
      if ( !v12 )
        return -1073741811;
      *a4 = v11;
      *a5 = v10;
    }
    return v9;
  }
  return result;
}
