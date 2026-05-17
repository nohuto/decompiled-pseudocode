/*
 * XREFs of RtlpQueryCriticalSectionOwner64 @ 0x1800E315C
 * Callers:
 *     RtlpQueryCriticalSectionOwner @ 0x1800E2FBC (RtlpQueryCriticalSectionOwner.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x18009F5D0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlpQueryCriticalSectionOwner64(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // [rsp+30h] [rbp-68h]
  __int64 v6; // [rsp+40h] [rbp-58h]
  __int64 v7; // [rsp+60h] [rbp-38h]
  __int16 v8; // [rsp+86h] [rbp-12h]

  v2 = 0LL;
  v3 = a2 - 8;
  if ( (int)ZwReadVirtualMemory() >= 0 && v5 && (int)ZwReadVirtualMemory() >= 0 && v7 == v3 && v8 == 17235 )
    return v6;
  return v2;
}
