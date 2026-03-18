/*
 * XREFs of _lambda_fd7880233c47f7262ae148d93969aca2_::operator() @ 0x1C0048D0C
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C004894C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall lambda_fd7880233c47f7262ae148d93969aca2_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ebx

  v4 = 2LL * (unsigned int)(a3 - 1);
  if ( *((_DWORD *)&off_1C024A5C0 + 4 * (unsigned int)(a3 - 1) + 2) != (_DWORD)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  v6 = ((__int64 (__fastcall *)(_QWORD, __int64))*(&off_1C024A5C0 + v4))(*a1, a2);
  qword_1C029A1C8 = 0LL;
  v7 = v6;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
