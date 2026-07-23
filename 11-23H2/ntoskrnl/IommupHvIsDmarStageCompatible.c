/*
 * XREFs of IommupHvIsDmarStageCompatible @ 0x140525520
 * Callers:
 *     HalpIommuDeviceGetDomainTypes @ 0x14050E3C8 (HalpIommuDeviceGetDomainTypes.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

bool __fastcall IommupHvIsDmarStageCompatible(_DWORD *a1, char a2)
{
  bool v3; // zf
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( a2 )
    v3 = HalpHvParaVirtIommuDomain == 0;
  else
    v3 = HalpHvIommuDeviceDomain == 0;
  if ( !v3 && *a1 == 1 && (int)((__int64 (__fastcall *)(_DWORD *, __int128 *))qword_140C62580)(a1, &v5) >= 0 )
  {
    if ( a2 )
      return (v5 & 0x20) != 0;
    if ( (v5 & 0x10) != 0 )
      return 1;
  }
  return 0;
}
