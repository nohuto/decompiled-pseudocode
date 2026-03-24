/*
 * XREFs of KbdConfiguration @ 0x1C0011560
 * Callers:
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002CE0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_S @ 0x1C0002D60 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C0002E40 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0003010 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00031C0 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1C00077C8 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00077FC (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall KbdConfiguration(__int64 a1)
{
  char v1; // si
  void *v2; // rbx
  __int64 v3; // rdx
  unsigned __int64 v4; // r10
  const wchar_t *v5; // rax
  __int16 v6; // r8
  signed __int64 v7; // r9
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  __int64 Pool2; // rax
  HANDLE v12; // rdi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, HANDLE, void *, _QWORD); // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r9d
  HANDLE *p_Handle; // [rsp+28h] [rbp-89h]
  int v21; // [rsp+38h] [rbp-79h] BYREF
  int v22; // [rsp+3Ch] [rbp-75h] BYREF
  KSPIN_LOCK Lock; // [rsp+40h] [rbp-71h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+68h] [rbp-49h] BYREF
  int *v27; // [rsp+88h] [rbp-29h]
  __int64 v28; // [rsp+90h] [rbp-21h]
  int *v29; // [rsp+98h] [rbp-19h]
  __int64 v30; // [rsp+A0h] [rbp-11h]
  _DWORD *v31; // [rsp+A8h] [rbp-9h]
  __int64 v32; // [rsp+B0h] [rbp-1h]
  PWSTR Buffer; // [rsp+B8h] [rbp+7h]
  _DWORD v34[2]; // [rsp+C0h] [rbp+Fh] BYREF
  KSPIN_LOCK *p_Lock; // [rsp+C8h] [rbp+17h]
  __int64 v36; // [rsp+D0h] [rbp+1Fh]
  char *v37; // [rsp+D8h] [rbp+27h]
  __int64 v38; // [rsp+E0h] [rbp+2Fh]

  v1 = 1;
  Handle = 0LL;
  v2 = 0LL;
  dword_1C000A234 = 100;
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 1;
  WPP_MAIN_CB.DeviceQueue.Lock = 1LL;
  if ( (stru_1C000A338.Length & 1) == 0
    && (stru_1C000A338.MaximumLength & 1) == 0
    && stru_1C000A338.Length <= stru_1C000A338.MaximumLength
    && stru_1C000A338.MaximumLength != 0xFFFF
    && (stru_1C000A338.Buffer || !stru_1C000A338.Length && !stru_1C000A338.MaximumLength) )
  {
    v3 = 0x7FFFLL;
    v4 = (unsigned __int64)stru_1C000A338.MaximumLength >> 1;
    v5 = L"KeyboardClass";
    v6 = 0;
    if ( v4 )
    {
      v7 = (char *)stru_1C000A338.Buffer - (char *)L"KeyboardClass";
      do
      {
        if ( !v3 )
          break;
        if ( !*v5 )
          break;
        *(const wchar_t *)((char *)v5 + v7) = *v5;
        --v3;
        ++v5;
        ++v6;
      }
      while ( v3 + v4 - 0x7FFF );
    }
    stru_1C000A338.Length = 2 * v6;
  }
  p_Handle = &Handle;
  v8 = IoOpenDriverRegistryKey(a1, 0LL, 131097LL, 0LL);
  if ( v8 < 0 )
  {
    if ( v8 == -1073741772 )
      goto LABEL_17;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v19 = 64;
    LOBYTE(v9) = 2;
    goto LABEL_47;
  }
  Pool2 = ExAllocatePool2(256LL, 336LL, 1130652235LL);
  v2 = (void *)Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 65, (unsigned int)&Handle, 1);
    goto LABEL_17;
  }
  *(_DWORD *)(Pool2 + 8) = 288;
  *(_DWORD *)(Pool2 + 32) = 67108868;
  *(_QWORD *)(Pool2 + 16) = L"KeyboardDataQueueSize";
  *(_DWORD *)(Pool2 + 64) = 288;
  *(_QWORD *)(Pool2 + 24) = &dword_1C000A234;
  *(_DWORD *)(Pool2 + 88) = 67108868;
  *(_QWORD *)(Pool2 + 72) = L"MaximumPortsServiced";
  *(_QWORD *)(Pool2 + 80) = &WPP_MAIN_CB.DeviceQueue.1;
  *(_QWORD *)(Pool2 + 128) = L"KeyboardDeviceBaseName";
  *(_QWORD *)(Pool2 + 136) = &stru_1C000A338;
  *(_QWORD *)(Pool2 + 184) = L"ConnectMultiplePorts";
  *(_QWORD *)(Pool2 + 192) = &WPP_MAIN_CB.DeviceQueue.Lock;
  *(_QWORD *)(Pool2 + 240) = L"SendOutputToAllPorts";
  *(_QWORD *)(Pool2 + 248) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
  *(_DWORD *)(Pool2 + 120) = 288;
  *(_DWORD *)(Pool2 + 144) = 16777217;
  *(_DWORD *)(Pool2 + 176) = 288;
  *(_DWORD *)(Pool2 + 200) = 67108868;
  *(_DWORD *)(Pool2 + 232) = 288;
  *(_DWORD *)(Pool2 + 256) = 67108868;
  v12 = Handle;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, HANDLE, void *, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, HANDLE, void *, _QWORD))RtlQueryRegistryValues;
  LODWORD(p_Handle) = 0;
  v8 = SystemRoutineAddress(3221225472LL, v12, v2, 0LL);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v19 = 66;
    LOBYTE(v9) = 3;
LABEL_47:
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v19, (_DWORD)p_Handle, v8);
  }
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      v10,
      67,
      (_DWORD)p_Handle,
      (__int64)stru_1C000A338.Buffer);
  }
LABEL_19:
  v14 = dword_1C000A234;
  if ( dword_1C000A234 )
  {
    if ( (unsigned int)dword_1C000A234 > 0x15555555 )
    {
      v15 = 1200;
      goto LABEL_22;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 68, (_DWORD)p_Handle, 0);
    v14 = 100;
  }
  v15 = 12 * v14;
LABEL_22:
  dword_1C000A234 = v15;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 69, (_DWORD)p_Handle, v15);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        v10,
        70,
        (_DWORD)p_Handle,
        WPP_MAIN_CB.DeviceQueue.Busy);
    }
  }
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    v1 = 0;
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  }
  else
  {
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 71, (_DWORD)p_Handle, v1);
  }
  if ( (unsigned int)dword_1C000A010 > 5 && tlgKeywordOn() )
  {
    v21 = dword_1C000A234;
    v27 = &v21;
    v22 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
    v29 = &v22;
    v31 = v34;
    Buffer = stru_1C000A338.Buffer;
    v34[0] = stru_1C000A338.Length;
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    p_Lock = &Lock;
    v37 = (char *)&Lock + 4;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 2LL;
    v34[1] = 0;
    v36 = 4LL;
    v38 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v16, (unsigned __int8 *)dword_1C0008B34, v17, v18, 8u, &v26);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( Handle )
    ZwClose(Handle);
}
