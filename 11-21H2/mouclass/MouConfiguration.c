/*
 * XREFs of MouConfiguration @ 0x1C000F080
 * Callers:
 *     DriverEntry @ 0x1C000F2D0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C00026A0 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C00027A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0002990 (WPP_RECORDER_SF_Dd.c)
 *     __security_check_cookie @ 0x1C0002D60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002F10 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C00059CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0005AA4 (WPP_RECORDER_SF_D.c)
 *     _tlgKeywordOn @ 0x1C0006D28 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0006D5C (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall MouConfiguration(__int64 a1)
{
  char v1; // di
  void *v2; // rsi
  __int64 v3; // rdx
  unsigned __int64 v4; // r10
  const wchar_t *v5; // rax
  __int16 v6; // r8
  signed __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r9d
  int v12; // r9d
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 Pool2; // rax
  HANDLE v19; // rbx
  __int64 (__fastcall *SystemRoutineAddress)(__int64, HANDLE, void *, _QWORD); // rax
  HANDLE *p_Handle; // [rsp+28h] [rbp-89h]
  int v22; // [rsp+48h] [rbp-69h] BYREF
  int Lock_high; // [rsp+4Ch] [rbp-65h] BYREF
  int Lock; // [rsp+50h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+78h] [rbp-39h] BYREF
  int *v28; // [rsp+98h] [rbp-19h]
  __int64 v29; // [rsp+A0h] [rbp-11h]
  int *p_Lock_high; // [rsp+A8h] [rbp-9h]
  __int64 v31; // [rsp+B0h] [rbp-1h]
  _DWORD *v32; // [rsp+B8h] [rbp+7h]
  __int64 v33; // [rsp+C0h] [rbp+Fh]
  PWSTR Buffer; // [rsp+C8h] [rbp+17h]
  _DWORD v35[2]; // [rsp+D0h] [rbp+1Fh] BYREF
  int *p_Lock; // [rsp+D8h] [rbp+27h]
  __int64 v37; // [rsp+E0h] [rbp+2Fh]

  v1 = 1;
  Handle = 0LL;
  v2 = 0LL;
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = 100;
  WPP_MAIN_CB.DeviceQueue.Lock = 0x100000000LL;
  if ( (stru_1C0009310.Length & 1) == 0
    && (stru_1C0009310.MaximumLength & 1) == 0
    && stru_1C0009310.Length <= stru_1C0009310.MaximumLength
    && stru_1C0009310.MaximumLength != 0xFFFF
    && (stru_1C0009310.Buffer || !stru_1C0009310.Length && !stru_1C0009310.MaximumLength) )
  {
    v3 = 0x7FFFLL;
    v4 = (unsigned __int64)stru_1C0009310.MaximumLength >> 1;
    v5 = L"PointerClass";
    v6 = 0;
    if ( v4 )
    {
      v7 = (char *)stru_1C0009310.Buffer - (char *)L"PointerClass";
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
    stru_1C0009310.Length = 2 * v6;
  }
  p_Handle = &Handle;
  v8 = IoOpenDriverRegistryKey(a1, 0LL, 131097LL, 0LL);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_18;
    v12 = 61;
LABEL_15:
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v12, (_DWORD)p_Handle, v8);
    goto LABEL_16;
  }
  Pool2 = ExAllocatePool2(256LL, 280LL, 1131769677LL);
  v2 = (void *)Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_18;
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v9, 1LL);
    goto LABEL_16;
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
  *(_QWORD *)(Pool2 + 136) = &stru_1C0009310;
  *(_QWORD *)(Pool2 + 184) = L"ConnectMultiplePorts";
  *(_QWORD *)(Pool2 + 192) = &WPP_MAIN_CB.DeviceQueue.Lock;
  *(_DWORD *)(Pool2 + 120) = 288;
  *(_DWORD *)(Pool2 + 144) = 16777217;
  *(_DWORD *)(Pool2 + 176) = 288;
  *(_DWORD *)(Pool2 + 200) = 67108868;
  v19 = Handle;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, HANDLE, void *, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  LODWORD(p_Handle) = 0;
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, HANDLE, void *, _QWORD))RtlQueryRegistryValues;
  v8 = SystemRoutineAddress(3221225472LL, v19, v2, 0LL);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_18;
    v12 = 63;
    goto LABEL_15;
  }
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x40u, (int)p_Handle, stru_1C0009310.Buffer);
LABEL_18:
  v13 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
  if ( !*((_DWORD *)&WPP_MAIN_CB.Reserved + 2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11, (_DWORD)p_Handle, 0);
    v13 = 100;
    goto LABEL_20;
  }
  if ( *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) <= 0xAAAAAAAu )
  {
LABEL_20:
    v14 = 24 * v13;
    goto LABEL_21;
  }
  v14 = 2400;
LABEL_21:
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = v14;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      v10,
      v11,
      (_DWORD)p_Handle,
      v14,
      SBYTE4(WPP_MAIN_CB.DeviceQueue.Lock));
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
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 67, (_DWORD)p_Handle, v1);
  }
  if ( (unsigned int)dword_1C0009010 > 5 && tlgKeywordOn() )
  {
    v22 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
    v28 = &v22;
    Lock_high = HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock);
    p_Lock_high = &Lock_high;
    v32 = v35;
    Buffer = stru_1C0009310.Buffer;
    v35[0] = stru_1C0009310.Length;
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    p_Lock = &Lock;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 2LL;
    v35[1] = 0;
    v37 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v15, (unsigned __int8 *)dword_1C0007764, v16, v17, 7u, &v27);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( Handle )
    ZwClose(Handle);
}
