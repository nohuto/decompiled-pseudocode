/*
 * XREFs of TelemetryCoverageStringHashInternal @ 0x14036556C
 * Callers:
 *     EtwpCoverageValidateCP @ 0x14036550C (EtwpCoverageValidateCP.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1405FFD00 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     PsSetProcessFaultInformation @ 0x140683030 (PsSetProcessFaultInformation.c)
 *     EtwpCoverageEnsureContext @ 0x140856D14 (EtwpCoverageEnsureContext.c)
 *     PopTransitionTelemetryOsState @ 0x1408593B4 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageProvEnableCallback @ 0x140861E50 (EtwpCoverageProvEnableCallback.c)
 *     EtwpCoverageReset @ 0x1409E86EC (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1409E88D0 (EtwpCoverageResetCP.c)
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
