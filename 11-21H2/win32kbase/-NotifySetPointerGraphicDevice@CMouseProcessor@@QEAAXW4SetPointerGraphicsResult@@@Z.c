/*
 * XREFs of ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x1C00B9E8C
 * Callers:
 *     NotifySetPointerGraphicDevice @ 0x1C00B9E60 (NotifySetPointerGraphicDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::NotifySetPointerGraphicDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rbx

  v3 = a2;
  if ( !(_DWORD)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = a1 + 3824;
  RIMLockExclusive(v5);
  if ( *(_BYTE *)(v5 + 16) && v3 > 0 )
  {
    if ( v3 <= 2 )
    {
      if ( *(_BYTE *)(v5 + 17) )
        *(_BYTE *)(v5 + 17) = 0;
    }
    else if ( v3 == 3 )
    {
      *(_BYTE *)(v5 + 17) = 1;
    }
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
