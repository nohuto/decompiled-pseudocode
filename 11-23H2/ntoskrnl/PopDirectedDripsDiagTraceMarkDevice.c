/*
 * XREFs of PopDirectedDripsDiagTraceMarkDevice @ 0x14099F338
 * Callers:
 *     PopDirectedDripsMarkCandidateDevice @ 0x1409839AC (PopDirectedDripsMarkCandidateDevice.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14099E0CC (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 */

signed __int32 __fastcall PopDirectedDripsDiagTraceMarkDevice(__int64 a1)
{
  _QWORD *DeviceDiagnostic; // rax
  REGHANDLE v2; // rbx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  v4 = a1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  DeviceDiagnostic = *(_QWORD **)(v4 + 776);
  if ( DeviceDiagnostic || (DeviceDiagnostic = PopDirectedDripsDiagCreateDeviceDiagnostic(v4)) != 0LL )
    ++*((_DWORD *)DeviceDiagnostic + 36);
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_MARK_DEVICE) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      UserData.Size = 1;
      v6 = &v4;
      v7 = 8;
      EtwWrite(v2, &POP_ETW_EVENT_DIRECTED_DRIPS_MARK_DEVICE, 0LL, 2u, &UserData);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
