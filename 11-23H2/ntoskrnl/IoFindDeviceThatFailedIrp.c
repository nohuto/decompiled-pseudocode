/*
 * XREFs of IoFindDeviceThatFailedIrp @ 0x140367F44
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x14028E7A4 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x14028E824 (PopDiagTraceIrpFinishTelemetry.c)
 *     PnpDeviceCompletionRoutine @ 0x140322BD0 (PnpDeviceCompletionRoutine.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405652D0 (PnpDiagnosticCompletionRoutine.c)
 *     PopSystemIrpCompletion @ 0x140AA7430 (PopSystemIrpCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoFindDeviceThatFailedIrp(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v1 = *(char *)(a1 + 66);
  v2 = 0;
  if ( *(int *)(a1 + 48) >= 0 )
    return 0LL;
  v3 = a1 + 72LL * (v1 - 1) + 208;
  if ( !v1 )
    return 0LL;
  while ( (*(_BYTE *)(v3 + 3) & 2) == 0 )
  {
    ++v2;
    v3 -= 72LL;
    if ( v2 >= v1 )
      return 0LL;
  }
  return *(_QWORD *)(v3 + 40);
}
