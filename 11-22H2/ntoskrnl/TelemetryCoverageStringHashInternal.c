/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x140364D7C
 * Callers:
 *     EtwpCoverageValidateCP @ 0x140364D1C (EtwpCoverageValidateCP.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1405FF820 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     PsSetProcessFaultInformation @ 0x140683030 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x1408037CC (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x1408579E4 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageProvEnableCallback @ 0x140861CE0 (EtwpCoverageProvEnableCallback.c)
 *     EtwpCoverageReset @ 0x1409E850C (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1409E86F0 (EtwpCoverageResetCP.c)
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
