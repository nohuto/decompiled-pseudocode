/*
 * XREFs of MouConfiguration @ 0x1C0011080
 * Callers:
 *     DriverEntry @ 0x1C00112E0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C00021B0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_S @ 0x1C00023A0 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C00024A0 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringCopyString @ 0x1C00028B0 (RtlUnicodeStringCopyString.c)
 *     __security_check_cookie @ 0x1C00029B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005CCC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0005DA4 (WPP_RECORDER_SF_D.c)
 *     _tlgKeywordOn @ 0x1C00070F8 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C000712C (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall MouConfiguration(__int64 a1, const wchar_t *a2)
{
  char v3; // di
  void *v4; // rsi
  int v5; // eax
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // r9d
  int v9; // r9d
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 Pool2; // rax
  HANDLE v16; // rbx
  __int64 (__fastcall *SystemRoutineAddress)(__int64, HANDLE, void *, _QWORD); // rax
  HANDLE *p_Handle; // [rsp+20h] [rbp-99h]
  int v19; // [rsp+40h] [rbp-79h] BYREF
  int Lock_high; // [rsp+44h] [rbp-75h] BYREF
  int Lock; // [rsp+48h] [rbp-71h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+70h] [rbp-49h] BYREF
  int *v25; // [rsp+90h] [rbp-29h]
  __int64 v26; // [rsp+98h] [rbp-21h]
  int *p_Lock_high; // [rsp+A0h] [rbp-19h]
  __int64 v28; // [rsp+A8h] [rbp-11h]
  _DWORD *v29; // [rsp+B0h] [rbp-9h]
  __int64 v30; // [rsp+B8h] [rbp-1h]
  PWSTR Buffer; // [rsp+C0h] [rbp+7h]
  _DWORD v32[2]; // [rsp+C8h] [rbp+Fh] BYREF
  int *p_Lock; // [rsp+D0h] [rbp+17h]
  __int64 v34; // [rsp+D8h] [rbp+1Fh]

  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = 100;
  Handle = 0LL;
  WPP_MAIN_CB.DeviceQueue.Lock = 0x100000000LL;
  v3 = 1;
  v4 = 0LL;
  RtlUnicodeStringCopyString(&::DestinationString, a2);
  p_Handle = &Handle;
  v5 = IoOpenDriverRegistryKey(a1, 0LL, 131097LL, 0LL);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_7;
    v9 = 61;
LABEL_4:
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v9, (_DWORD)p_Handle, v5);
    goto LABEL_5;
  }
  Pool2 = ExAllocatePool2(256LL, 280LL, 1131769677LL);
  v4 = (void *)Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_7;
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 1LL);
    goto LABEL_5;
  }
  *(_DWORD *)(Pool2 + 8) = 288;
  *(_DWORD *)(Pool2 + 32) = 67108868;
  *(_QWORD *)(Pool2 + 16) = L"MouseDataQueueSize";
  *(_DWORD *)(Pool2 + 64) = 288;
  *(_QWORD *)(Pool2 + 24) = &WPP_MAIN_CB.Reserved + 1;
  *(_DWORD *)(Pool2 + 88) = 67108868;
  *(_QWORD *)(Pool2 + 72) = L"MaximumPortsServiced";
  *(_QWORD *)(Pool2 + 80) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
  *(_QWORD *)(Pool2 + 128) = L"PointerDeviceBaseName";
  *(_QWORD *)(Pool2 + 184) = L"ConnectMultiplePorts";
  *(_QWORD *)(Pool2 + 192) = &WPP_MAIN_CB.DeviceQueue.Lock;
  *(_DWORD *)(Pool2 + 120) = 288;
  *(_QWORD *)(Pool2 + 136) = &::DestinationString;
  *(_DWORD *)(Pool2 + 144) = 16777217;
  *(_DWORD *)(Pool2 + 176) = 288;
  *(_DWORD *)(Pool2 + 200) = 67108868;
  v16 = Handle;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, HANDLE, void *, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  LODWORD(p_Handle) = 0;
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, HANDLE, void *, _QWORD))RtlQueryRegistryValues;
  v5 = SystemRoutineAddress(3221225472LL, v16, v4, 0LL);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_7;
    v9 = 63;
    goto LABEL_4;
  }
LABEL_5:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      1,
      64,
      (_DWORD)p_Handle,
      (__int64)::DestinationString.Buffer);
  }
LABEL_7:
  v10 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
  if ( !*((_DWORD *)&WPP_MAIN_CB.Reserved + 2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, (_DWORD)p_Handle, 0);
    v10 = 100;
    goto LABEL_9;
  }
  if ( *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) <= 0xAAAAAAAu )
  {
LABEL_9:
    v11 = 24 * v10;
    goto LABEL_10;
  }
  v11 = 2400;
LABEL_10:
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = v11;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      v8,
      (_DWORD)p_Handle,
      v11,
      SBYTE4(WPP_MAIN_CB.DeviceQueue.Lock));
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    v3 = 0;
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  }
  else
  {
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v6, v7, 67, (_DWORD)p_Handle, v3);
  }
  if ( (unsigned int)dword_1C000A010 > 5 && tlgKeywordOn() )
  {
    v19 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
    v25 = &v19;
    Lock_high = HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock);
    p_Lock_high = &Lock_high;
    v29 = v32;
    Buffer = ::DestinationString.Buffer;
    v32[0] = ::DestinationString.Length;
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    p_Lock = &Lock;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 2LL;
    v32[1] = 0;
    v34 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v12, (unsigned __int8 *)dword_1C00087B4, v13, v14, 7u, &v24);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Handle )
    ZwClose(Handle);
}
