/*
 * XREFs of SmscMain @ 0x1400048D8
 * Callers:
 *     wmain @ 0x140001BC0 (wmain.c)
 * Callees:
 *     SmscpLoadSubSystemsForMuSession @ 0x140004430 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x140004B10 (SmscpExecuteInitialCommand.c)
 *     SmpLoadPnPSerializeSettings @ 0x140004D7C (SmpLoadPnPSerializeSettings.c)
 *     SmscpParseArgs @ 0x140006130 (SmscpParseArgs.c)
 *     SmscpNotifySmOfFailure @ 0x14001B1E8 (SmscpNotifySmOfFailure.c)
 */

char __fastcall SmscMain(unsigned int a1, __int64 a2, int a3)
{
  int v3; // eax
  int v6; // eax
  void *v7; // rcx
  int i; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // ebx
  int SubSystemsForMuSession; // edx
  signed __int32 v14; // ecx
  __int64 v15; // rax
  signed __int32 v16; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  char v19; // [rsp+60h] [rbp+30h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+38h] BYREF

  v3 = SmpDebug;
  if ( a3 )
    v3 = a3;
  SmpDefaultEnvironment = 0LL;
  SmpDebug = v3;
  RtlCreateTagHeap(*(HANDLE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PWSTR)L"SMSC!", (PWSTR)L"PARS");
  RtlInitUnicodeString(&DestinationString, 0LL);
  v6 = SmscpParseArgs(a1, a2, &v19, &DestinationString);
  if ( v6 >= 0 )
  {
    v7 = *(void **)SmscpSharedWindow;
    *(_OWORD *)SmscpSharedWindow = 0LL;
    *(_DWORD *)SmscpSharedWindow = 0;
    NtSetEvent(v7, 0LL);
    Interval.QuadPart = -50000000LL;
    for ( i = RtlConnectToSm(0LL, 0LL, 0LL, &SmpApiConnectionPort);
          ;
          i = RtlConnectToSm(0LL, 0LL, 0LL, &SmpApiConnectionPort) )
    {
      v11 = i;
      if ( i >= 0 )
        break;
      v10 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v10 + 3] = v11;
      SmpGlobalLog[2 * v10 + 2] = 279;
      *(_QWORD *)&SmpGlobalLog[2 * v10 + 4] = a2;
      NtDelayExecution(0, &Interval);
      Interval.QuadPart = -50000000LL;
    }
    v12 = *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL);
    SmpLoadPnPSerializeSettings(v9, (unsigned int)i);
    SubSystemsForMuSession = SmscpLoadSubSystemsForMuSession(v12);
    if ( SubSystemsForMuSession >= 0 )
    {
      v6 = SmscpExecuteInitialCommand(v12, &v19, &DestinationString);
      SubSystemsForMuSession = v6;
      if ( v6 >= 0 )
        return v6;
      v16 = _InterlockedIncrement(SmpGlobalLog) % 64;
      v15 = 2LL * v16;
      SmpGlobalLog[4 * v16 + 2] = 326;
    }
    else
    {
      v14 = _InterlockedIncrement(SmpGlobalLog) % 64;
      v15 = 2LL * v14;
      SmpGlobalLog[4 * v14 + 2] = 306;
    }
    *(_QWORD *)&SmpGlobalLog[2 * v15 + 4] = a2;
    SmpGlobalLog[2 * v15 + 3] = SubSystemsForMuSession;
    SmscpNotifySmOfFailure();
    JUMPOUT(0x140004B00LL);
  }
  if ( DestinationString.Buffer )
    LOBYTE(v6) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  return v6;
}
