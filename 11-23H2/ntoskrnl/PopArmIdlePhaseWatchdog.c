/*
 * XREFs of PopArmIdlePhaseWatchdog @ 0x140883AB4
 * Callers:
 *     PopProcessSessionDisplayStateChange @ 0x1407A93C8 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     ZwPowerInformation @ 0x14041BCD0 (ZwPowerInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x140883BD8 (PopPdcAreAllPhasesDisengaged.c)
 *     PopSnapSystemIdleContext @ 0x140883C00 (PopSnapSystemIdleContext.c)
 */

void __fastcall PopArmIdlePhaseWatchdog(int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int v3; // edi
  int v4; // eax
  int v5; // edi
  _QWORD InputBuffer[14]; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+B8h] [rbp+6Fh] BYREF
  void *v8; // [rsp+C0h] [rbp+77h] BYREF

  v8 = 0LL;
  v7 = 0;
  v1 = PopPdcIdlePhaseWatchdogContext;
  v2 = a1;
  if ( PopPdcIdlePhaseWatchdogContext && (unsigned __int8)PopPdcAreAllPhasesDisengaged() )
  {
    PopSnapSystemIdleContext(&v8, &v7);
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C39F08);
    v3 = v7;
    qword_140C39F18 = v8;
    dword_140C39F20 = v7;
    PopReleaseRwLock((__int64 *)&xmmword_140C39F08);
    if ( (unsigned int)v2 <= 0x10 && (v4 = 69728, _bittest(&v4, v2)) )
      v5 = PopIdleScanInterval + v3;
    else
      v5 = PopPdcIdlePhaseDefaultWatchdogTimeoutSeconds;
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = v1;
    LODWORD(InputBuffer[3]) = 160;
    InputBuffer[4] = 2050LL;
    LODWORD(InputBuffer[2]) = 1000 * v5;
    InputBuffer[6] = (unsigned int)PopEventProcessorEnabled;
    InputBuffer[7] = &PopPdcIdlePhaseWatchdogContext;
    InputBuffer[10] = InputBuffer;
    InputBuffer[9] = PopIdlePhaseWatchdogCallback;
    InputBuffer[5] = v2;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
  }
}
