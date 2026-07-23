/*
 * XREFs of TpCheckTerminateWorker @ 0x180004900
 * Callers:
 *     RtlExitUserThread @ 0x1800048A0 (RtlExitUserThread.c)
 * Callees:
 *     DbgPrintEx @ 0x180005CC0 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x180032D00 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x1800A47F0 (ZwDuplicateObject.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     TppReportExceptionFilter @ 0x180124408 (TppReportExceptionFilter.c)
 */

void __cdecl TpCheckTerminateWorker(HANDLE Thread)
{
  struct _TEB *v2; // rbx
  bool v3; // zf
  bool v4; // bl
  HANDLE Handle; // [rsp+40h] [rbp-108h] BYREF
  __int64 v6; // [rsp+48h] [rbp-100h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-F8h] BYREF
  int v8; // [rsp+58h] [rbp-F0h]
  int v9; // [rsp+5Ch] [rbp-ECh]
  _BYTE ThreadInformation[16]; // [rsp+60h] [rbp-E8h] BYREF
  void *v11; // [rsp+70h] [rbp-D8h]
  void *v12; // [rsp+78h] [rbp-D0h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+90h] [rbp-B8h] BYREF

  v6 = 0LL;
  Handle = 0LL;
  v2 = NtCurrentTeb();
  if ( !Thread )
    goto LABEL_2;
  if ( ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, Thread, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &Handle, 0x818u, 0, 0) >= 0 )
  {
    if ( ZwQueryInformationThread(Handle, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL) >= 0
      && v2->ClientId.UniqueProcess == v11 )
    {
      if ( v2->ClientId.UniqueThread == v12 )
      {
LABEL_2:
        v3 = v2->ThreadPoolData == 0LL;
LABEL_3:
        v4 = !v3;
        goto LABEL_4;
      }
      v7 = &v6;
      v9 = 8;
      v8 = 6008;
      if ( ZwQueryInformationThread(Handle, ThreadTebInformation, &v7, 0x10u, 0LL) >= 0 )
      {
        v3 = v6 == 0;
        goto LABEL_3;
      }
    }
  }
  else
  {
    Handle = 0LL;
  }
  v4 = 0;
LABEL_4:
  if ( Handle )
    NtClose(Handle);
  if ( v4 )
  {
    DbgPrintEx(
      0x54u,
      0,
      "ThreadPool: attempt to terminate a worker thread via handle %p\n"
      "Contact the owner of the function calling Terminate/Exit thread.\n",
      Thread);
    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    ExceptionRecord.ExceptionCode = -1073740004;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)Thread;
    RtlRaiseException(&ExceptionRecord);
  }
}
