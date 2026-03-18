/*
 * XREFs of RIMGetPnpActionBitsFromGuid @ 0x1C01A0D90
 * Callers:
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01AA314 (RIMDeviceNotifyAsyncWorkItem.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_LLLD @ 0x1C01A11C8 (WPP_RECORDER_AND_TRACE_SF_LLLD.c)
 */

_DWORD *__fastcall RIMGetPnpActionBitsFromGuid(char a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v7; // rax
  __int64 v8; // r9
  _DWORD *result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // bl
  int v13; // r9d

  v7 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  v8 = a2;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 )
    v7 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v7 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    result = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      result = (_DWORD *)WPP_RECORDER_AND_TRACE_SF_qq(
                           WPP_GLOBAL_Control->AttachedDevice,
                           a2,
                           a3,
                           (_DWORD)gRimLog,
                           4,
                           1,
                           10,
                           (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
                           a1,
                           v8);
    }
    *a4 = 1;
    return result;
  }
  v10 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 )
    v10 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v10 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        4,
        1,
        11,
        (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
        a1,
        v8);
    }
    result = a5;
LABEL_37:
    *result = 1;
    return result;
  }
  v11 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 )
    v11 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v11 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        4,
        1,
        12,
        (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
        a1,
        v8);
    }
    result = a6;
    goto LABEL_37;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (v12 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v12 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(unsigned __int16 *)(a3 + 6);
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    LOBYTE(a2) = v12;
    return (_DWORD *)WPP_RECORDER_AND_TRACE_SF_LLLD(WPP_GLOBAL_Control->AttachedDevice, a2, a3, v13);
  }
  return result;
}
