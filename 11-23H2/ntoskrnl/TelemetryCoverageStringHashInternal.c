/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x1403653CC
 * Callers:
 *     EtwpCoverageValidateCP @ 0x14036536C (EtwpCoverageValidateCP.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1405FF790 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     PsSetProcessFaultInformation @ 0x140683030 (PsSetProcessFaultInformation.c)
 *     EtwpCoverageEnsureContext @ 0x140856AD4 (EtwpCoverageEnsureContext.c)
 *     PopTransitionTelemetryOsState @ 0x140859174 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageProvEnableCallback @ 0x140861C10 (EtwpCoverageProvEnableCallback.c)
 *     EtwpCoverageReset @ 0x1409E845C (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1409E8640 (EtwpCoverageResetCP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TelemetryCoverageStringHashInternal(_BYTE *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // r10d
  unsigned int v4; // r9d

  v2 = -2128831035;
  v3 = (int)a1;
  v4 = 1;
  while ( *a1 )
    v2 = (char)*a1++ + 16777619 * v2;
  *a2 = (_DWORD)a1 - v3;
  if ( v2 )
    return v2;
  return v4;
}
