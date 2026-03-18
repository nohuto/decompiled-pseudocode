/*
 * XREFs of rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01AE834
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0188460 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01A6AF4 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C01A6D30 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01B198C (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01B1EB4 (rimProcessPointerDeviceButtonContact.c)
 */

__int64 __fastcall rimCreateAndProcessPointerDeviceButtonOnlyFrame(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v6; // rbp
  struct RIMDEV *v7; // rbx
  __int64 result; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r8
  _DWORD v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v13[0] = 0;
  v6 = a3;
  v7 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      34,
      (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
  }
  result = RIMStartPointerDeviceFrame((__int64)a1, (__int64)v7, a5);
  if ( (_DWORD)result )
  {
    RIMStoreRawDataInPointerDeviceFrame((__int64)a1, (__int64)v7, v6, a4, v13);
    rimProcessPointerDeviceButtonContact((_DWORD)a1, (_DWORD)v7, v6, a4, v13[0]);
    rimProcessMissingPointerDeviceContacts(a1, v7, 0LL);
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v7, v12);
    result = RIMCompletePointerDeviceFrame(a1, v7, 1LL);
  }
  else
  {
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      result = WPP_RECORDER_AND_TRACE_SF_(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v10,
                 v11,
                 (_DWORD)gRimLog,
                 4,
                 1,
                 35,
                 (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
    }
  }
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v10,
             v11,
             (_DWORD)gRimLog,
             4,
             1,
             36,
             (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
  }
  return result;
}
