/*
 * XREFs of EtwCheckCoverage @ 0x180089260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl EtwCheckCoverage(PTELEMETRY_COVERAGE_POINT CoveragePoint)
{
  unsigned int *TelemetryCoverageHeader; // rdx
  ULONG Hash; // r8d
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // r10
  unsigned int *v7; // rcx
  unsigned int *i; // rax

  TelemetryCoverageHeader = (unsigned int *)NtCurrentPeb()->TelemetryCoverageHeader;
  if ( !TelemetryCoverageHeader || (*((_BYTE *)TelemetryCoverageHeader + 2) & 1) != 0 )
    return 0;
  Hash = CoveragePoint->Hash;
  v4 = TelemetryCoverageHeader[1];
  v5 = Hash & TelemetryCoverageHeader[2];
  v6 = (unsigned __int64)&TelemetryCoverageHeader[v4 + 13];
  if ( v5 >= (unsigned int)v4 )
    v5 = v5 - (unsigned int)v4 < (unsigned int)v4 ? v5 - v4 : 0;
  v7 = &TelemetryCoverageHeader[v5 + 13];
  i = v7;
  if ( (unsigned __int64)v7 >= v6 )
  {
LABEL_11:
    for ( i = TelemetryCoverageHeader + 13; i < v7; ++i )
    {
      if ( !*i )
        goto LABEL_7;
      if ( *i == Hash )
        goto LABEL_10;
    }
    i = 0LL;
  }
  else
  {
    while ( *i )
    {
      if ( *i == Hash )
        goto LABEL_10;
      if ( (unsigned __int64)++i >= v6 )
        goto LABEL_11;
    }
  }
LABEL_7:
  if ( *i != Hash )
    return 0;
LABEL_10:
  CoveragePoint->LastCoveredRound = TelemetryCoverageHeader[6];
  return 1;
}
