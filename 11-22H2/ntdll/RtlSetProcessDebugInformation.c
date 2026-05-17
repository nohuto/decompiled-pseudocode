/*
 * XREFs of RtlSetProcessDebugInformation @ 0x1800E2BA0
 * Callers:
 *     RtlpSetProcessDebugInformationRemote @ 0x1800E3680 (RtlpSetProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000270C (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpCreateUserThreadEx @ 0x18005F2F0 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x18009EE70 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18009F290 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x18009F830 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18009F850 (NtTerminateThread.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpSetProcessBacktraces @ 0x1800E362C (RtlpSetProcessBacktraces.c)
 *     AVrfpSetProcessVerifierOptions @ 0x1800E5710 (AVrfpSetProcessVerifierOptions.c)
 */

__int64 __fastcall RtlSetProcessDebugInformation(void *a1, int a2, __int64 a3)
{
  int InformationThread; // ebx
  char v5; // si
  __int64 result; // rax
  unsigned __int64 v7; // r8
  HANDLE v8; // rdi
  __int64 v9; // [rsp+30h] [rbp-78h]
  int v10; // [rsp+60h] [rbp-48h]
  HANDLE v11; // [rsp+B0h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+C8h] [rbp+20h] BYREF

  Timeout.QuadPart = -600000000LL;
  InformationThread = 0;
  *(_DWORD *)(a3 + 64) = a2;
  v5 = a2;
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 )
  {
    if ( ((a2 & 1) == 0 || (InformationThread = AVrfpSetProcessVerifierOptions(a3)) == 0) && (v5 & 2) != 0 )
      return (unsigned int)RtlpSetProcessBacktraces(a3);
  }
  else
  {
    v11 = 0LL;
    result = RtlpChangeQueryDebugBufferTarget((_QWORD *)a3, (__int64)a1, 0, &v11);
    if ( (int)result < 0 )
      return result;
    v7 = *(_QWORD *)(a3 + 72);
    if ( v7 > 0xD0 )
      memmove((void *)(*(_QWORD *)(a3 + 88) + a3 + 208), (const void *)(a3 + 208), v7 - 208);
    InformationThread = RtlpCreateUserThreadEx(
                          (__int64)v11,
                          0LL,
                          7,
                          0,
                          0LL,
                          0LL,
                          v9,
                          (__int64)RtlpSetProcessDebugInformationRemote,
                          *(_QWORD *)(a3 + 16),
                          &Handle,
                          0LL);
    if ( InformationThread >= 0 )
    {
      v8 = Handle;
      InformationThread = ZwResumeThread();
      if ( InformationThread < 0 || (InformationThread = NtWaitForSingleObject(v8, 1u, &Timeout), InformationThread < 0) )
      {
        NtTerminateThread();
      }
      else
      {
        InformationThread = ZwQueryInformationThread();
        if ( InformationThread >= 0 )
          InformationThread = v10;
      }
      NtClose(v8);
    }
    NtClose(v11);
  }
  return (unsigned int)InformationThread;
}
