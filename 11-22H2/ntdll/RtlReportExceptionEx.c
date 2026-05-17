/*
 * XREFs of RtlReportExceptionEx @ 0x1800E6DE0
 * Callers:
 *     WerReportExceptionWorker @ 0x1800E7AD0 (WerReportExceptionWorker.c)
 * Callees:
 *     WerpProcessId @ 0x180051AEC (WerpProcessId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x18009F370 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x18009F570 (ZwDuplicateObject.c)
 *     ReportExceptionInternal @ 0x1800E6BD8 (ReportExceptionInternal.c)
 *     RtlReportException @ 0x1800E6D10 (RtlReportException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800E7C6C (WerpBreakIntoDebuggerIfPresent.c)
 *     WerpCreateCompletionEvent @ 0x1800E7CC0 (WerpCreateCompletionEvent.c)
 *     WerpCreateCrashDataSection @ 0x1800E7D24 (WerpCreateCrashDataSection.c)
 *     WerpSetProcessFaultInformation @ 0x1800E7F18 (WerpSetProcessFaultInformation.c)
 *     WerpThreadId @ 0x1800E7F58 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x1800E7F90 (WerpWaitForCrashReporting.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlReportExceptionEx(__int64 a1, __int64 a2, unsigned int a3, void *a4, __int64 a5)
{
  int v8; // esi
  int v9; // eax
  struct _TEB *v10; // rcx
  bool v11; // zf
  int v12; // ecx
  int v14; // ebx
  _DWORD *v15; // rcx
  int v16; // ebx
  _DWORD *v17; // rdx
  _OWORD *v18; // r9
  __int64 v19; // rax
  HANDLE v20; // [rsp+40h] [rbp-98h] BYREF
  _DWORD *v21; // [rsp+48h] [rbp-90h] BYREF
  HANDLE v22; // [rsp+50h] [rbp-88h]
  HANDLE v23; // [rsp+58h] [rbp-80h]
  void *v24; // [rsp+60h] [rbp-78h]
  HANDLE Handle; // [rsp+68h] [rbp-70h] BYREF
  HANDLE v26; // [rsp+70h] [rbp-68h] BYREF
  int v27; // [rsp+78h] [rbp-60h]
  int v28; // [rsp+7Ch] [rbp-5Ch]
  __int64 v29; // [rsp+80h] [rbp-58h]
  _QWORD v30[4]; // [rsp+88h] [rbp-50h] BYREF

  v24 = a4;
  v29 = a5;
  v23 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  v26 = 0LL;
  v21 = 0LL;
  v8 = WerpProcessId(a4);
  v27 = v8;
  v9 = WerpThreadId(a5);
  v28 = v9;
  v10 = NtCurrentTeb();
  if ( v8 != LODWORD(v10->ClientId.UniqueProcess) || (v11 = v9 == LODWORD(v10->ClientId.UniqueThread), v12 = 1, !v11) )
    v12 = 0;
  if ( v12 )
    return RtlReportException(a1, a2, a3);
  if ( v8 == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    WerpBreakIntoDebuggerIfPresent(a1, a2, a3);
  if ( (a3 & 4) != 0 || (v14 = WerpSetProcessFaultInformation(v24), v14 >= 0) )
  {
    v14 = WerpCreateCompletionEvent(&v20);
    if ( v14 >= 0 )
    {
      v14 = WerpCreateCrashDataSection(&v26, &v21);
      if ( v14 >= 0 )
      {
        v14 = ZwDuplicateObject();
        if ( v14 >= 0 )
        {
          v14 = ZwDuplicateObject();
          if ( v14 >= 0 )
          {
            v15 = v21;
            *v21 = 248;
            *((_QWORD *)v15 + 21) = 1LL;
            v16 = v27;
            v15[1] = v27;
            v15[2] = v28;
            *((_QWORD *)v15 + 23) = v23;
            *((_QWORD *)v15 + 24) = v22;
            *((_QWORD *)v15 + 26) = v20;
            *((_QWORD *)v15 + 28) = 0LL;
            v15[58] = -1073741823;
            v15[59] = a3;
            v17 = v21;
            v21[60] = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
            v18 = v17 + 104;
            *((_QWORD *)v17 + 31) = 1LL;
            *(_OWORD *)(v17 + 66) = *(_OWORD *)a1;
            *(_OWORD *)(v17 + 70) = *(_OWORD *)(a1 + 16);
            *(_OWORD *)(v17 + 74) = *(_OWORD *)(a1 + 32);
            *(_OWORD *)(v17 + 78) = *(_OWORD *)(a1 + 48);
            *(_OWORD *)(v17 + 82) = *(_OWORD *)(a1 + 64);
            *(_OWORD *)(v17 + 86) = *(_OWORD *)(a1 + 80);
            *(_OWORD *)(v17 + 90) = *(_OWORD *)(a1 + 96);
            *(_OWORD *)(v17 + 94) = *(_OWORD *)(a1 + 112);
            *(_OWORD *)(v17 + 98) = *(_OWORD *)(a1 + 128);
            *((_QWORD *)v17 + 51) = *(_QWORD *)(a1 + 144);
            if ( (a2 & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              *((_QWORD *)v17 + 32) = 1LL;
              v19 = 9LL;
              do
              {
                *v18 = *(_OWORD *)a2;
                v18[1] = *(_OWORD *)(a2 + 16);
                v18[2] = *(_OWORD *)(a2 + 32);
                v18[3] = *(_OWORD *)(a2 + 48);
                v18[4] = *(_OWORD *)(a2 + 64);
                v18[5] = *(_OWORD *)(a2 + 80);
                v18[6] = *(_OWORD *)(a2 + 96);
                v18 += 8;
                *(v18 - 1) = *(_OWORD *)(a2 + 112);
                a2 += 128LL;
                --v19;
              }
              while ( v19 );
              *v18 = *(_OWORD *)a2;
              v18[1] = *(_OWORD *)(a2 + 16);
              v18[2] = *(_OWORD *)(a2 + 32);
              v18[3] = *(_OWORD *)(a2 + 48);
              v18[4] = *(_OWORD *)(a2 + 64);
            }
            else
            {
              *((_QWORD *)v17 + 32) = 2LL;
              memset_thunk_772440563353939046(v18, 0, 0x4D0uLL);
            }
            v30[0] = v20;
            v30[1] = v26;
            v30[2] = v23;
            v30[3] = v22;
            v14 = ReportExceptionInternal(v16, (__int64)v26, v30, 4u, a3, &Handle);
            if ( v14 >= 0 )
            {
              v14 = WerpWaitForCrashReporting(v24, v20, Handle, 0LL);
              if ( v14 >= 0 )
              {
                if ( (a3 & 4) != 0 || (v14 = ZwTerminateProcess(), v14 >= 0) )
                  v14 = 0;
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( v21 )
    NtUnmapViewOfSection();
  if ( v26 )
    NtClose(v26);
  if ( v20 )
  {
    NtClose(v20);
    v20 = 0LL;
  }
  if ( v22 )
    NtClose(v22);
  if ( v23 )
    NtClose(v23);
  return (unsigned int)v14;
}
