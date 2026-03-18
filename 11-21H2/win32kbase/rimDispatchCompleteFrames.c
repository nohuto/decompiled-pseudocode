/*
 * XREFs of rimDispatchCompleteFrames @ 0x1C00E6CDC
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C01A9638 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x1C01A9900 (rimProcessCompleteFrame.c)
 * Callees:
 *     rimSignalReadComplete @ 0x1C0003DB8 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C0004590 (rimStackAttachAndProcessInput.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     HMAssignmentLock @ 0x1C003A420 (HMAssignmentLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LARGE_INTEGER __fastcall rimDispatchCompleteFrames(
        struct RawInputManagerObject *a1,
        LARGE_INTEGER *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int64 v6; // r15
  struct RawInputManagerObject *v8; // rdi
  LARGE_INTEGER *v9; // rsi
  unsigned __int64 v10; // r12
  LARGE_INTEGER *v11; // r14
  LARGE_INTEGER v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // rcx
  LARGE_INTEGER result; // rax
  _DWORD v17[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]
  __int64 *v19[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v20[2]; // [rsp+50h] [rbp-38h] BYREF

  v17[1] = 0;
  v17[0] = 0;
  v6 = a3;
  v8 = a1;
  v18 = a5;
  v9 = (LARGE_INTEGER *)a4;
  v10 = a5 + a4;
  if ( a4 < v10 )
  {
    do
    {
      v11 = v9;
      v9 = (LARGE_INTEGER *)((char *)v9 + v9->LowPart);
      if ( (a2[23].LowPart & 0x2000) != 0 )
      {
        if ( !gbIgnoreStressedOutStuff )
        {
          v12 = v11[4];
          if ( v12.QuadPart != a2[3].QuadPart && v12.QuadPart != a2[43].QuadPart )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
        }
        if ( !v11[24].LowPart )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      }
      v11[25].LowPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v11[26] = KeQueryPerformanceCounter(0LL);
    }
    while ( (unsigned __int64)v9 < v10 );
    v8 = a1;
    v6 = a3;
  }
  rimStackAttachAndProcessInput((__int64)v8, (__int64)a2, a4, (__int64)v17, 1);
  if ( !*((_QWORD *)v8 + 108) && !*((_BYTE *)v8 + 808) && a2[3].QuadPart )
  {
    v19[1] = (__int64 *)a2;
    v19[0] = (__int64 *)((char *)v8 + 48);
    HMAssignmentLock(v19, 0LL);
    v20[0] = (__int64 *)((char *)v8 + 56);
    v20[1] = (__int64 *)a2[59].QuadPart;
    HMAssignmentLock(v20, 0LL);
  }
  rimSignalReadComplete(v8, a2);
  v15 = *(char **)(a2[59].QuadPart + 1064);
  if ( v15 )
    Win32FreePool(v15);
  if ( *(_QWORD *)(v6 + 8) != v6 + 8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v13, v14);
  result = a2[59];
  *(_QWORD *)(result.QuadPart + 1064) = v6;
  return result;
}
