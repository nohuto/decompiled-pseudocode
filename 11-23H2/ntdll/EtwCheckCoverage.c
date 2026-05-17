/*
 * XREFs of EtwCheckCoverage @ 0x180089260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall EtwCheckCoverage(__int64 a1)
{
  unsigned int *TelemetryCoverageHeader; // rdx
  int v3; // r8d
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // r10
  unsigned int *v7; // rcx
  unsigned int *i; // rax

  TelemetryCoverageHeader = (unsigned int *)NtCurrentPeb()->TelemetryCoverageHeader;
  if ( !TelemetryCoverageHeader || (*((_BYTE *)TelemetryCoverageHeader + 2) & 1) != 0 )
    return 0;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = TelemetryCoverageHeader[1];
  v5 = v3 & TelemetryCoverageHeader[2];
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
      if ( *i == v3 )
        goto LABEL_10;
    }
    i = 0LL;
  }
  else
  {
    while ( *i )
    {
      if ( *i == v3 )
        goto LABEL_10;
      if ( (unsigned __int64)++i >= v6 )
        goto LABEL_11;
    }
  }
LABEL_7:
  if ( *i != v3 )
    return 0;
LABEL_10:
  *(_DWORD *)(a1 + 12) = TelemetryCoverageHeader[6];
  return 1;
}
