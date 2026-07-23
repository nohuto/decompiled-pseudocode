/*
 * XREFs of RtlReportExceptionEx @ 0x1800E8110
 * Callers:
 *     WerReportExceptionWorker @ 0x1800E8E00 (WerReportExceptionWorker.c)
 * Callees:
 *     WerpProcessId @ 0x18005198C (WerpProcessId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x1800A1630 (ZwDuplicateObject.c)
 *     ReportExceptionInternal @ 0x1800E7F08 (ReportExceptionInternal.c)
 *     RtlReportException @ 0x1800E8040 (RtlReportException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800E8F9C (WerpBreakIntoDebuggerIfPresent.c)
 *     WerpCreateCompletionEvent @ 0x1800E8FF0 (WerpCreateCompletionEvent.c)
 *     WerpCreateCrashDataSection @ 0x1800E9054 (WerpCreateCrashDataSection.c)
 *     WerpSetProcessFaultInformation @ 0x1800E9248 (WerpSetProcessFaultInformation.c)
 *     WerpThreadId @ 0x1800E9288 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x1800E92C0 (WerpWaitForCrashReporting.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlReportExceptionEx(
        PEXCEPTION_RECORD ExceptionRecord,
        PCONTEXT ContextRecord,
        ULONG Flags,
        PLARGE_INTEGER Timeout)
{
  int v7; // esi
  int v8; // eax
  struct _TEB *v9; // rcx
  bool v10; // zf
  int v11; // ecx
  NTSTATUS v13; // ebx
  _QWORD *v14; // rcx
  int v15; // ebx
  char *v16; // rdx
  _OWORD *v17; // r9
  __int64 v18; // rax
  HANDLE v19; // [rsp+40h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-90h] BYREF
  HANDLE v21; // [rsp+50h] [rbp-88h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-80h] BYREF
  HANDLE SourceHandle; // [rsp+60h] [rbp-78h]
  HANDLE Handle; // [rsp+68h] [rbp-70h] BYREF
  HANDLE v25; // [rsp+70h] [rbp-68h] BYREF
  int v26; // [rsp+78h] [rbp-60h]
  int v27; // [rsp+7Ch] [rbp-5Ch]
  HANDLE v28; // [rsp+80h] [rbp-58h]
  _QWORD v29[4]; // [rsp+88h] [rbp-50h] BYREF
  void *v30; // [rsp+100h] [rbp+28h]

  SourceHandle = Timeout;
  v28 = v30;
  TargetHandle = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  Handle = 0LL;
  v25 = 0LL;
  BaseAddress = 0LL;
  v7 = WerpProcessId(Timeout);
  v26 = v7;
  v8 = WerpThreadId(v30);
  v27 = v8;
  v9 = NtCurrentTeb();
  if ( v7 != LODWORD(v9->ClientId.UniqueProcess) || (v10 = v8 == LODWORD(v9->ClientId.UniqueThread), v11 = 1, !v10) )
    v11 = 0;
  if ( v11 )
    return RtlReportException(ExceptionRecord, ContextRecord, Flags);
  if ( v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    WerpBreakIntoDebuggerIfPresent(ExceptionRecord, ContextRecord);
  if ( (Flags & 4) != 0 || (v13 = WerpSetProcessFaultInformation(SourceHandle), v13 >= 0) )
  {
    v13 = WerpCreateCompletionEvent(&v19);
    if ( v13 >= 0 )
    {
      v13 = WerpCreateCrashDataSection(&v25, &BaseAddress);
      if ( v13 >= 0 )
      {
        v13 = ZwDuplicateObject(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                SourceHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &TargetHandle,
                0x1FFFFFu,
                2u,
                0);
        if ( v13 >= 0 )
        {
          v13 = ZwDuplicateObject(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  v28,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &v21,
                  0x1FFFFFu,
                  2u,
                  0);
          if ( v13 >= 0 )
          {
            v14 = BaseAddress;
            *(_DWORD *)BaseAddress = 248;
            v14[21] = 1LL;
            v15 = v26;
            *((_DWORD *)v14 + 1) = v26;
            *((_DWORD *)v14 + 2) = v27;
            v14[23] = TargetHandle;
            v14[24] = v21;
            v14[26] = v19;
            v14[28] = 0LL;
            *((_DWORD *)v14 + 58) = -1073741823;
            *((_DWORD *)v14 + 59) = Flags;
            v16 = (char *)BaseAddress;
            *((_DWORD *)BaseAddress + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
            v17 = v16 + 416;
            *((_QWORD *)v16 + 31) = 1LL;
            *(_OWORD *)(v16 + 264) = *(_OWORD *)&ExceptionRecord->ExceptionCode;
            *(_OWORD *)(v16 + 280) = *(_OWORD *)&ExceptionRecord->ExceptionAddress;
            *(_OWORD *)(v16 + 296) = *(_OWORD *)ExceptionRecord->ExceptionInformation;
            *(_OWORD *)(v16 + 312) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[2];
            *(_OWORD *)(v16 + 328) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[4];
            *(_OWORD *)(v16 + 344) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[6];
            *(_OWORD *)(v16 + 360) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[8];
            *(_OWORD *)(v16 + 376) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[10];
            *(_OWORD *)(v16 + 392) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[12];
            *((_QWORD *)v16 + 51) = ExceptionRecord->ExceptionInformation[14];
            if ( ((unsigned __int64)ContextRecord & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              *((_QWORD *)v16 + 32) = 1LL;
              v18 = 9LL;
              do
              {
                *v17 = *(_OWORD *)&ContextRecord->P1Home;
                v17[1] = *(_OWORD *)&ContextRecord->P3Home;
                v17[2] = *(_OWORD *)&ContextRecord->P5Home;
                v17[3] = *(_OWORD *)&ContextRecord->ContextFlags;
                v17[4] = *(_OWORD *)&ContextRecord->SegGs;
                v17[5] = *(_OWORD *)&ContextRecord->Dr1;
                v17[6] = *(_OWORD *)&ContextRecord->Dr3;
                v17 += 8;
                *(v17 - 1) = *(_OWORD *)&ContextRecord->Dr7;
                ContextRecord = (PCONTEXT)((char *)ContextRecord + 128);
                --v18;
              }
              while ( v18 );
              *v17 = *(_OWORD *)&ContextRecord->P1Home;
              v17[1] = *(_OWORD *)&ContextRecord->P3Home;
              v17[2] = *(_OWORD *)&ContextRecord->P5Home;
              v17[3] = *(_OWORD *)&ContextRecord->ContextFlags;
              v17[4] = *(_OWORD *)&ContextRecord->SegGs;
            }
            else
            {
              *((_QWORD *)v16 + 32) = 2LL;
              memset_thunk_772440563353939046(v17, 0, 0x4D0uLL);
            }
            v29[0] = v19;
            v29[1] = v25;
            v29[2] = TargetHandle;
            v29[3] = v21;
            v13 = ReportExceptionInternal(v15, (__int64)v25, v29, 4u, Flags, &Handle);
            if ( v13 >= 0 )
            {
              v13 = WerpWaitForCrashReporting(SourceHandle, v19, Handle, 0LL);
              if ( v13 >= 0 )
              {
                if ( (Flags & 4) != 0
                  || (v13 = ZwTerminateProcess(SourceHandle, ExceptionRecord->ExceptionCode), v13 >= 0) )
                {
                  v13 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( v25 )
    NtClose(v25);
  if ( v19 )
  {
    NtClose(v19);
    v19 = 0LL;
  }
  if ( v21 )
    NtClose(v21);
  if ( TargetHandle )
    NtClose(TargetHandle);
  return v13;
}
