/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C01AB894
 * Callers:
 *     ?RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z @ 0x1C01A9FF4 (-RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z.c)
 *     RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01AA71C (RIMQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01AA8A8 (RIMQueueDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01AB3DC (RIMVirtQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtQueueRimDevChangeAsyncWorkItem @ 0x1C01AB59C (RIMVirtQueueRimDevChangeAsyncWorkItem.c)
 *     RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01AB718 (RIMVirtQueueRootPnpEndSyncAsyncWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        unsigned __int16 a7,
        int a8,
        ...)
{
  struct RECORDER_LOG__ *v8; // r15
  const wchar_t *v9; // rbx
  __int64 v10; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  const wchar_t *v15; // rax
  bool v16; // zf
  int v17; // [rsp+20h] [rbp-98h]
  __int64 v18; // [rsp+100h] [rbp+48h] BYREF
  va_list va; // [rsp+100h] [rbp+48h]
  __int64 v20; // [rsp+108h] [rbp+50h] BYREF
  va_list va1; // [rsp+108h] [rbp+50h]
  __int64 v22; // [rsp+110h] [rbp+58h] BYREF
  va_list va2; // [rsp+110h] [rbp+58h]
  __int64 v24; // [rsp+118h] [rbp+60h] BYREF
  va_list va3; // [rsp+118h] [rbp+60h]
  const wchar_t *v26; // [rsp+120h] [rbp+68h]
  va_list va4; // [rsp+128h] [rbp+70h] BYREF

  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v22 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v24 = va_arg(va4, _QWORD);
  v26 = va_arg(va4, const wchar_t *);
  v8 = gRimLog;
  v9 = v26;
  v10 = -1LL;
  if ( a2 )
  {
    if ( v26 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v26[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = v26;
    if ( !v26 )
      v15 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      a7,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      4LL,
      v15,
      v14,
      va4,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    v16 = v9 == 0LL;
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
      v16 = v9 == 0LL;
    }
    if ( v16 )
      v9 = L"NULL";
    LOWORD(v17) = a7;
    WppAutoLogTrace(
      v8,
      a5,
      1LL,
      &WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      v17,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      4LL,
      v9);
  }
}
