/*
 * XREFs of RtlpQueryCriticalSectionOwner32 @ 0x1800E30BC
 * Callers:
 *     RtlpQueryCriticalSectionOwner @ 0x1800E2FBC (RtlpQueryCriticalSectionOwner.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x18009F5D0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlpQueryCriticalSectionOwner32(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  int v5; // [rsp+30h] [rbp-48h]
  unsigned int v6; // [rsp+3Ch] [rbp-3Ch]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  __int16 v8; // [rsp+66h] [rbp-12h]

  v2 = 0;
  v3 = a2 - 4;
  if ( (int)ZwReadVirtualMemory() >= 0 && v5 && (int)ZwReadVirtualMemory() >= 0 && v7 == v3 && v8 == 17235 )
    return v6;
  return v2;
}
