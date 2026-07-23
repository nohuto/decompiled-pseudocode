/*
 * XREFs of PopPowerRequestStatsIsDetailedRequestReason @ 0x1407A8140
 * Callers:
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A7F20 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140317A00 (PsGetCurrentProcess.c)
 *     strncmp @ 0x1403D9070 (strncmp.c)
 */

char __fastcall PopPowerRequestStatsIsDetailedRequestReason(__int64 a1)
{
  char v1; // bl
  int v2; // ecx
  unsigned int v3; // edi
  const char **v4; // rsi
  const char *p_ActiveProcessors; // rbp
  const char *v6; // rdx
  size_t v7; // r8

  v1 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( *(_DWORD *)a1 )
    {
      v2 = *(_DWORD *)((a1 + 63) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (v2 & 1) == 0 && (v2 & 2) != 0 )
      {
        v3 = 0;
        v4 = (const char **)PopPowerRequestStatsVerboseProcessList;
        p_ActiveProcessors = (const char *)&PsGetCurrentProcess()[1].ActiveProcessors;
        while ( 1 )
        {
          v6 = *v4;
          v7 = -1LL;
          do
            ++v7;
          while ( v6[v7] );
          if ( !strncmp(p_ActiveProcessors, v6, v7) )
            break;
          ++v3;
          ++v4;
          if ( v3 >= 2 )
            return v1;
        }
        return 1;
      }
    }
  }
  return v1;
}
