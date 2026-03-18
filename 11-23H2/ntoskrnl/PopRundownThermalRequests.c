/*
 * XREFs of PopRundownThermalRequests @ 0x1409833F0
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1408629E0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceThermalRequest @ 0x140860AF4 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1408615EC (PopDiagTraceCoolingExtension.c)
 */

void PopRundownThermalRequests()
{
  __int64 i; // rbx
  __int64 j; // rdi

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      PopDiagTraceCoolingExtension(i, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COOLING_EXTENSION_RUNDOWN);
      for ( j = *(_QWORD *)(i + 16); j != i + 16; j = *(_QWORD *)j )
      {
        if ( *(_BYTE *)(j + 18) )
          PopDiagTraceThermalRequest(j, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_THERMAL_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock((__int64 *)(i + 32));
    }
  }
  PopReleaseRwLock(&PopCoolingExtensionLock);
}
